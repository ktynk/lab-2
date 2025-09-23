#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <locale.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "Russian");  
    SetConsoleCP(CP_UTF8);

    char words[6] = "";  
    printf("Введите название поры года:");  
    scanf_s("%5s", words, (unsigned)sizeof(words));  

    if (strcmp(words, "зима") == 0)   // исправлено: убрал "_" перед "зима"
        printf("Декабрь Январь Февраль\n");
    
    else if (strcmp(words, "осень") == 0) 
        printf("Сентябрь Октябрь Ноябрь\n");
    
    else if (strcmp(words, "лето") == 0) 
        printf("Июнь Июль Август\n");
    
    else if (strcmp(words, "весна") == 0) 
        printf("Март Апрель Май\n"); 
    
    else 
        printf("Нету такой поры года\n");
        return 1;
    

    return 0;
}