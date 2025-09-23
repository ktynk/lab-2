#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <locale.h>
#include <fcntl.h>
#include <io.h>

int main() {
    _setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stderr), _O_U16TEXT);
    setlocale(LC_ALL, "Russian");

    char words[6] = "";
    printf("Введите название поры года: ");
    scanf_s("%5s", words, (unsigned)_countof(words));

    if (strcmp(words, "зима") == 0) {
        printf("Декабрь Январь Февраль\n");
    }
    else if (strcmp(words, "осень") == 0) {
        printf("Сентябрь Октябрь Ноябрь\n");
    }
    else if (strcmp(words, "лето") == 0) {
        printf("Июнь Июль Август\n");
    }
    else if (strcmp(words, "весна") == 0) {
        printf("Март Апрель Май\n"); // исправлено: Март и \n
    }
    else {
        printf("Нету такой поры года\n");
        return 1; // возвращаем 1 и выходим, если введено неправильное слово
    }

    return 0;


}