#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <tchar.h>

// Función para procesar los mensajes de la ventana
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    static HWND hEdit;
    static double num1 = 0, num2 = 0;
    static int operatorType = 0; // 1: suma, 2: resta, 3: multiplicación, 4: división

    switch (message)
    {
    case WM_CREATE:
        hEdit = CreateWindowEx(0, _T("EDIT"), _T(""), WS_CHILD | WS_VISIBLE | WS_BORDER | ES_RIGHT, 10, 10, 200, 30, hWnd, (HMENU)1, NULL, NULL);
        CreateWindow(_T("BUTTON"), _T("1"), WS_CHILD | WS_VISIBLE, 10, 50, 40, 40, hWnd, (HMENU)101, NULL, NULL);
        // Agrega botones para otros dígitos y operadores aquí
        CreateWindow(_T("BUTTON"), _T("+"), WS_CHILD | WS_VISIBLE, 60, 50, 40, 40, hWnd, (HMENU)102, NULL, NULL);
        CreateWindow(_T("BUTTON"), _T("="), WS_CHILD | WS_VISIBLE, 110, 50, 40, 40, hWnd, (HMENU)103, NULL, NULL);
        break;
    case WM_COMMAND:
        if (LOWORD(wParam) == 101)
        {
            // Botón "1" presionado, agrega el dígito a la pantalla
            TCHAR text[255];
            GetWindowText(hEdit, text, sizeof(text) / sizeof(TCHAR));
            wcscat_s(text, _T("1"));
            SetWindowText(hEdit, text);
        }
        else if (LOWORD(wParam) == 102)
        {
            // Botón "+" presionado, guarda el número y establece el tipo de operación
            TCHAR text[255];
            GetWindowText(hEdit, text, sizeof(text) / sizeof(TCHAR));
            num1 = _wtof(text);
            operatorType = 1;
            SetWindowText(hEdit, _T(""));
        }
        else if (LOWORD(wParam) == 103)
        {
            // Botón "=" presionado, realiza la operación y muestra el resultado
            TCHAR text[255];
            GetWindowText(hEdit, text, sizeof(text) / sizeof(TCHAR));
            num2 = _wtof(text);
            double result = 0;

            // Realiza la operación
            switch (operatorType)
            {
            case 1:
                result = num1 + num2;
                break;
                // Agrega casos para otros operadores aquí
            }

            // Muestra el resultado en la pantalla
            _stprintf(text, _T("%f"), result);
            SetWindowText(hEdit, text);
        }
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    // Definir la clase de ventana
    WNDCLASSEX wcex;
    wcex.cbSize = sizeof(WNDCLASSEX);
    wcex.style = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc = WndProc;
    wcex.cbClsExtra = 0;
    wcex.cbWndExtra = 0;
    wcex.hInstance = hInstance;
    wcex.hIcon = LoadIcon(hInstance, IDI_APPLICATION);
    wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
    wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wcex.lpszMenuName = NULL;
    wcex.lpszClassName = _T("Calculator");
    wcex.hIconSm = LoadIcon(wcex.hInstance, IDI_APPLICATION);

    if (!RegisterClassEx(&wcex))
    {
        MessageBox(NULL, _T("Error al registrar la clase de ventana"), _T("Error"), MB_ICONERROR);
        return 1;
    }

    // Crear la ventana
    HWND hWnd = CreateWindow(_T("Calculator"), _T("Calculadora Básica"), WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, 0, 240, 220, NULL, NULL, hInstance, NULL);

    if (!hWnd)
    {
        MessageBox(NULL, _T("Error al crear la ventana"), _T("Error"), MB_ICONERROR);
        return 1;
    }

    ShowWindow(hWnd, nCmdShow);
    UpdateWindow(hWnd);

    // Bucle de mensajes
    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return (int)msg.wParam;
}
