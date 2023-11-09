#include <iostream>
#include <sql.h>
#include <sqlext.h>

int main() {
    // Definir variables para la conexión y el statement
    SQLHENV hEnv;
    SQLHDBC hDbc;
    SQLHSTMT hStmt;
    // Inicializar el entorno
    SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &hEnv);
    SQLSetEnvAttr(hEnv, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, 0);

    // Inicializar la conexión
    SQLAllocHandle(SQL_HANDLE_DBC, hEnv, &hDbc);
    SQLDriverConnect(hDbc, NULL, (SQLWCHAR*)"DSN=TU_DSN;UID=TU_USUARIO;PWD=TU_CONTRASENA", SQL_NTS, NULL, 0, NULL, SQL_DRIVER_COMPLETE);

    // Crear un statement
    SQLAllocHandle(SQL_HANDLE_STMT, hDbc, &hStmt);

    // Ejecutar una consulta
    SQLCHAR query[] = "SELECT * FROM TU_TABLA";
    SQLExecDirect(hStmt, query, SQL_NTS);

    // Procesar los resultados
    SQLCHAR result[255];
    SQLINTEGER id;

    while (SQLFetch(hStmt) == SQL_SUCCESS) {
        SQLGetData(hStmt, 1, SQL_C_SLONG, &id, 0, NULL);
        SQLGetData(hStmt, 2, SQL_C_CHAR, result, sizeof(result), NULL);
        std::cout << "ID: " << id << ", Resultado: " << result << std::endl;
    }

    // Liberar recursos
    SQLFreeHandle(SQL_HANDLE_STMT, hStmt);
    SQLDisconnect(hDbc);
    SQLFreeHandle(SQL_HANDLE_DBC, hDbc);
    SQLFreeHandle(SQL_HANDLE_ENV, hEnv);

    return 0;
}
