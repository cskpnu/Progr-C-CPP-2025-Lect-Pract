#include <iostream>
#include <string>
#include <windows.h>
#include <vector>

// Функція для зчитування тексту в UTF-16 через WinAPI (без wcin)
std::wstring read_wstring() {
    std::wstring result;
    wchar_t buffer[256];  // Буфер для зчитування
    DWORD readChars;

    // Зчитування з консолі як UTF-16
    if (ReadConsoleW(GetStdHandle(STD_INPUT_HANDLE), buffer, 255, &readChars, nullptr)) {
        buffer[readChars - 2] = L'\0';  // Видаляємо `\r\n` (перехід на новий рядок)
        result = buffer;
    }
    return result;
}

// Функція для виводу широких символів
void print_wstring(const std::wstring& text) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD written;
    WriteConsoleW(hConsole, text.c_str(), text.length(), &written, nullptr);
}

int main() {
    // Встановлюємо кодування Windows Console у UTF-8
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    // Встановлюємо локаль для коректного введення широких символів
    _wsetlocale(LC_ALL, L"");

    print_wstring(L"Введіть текст українською: \n");

    // Читаємо введення через WinAPI (ReadConsoleW)
    std::wstring wp = read_wstring();
    std::wstring p = read_wstring();

    // Виводимо введений текст
    print_wstring(L"Ви ввели: " + wp + L"   " + p + L"\n");
    std::wcout << "Ви ввели: " << wp << "   " << p << std::endl;

    return 0;
}
