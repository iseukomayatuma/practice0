//=========================================================
//	単純交換ソート Shaker Sort
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>   // printf(),scanf()
#include <stdlib.h>  // srand(),rand()
#include <time.h>    // time()
// 関数プロトタイプ
void BubbleSort(int array[], int arraySize);
void SortTest(int array[], int arraySize);
int getRandRange(int min, int max);
void dumpArray(const int array[], int arraySize);
//　変数宣言
int compCount = 0, swapCount = 0;
// 交換マクロ
#define swap(type,a,b)	do{type tmp=a; a=b; b=tmp;}while(false)

int main()
{
	srand(time(nullptr));
	char yesno;
	do {
		printf("サンプル(y/n)?");
		scanf("%c", &yesno);
	} while (yesno != 'y' && yesno != 'n');
	if (yesno == 'y') {
		int sample[] = { 9,1,3,4,6,7,8 };
		int sampleSize = sizeof(sample) / sizeof(sample[0]);
		SortTest(sample, sampleSize);
		BubbleSort(sample, sampleSize);
	}
	else {
		int arraySize;
		int* array;

		while (true) {
			do {
				printf("要素数:");
				scanf("%d", &arraySize);
			} while (arraySize <= 2);

			array = (int*)calloc(arraySize, sizeof(int));
			if (array == nullptr) {
				printf("calloc()失敗\n");
				exit(1);
			}
			for (int i = 0; i < arraySize; i++) {
				array[i] = getRandRange(1, 100);
			}
			BubbleSort(array, arraySize);
			SortTest(array, arraySize);
			free(array);
		}
	}
	printf("比較は %d 回でした\n", compCount);
	printf("交換は %d 回でした\n", swapCount);
	return 0;
}
void SortTest(int array[], int arraySize)
{
	dumpArray(array, arraySize);
	BubbleSort(array, arraySize);
	printf("昇順にソートしました\n");
	dumpArray(array, arraySize);
}
void BubbleSort(int array[], int Size)
{
	int n = 0;
	bool 
	for (int i = 1; i <= Size; i++)
	{
		printf("パス%d\n ", i);
		i % 2 == 0 ? n = i : n = Size - i;
		for (int j = 0; j < Size - 1; j++)
		{
			for (int m = 0; m < Size - 1; m++)
			{
				if (m == n - 1)
					if (array[m] > array[n])
						printf("%d +  ", array[m]);
					else
						printf("%d -  ", array[m]);
				else
				printf("%d    ", array[m]);
			}
			printf("\n ");
		}
	}
}

void dumpArray(const int array[], int arraySize)
{
	for (int i = 0; i < arraySize; i++) {
		printf("array[%d] = %d\n", i, array[i]);
	}
}

int getRandRange(int min, int max)
{
	int wid = max - min + 1;
	return min + rand() % wid;
}