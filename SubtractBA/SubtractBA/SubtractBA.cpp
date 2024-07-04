//==========================================================
//	差分b-a
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // sscanf(),scanf(),printf()
// 関数プロトタイプ

int main(int argc, char* argv[])
{
	int a, b;
	do {
		printf("aの値:");scanf("%d", &a);
		printf("bの値:"); scanf("%d", &b);
		if (a >= b) { puts("aよりbの方が大きくなるように入力してください"); }
	} while (a >= b);

	printf("%d - %d = %d\n", b, a, b - a);
	return 0;
}