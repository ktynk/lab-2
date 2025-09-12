
#include<stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	printf("Введите пару года по порядку под номером(пример:лето-1 и тд.)\n");
	scanf_s("%d", &x);
	switch (x)
	{
	case 1: printf("июнь,июль,август.\n"); break;
	case 2: printf("сентябрь,октябрь,ноябрь.\n"); break;
	case 3: printf("декабрь,январь,февраль.\n"); break;
	case 4: printf("март,апрель,май.\n"); break;
	default: printf("ИХ ВСЕГО 4.\n");
	}
	return 0;
}
		
