//==========================================================
//	�����`��\������
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()
// �֐��v���g�^�C�v
void PrintSquare(int n);

int main()
{
	while (true) {
		int n;
		do {
			puts("�����`��\�����܂�");
			printf("�i����: ");
			scanf("%d", &n);
		} while (n <= 0);
		PrintSquare(n);
	}
	return 0;
}

void PrintSquare(int n)
{
	for (int Vertical = 0; Vertical < n; Vertical++)
	{
		for (int Horizon = 0; Horizon < n; Horizon++)
		{
			printf("*");
		}
		putchar('\n');
	}
}