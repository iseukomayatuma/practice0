//==========================================================
//	三角形を表示する バラエティ
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()
// 関数プロトタイプ
void PrintTriangleRB(int n);
void PrintTriangleLU(int n);
void PrintTriangleRU(int n);
void PrintTriangleLB(int n);

int main()
{
	while (true) {
		int n;
		do {
			printf("何段の三角形ですか? ");
			scanf("%d", &n);
		} while (n <= 0);
		PrintTriangleLB(n); printf("\n");
		PrintTriangleLU(n); printf("\n");
		PrintTriangleRU(n); printf("\n");
		PrintTriangleRB(n); printf("\n");
	}
	return 0;
}

void PrintTriangleRB(int n)
{
	puts("this is RB");
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void PrintTriangleLU(int n)
{
	puts("this is LU");
	for (int Vertical = 0; Vertical < n; Vertical++)
	{
		for (int Horizon = n; Horizon > Vertical; Horizon--)
		{
			putchar('*');
		}
		putchar('\n');
	}
}
void PrintTriangleRU(int n)
{
	for (int Vertical = 5; Vertical > 0; Vertical--)
	{
		for (int Horizon = n; Horizon < Vertical;Horizon++)
		{
			if (Vertical > Horizon)
			{
				putchar(' ');

			}
			else
			{
				putchar('*');
			}
		}
		putchar('\n');
	}
}
void PrintTriangleLB(int n)
{
	// ここをコーディングしましょう。
	// 左下側が直角の２等辺三角形
}