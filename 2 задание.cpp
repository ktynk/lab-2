

#include <stdio.h>
#include <math.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Russian");
	int x, y, R;
	printf("введите координаты:");
	scanf_s("%d %d",&x, &y);
	printf("введите радиус:");
	scanf_s("%d", &R);
if (y>0){
	if (pow(x, 2) + pow(y, 2) > pow(R, 2))
		printf("нет");
	else
		printf("да");
}
	else {
		printf("НЕТ");

	}
	return 0;

   
}


