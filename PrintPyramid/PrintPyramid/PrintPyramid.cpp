//==========================================================
//	ピラミッドを表示する
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()
// 関数プロトタイプ
void PrintPyramid(int n);

int main()
{
	while (true) {
		int n;
		do {
			printf("何段のピラミッドですか? ");
			scanf_s("%d", &n);
		} while (n <= 0);
		PrintPyramid(n + (n - 1));
	}
	return 0;
}

void PrintPyramid(int n)
{
	for (int Horizon = 1, Vertical = 1; Vertical <= n / 2 + 1;Vertical++,Horizon = 1)
	{
		for (; Horizon <= (n - (Vertical + (Vertical - 1))) / 2; Horizon++) putchar(' ');
		for (int PrintTime = 0;PrintTime < Vertical + (Vertical - 1); PrintTime++) putchar('*');
		putchar('\n');
	}
}