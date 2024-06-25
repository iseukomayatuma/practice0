//=========================================================
//	ユークリッドの互除法(2数の最大公約数を求める)
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>   // printf(),scanf()
// 関数プロトタイプ
int gcd(int x, int y); // Greatest Common Divisor を求める

int main()
{
	while (true) {
		int x, y;
		do {
			printf("１つ目の整数:");
			scanf_s("%d", &x);
		} while (x <= 0);
		do {
			printf("２つ目の整数:");
			scanf_s("%d", &y);
		} while (y <= 0);

		int ans = gcd(x, y);
		printf("%d と %d の最大公約数は %d\n", x, y, ans);
	}
	return 0;
}

int gcd(int x, int y)
{
	int keep;
	while (y != 0)
	{
		keep = x;
		x = y;
		y = keep % x;
	}
	return x;
}