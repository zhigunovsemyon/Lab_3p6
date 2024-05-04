//Задание 3.*6

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b; //Добавляем переменные
	printf("a = "); scanf("%d", &a); //Вводим значение a

	//Расчёты
	a = a * a;		//a^2
	b = a * a;		//a^4
	a = b * b;		//a^8
	a = a * a * b;	//a^20

	//Вывод полученных значений
	printf("\na в степени 4 равно %d\n", b);
	printf("a в степени 20 равно %d\n", a);
	
	return 0;
}
