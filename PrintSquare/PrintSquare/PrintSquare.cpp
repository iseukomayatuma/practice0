//==========================================================
//	正方形を表示する
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()
// 関数プロトタイプ
void PrintSquare(int n);

int main()
{
	while (true) {
		int n;
		do {
			puts("正方形を表示します");
			printf("段数は: ");
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