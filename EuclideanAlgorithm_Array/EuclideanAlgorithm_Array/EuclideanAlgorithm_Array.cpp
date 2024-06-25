//=========================================================
//	ユークリッドの互除法(配列)
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>   // printf(),scanf()
#include <stdlib.h>  // calloc(),free(),srand(),rand()
#include <time.h>    // time()
// 関数プロトタイプ
int gcd(int x, int y); // Greatest Common Divisor を求める
int gcd_array(int x, int y);
int getRandRange(int min, int max);

int main()
{
	srand(time(nullptr));

	int arraySize;
	int* array;
	while (true) {
		int arraySize;
		do {
			printf("配列の要素数:");
			scanf_s("%d", &arraySize);
		} while (arraySize <= 1);

		array = (int*)calloc(arraySize, sizeof(int));
		if (array == nullptr) {
			printf("calloc失敗\n");
			exit(1);
		}
		for (int i = 0; i < arraySize; i++) {
			array[i] = getRandRange(2, 15) * getRandRange(2, 15) * getRandRange(2, 15);
		}
		for (int i = 0; i < arraySize; i++) {
			printf("%d ", array[i]);
		}

		for (; arraySize != 1; arraySize--)
		{
			for (int i = 0; i < arraySize; i++)
			{
				array[i] = gcd_array(array[i], array[i + 1]);
			}
		}
		printf("の最大公約数は %d\n", array[0]);

		free(array);
	}
	return 0;
}

int gcd_array(int x, int y)
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

int gcd(int x, int y)
{
	if (y == 0) {
		return x;
	}
	else {
		return gcd(y, x % y);
	}
}

int getRandRange(int min, int max)
{
	int wid = max - min + 1;
	return min + rand() % wid;
}