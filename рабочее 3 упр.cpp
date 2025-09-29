#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>
#include <io.h>
#include <fcntl.h>

int main() {
    // Установка локали и режима консоли для Unicode
    _setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stderr), _O_U16TEXT);
    setlocale(LC_ALL, "Russian");

    wchar_t words[6] = L"";  // буфер для широких символов

    wprintf(L"Введите название поры года: ");
    wscanf_s(L"%5ls", words, 6);

    if (wcscmp(words, L"зима") == 0) {
        wprintf(L"Декабрь Январь Февраль\n");
    }
    else if (wcscmp(words, L"осень") == 0) {
        wprintf(L"Сентябрь Октябрь Ноябрь\n");
    }
    else if (wcscmp(words, L"лето") == 0) {
        wprintf(L"Июнь Июль Август\n");
    }
    else if (wcscmp(words, L"весна") == 0) {
        wprintf(L"Март Апрель Май\n");
    }
    else {
        wprintf(L"Нету такой поры года\n");
        return 1;
    }

    return 0;

}
