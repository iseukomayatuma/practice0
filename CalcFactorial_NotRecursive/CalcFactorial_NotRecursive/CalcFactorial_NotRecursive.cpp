//=========================================================
//	階乗の計算
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>   // printf(),scanf()

// 関数プロトタイプ
int Factorial(int n);

int main()
{
	while (true) {
		int n;
		do {
			printf("数値:");
			scanf_s("%d", &n);
		} while (n < 0);

		int ans = Factorial(n);
		printf("%dの階乗は、%dです\n", n, ans);
	}
	return 0;
}

int Factorial(int n)
{
	int sum;
	for (sum = 1; n != 0; n--) sum *= n;
	return sum;
}
