//==========================================================
//	���\��\������
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()

int main()
{
	puts("����\�����܂�\n    |   1   2   3   4   5   6   7   8   9\n----+-----------------------------------\n1   |   ");
	for (int multiplied = 1, multiply = 1; multiplied < 10; multiply++)
	{
		if (multiply == 10) 
		{
			multiplied++; multiply = 1;
			if(multiplied <= 9)
			printf("\n%d   |   ", multiplied);
		}
		if (multiplied <= 9)
		printf("%d   ", multiplied * multiply);
	}
	return 0;
}