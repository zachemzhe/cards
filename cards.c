/*
 * Программа для оценивания важности карт.
 * Выпущенопод публичной Лас-Вегасской лицензией.
 * (с) 2020 Команда колледжа по блек-джеку.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char card_name[3];
	puts("Введите название карты: ");
	scanf("%2s", card_name);
	int val = 0;
	switch(card_name[0])  {
		case 'K':
			val = 10;
			break;
		case 'Q':
			val = 10;
			break;
		case 'J':
			val = 10;
			break;
		case 'A':
			val = 11;
			break;
		default:
			val = atoi(card_name);
	}
	printf("Ценность карты: %i\n", val);
	return 0;
}

