#include <stdio.h>
#include  <math.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    printf("Введите длинну гепотинузы треугольника: ");
    scanf_s("%d", &a);
    printf("Введите длинну стороны треугольника: ");
    scanf_s("%d", &b);
    printf("Введите длинну стороны треугольника: ");
    scanf_s("%d", &c);


    if (pow(a, 2) == pow(b, 2) + pow(c, 2))
        printf("Треугольник прямоугольный\n");


    else if (pow(a, 2) < pow(b, 2) + pow(c, 2))
        printf("Треугольник остроугольный\n");

    else
        printf("Треугольник тупоугольный\n");


    return 0;


}