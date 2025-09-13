#include <stdio.h>
#include  <math.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Russian");
    double x1, x2,x3, y1, y2,y3, AB, BC, CA;
    printf("введите координаты по порядку(x и y)");
    scanf_s("%lf %lf %lf %lf %lf %lf  ", &x1, &y1, &x2, &y2,&x3,&y3);

    AB = sqrt(pow((x2 - x1),2)+pow((y2-y1),2));
    CA = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
    BC = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
    if (BC >= AB && BC >= CA) {
        if (pow(BC, 2) == pow(AB, 2) + pow(CA, 2))
            printf("треугольник прямоугольный");
        else if (pow(BC, 2) > pow(AB, 2) + pow(CA, 2))
            printf("треугольник тупоугольный");
        else if (pow(BC, 2) < pow(AB, 2) + pow(CA, 2))
            printf("треугольник  остроугольный");
        else
            printf("использованы неправильные значения ");
    }
        
   
    else if ((CA > AB && CA > BC)) 
        if (pow(CA, 2) == pow(AB, 2) + pow(BC, 2))
            printf("треугольник прямоугольный");
        else if (pow(CA, 2) > pow(AB, 2) + pow(BC, 2))
            printf("треугольник тупоугольный");
        else if (pow(CA, 2) < pow(AB, 2) + pow(BC, 2))
            printf("треугольник остроугольный");
        else
            printf("использованы неправильные значения ");
        
    
    else 
        if (pow(AB, 2) == pow(CA, 2) + pow(BC, 2))
            printf("треугольник прямоугольный");
        else if (pow(AB, 2) > pow(CA, 2) + pow(BC, 2))
            printf("треугольник тупоугольный");
        else if (pow(AB, 2) < pow(CA, 2) + pow(BC, 2))
            printf("треугольник  остроугольный");
        else
            printf("использованы неправильные значения ");
       
    








    return 0;
}