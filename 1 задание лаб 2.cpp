#include <stdio.h>
#include  <math.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    double x1, x2, x3, y1, y2, y3, AB, BC, CA;
    printf("введите координаты по порядку(x1 и y1):");
    scanf_s("%lf %lf ", &x1, &y1);
    printf("введите координаты по порядку(x2 и y2):");
    scanf_s("%lf %lf ", &x2, &y2);
    printf("введите координаты по порядку(x3 и y3):");
    scanf_s("%lf %lf ", &x3, &y3);



    AB = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    CA = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
    BC = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));

    double sides[3] = { AB, BC, CA };
    std::sort(sides, sides 3);
    double a = sides[0];   // катет  
  double b = sides[1];   // катет  
  double c = sides[2];   // гипотенуза
  double a2 = a * a, b2 = b * b, c2 = c * c;

    if ((a2 + b2) == c2)
        printf("Прямоугольный треугольник");
    else if (a2 + b2 > c2)
        printf("Остроугольный треугольник");
    else
        printf("Тупоугольный треугольник");
    return 0;
}

