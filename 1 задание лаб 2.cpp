#include <stdio.h>
#include  <math.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    double x1, x2, x3, y1, y2, y3, AB, BC, CA, a, b, c, d,Z;
    const double E = 1e-9;
    printf("введите координаты по порядку(x1 и y1):");
    scanf_s("%lf", &x1);
    printf("введите координаты по порядку(x2 и y2):");
    scanf_s("%lf", &x2);
    printf("введите координаты по порядку(x3 и y3):");
    scanf_s("%lf", &x3);
    printf("введите координаты по порядку(x1 и y1):");
    scanf_s("%lf", &y1);
    printf("введите координаты по порядку(x2 и y2):");
    scanf_s("%lf", &y2);
    printf("введите координаты по порядку(x3 и y3):");
    scanf_s("%lf", &y3);
    AB = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    CA = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
    BC = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
    if (AB+BC<=CA+E||AB+CA<=BC+E ||CA+BC<=AB+E)
    {
        
        printf("треугольник не существует\n");
        return 1;}
    if (AB > BC && AB > CA) {
        c = AB;
        a = CA;
        b = BC;
    }
    else if (BC > CA && BC > AB) {
        c = BC;
        a = AB;
        b = CA;
    }
    else {
        c = CA;
        a = BC;
        b = AB;
        
    }
    if (fabs(pow(a, 2) + pow(b, 2)-pow(c,2))<E)
        printf("Прямоугольный треугольник");
    else if (pow(+a, 2) + pow(b, 2) > pow(c, 2))
        printf("Остроугольный треугольник");
    else
        printf("Тупоугольный треугольник");
    d = pow(a, 2) + pow(b, 2);
    printf("%lf=\n", d);
    Z = pow(c, 2);
    printf("%lf=\n", Z);
    }
        return 0;
}




