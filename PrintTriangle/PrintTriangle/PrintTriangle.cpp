//==========================================================
//	三角形を表示する
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()
// 関数プロトタイプ
void PrintTriangle(int n);

int main()
{
	while (true) {
		int n;
		do {
			printf("何段の三角形ですか? ");
			scanf_s("%d", &n);
		} while (n <= 0);
		PrintTriangle(n);
	}
	return 0;
}

void PrintTriangle(int n)
{
	// ここをコーディングしましょう。
	// 教科書のList1-11 を参考にしてください。
	// for文を２重に使います。
	for (int i = 0; i < n; i++) {      // 0 < 5 // 1 < 5 // 
		for (int ii = 0; ii < i; ii++)  // 0 < 0 // 0 < 1 // 0 < 2
			printf("▲");
		printf("▲\n");
	}

}
