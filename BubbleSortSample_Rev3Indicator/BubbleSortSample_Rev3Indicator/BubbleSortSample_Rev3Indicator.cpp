//=========================================================
//	�P�������\�[�g ����1 �o�ߕ\��
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>   // printf(),scanf()
#include <stdlib.h>  // srand(),rand()
#include <time.h>    // time()
// �֐��v���g�^�C�v
void BubbleSort(int array[], int arraySize);
int getRandRange(int min, int max);
void dumpArray(const int array[], int arraySize);
void print(int array[], int arraySize, int j);
// �ϐ��錾
int swapcnt = 0,cmpcnt = 0;
// �����}�N��
#define swap(type,a,b)	do{type tmp=a; a=b; b=tmp;}while(false)

int main()
{
	srand(time(nullptr));
	int arraySize;
	int* array;

	while (true) {
		do {
			printf("�v�f��:");
			scanf("%d", &arraySize);
		} while (arraySize <= 2);

		array = (int*)calloc(arraySize, sizeof(int));
		if (array == nullptr) {
			printf("calloc()���s\n");
			exit(1);
		}
		for (int i = 0; i < arraySize; i++) {
			array[i] = getRandRange(1, 100);
		}
		dumpArray(array, arraySize);
		BubbleSort(array, arraySize);
		printf("�����Ƀ\�[�g���܂���\n");
		dumpArray(array, arraySize);
		printf("��r��%d��ł���", cmpcnt);
		printf("������%d��ł���", swapcnt);
		free(array);
	}
	return 0;
}
//
// ���̊֐����C���R�[�f�B���O���Ă��������B
// ��r�񐔂ƌ����񐔂̕ϐ��́A�K���ȂƂ���ɐ錾���Ă��������B
// 
void BubbleSort(int array[], int arraySize)
{
	for (int i = 0; i < arraySize - 1; i++) {
		printf("�p�X%d\n ", i + 1);
		for (int j = arraySize - 1; j > i; j--) {
			print(array, arraySize, j);
			if (array[j - 1] > array[j]) {
				swap(int, array[j - 1], array[j]);
				swapcnt++;
			}
			cmpcnt++;
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

void print(int array[], int arraySize, int j)
{
	for (int n = 0 ; n  < arraySize; n++)
	{
		if (n == j - 1)
			if (array[n] > array[j])
				printf("%d  + ", array[n]);
			else
				printf("%d  - ", array[n]);
		else
			printf("%d    ", array[n]);
	}
	printf("\n ");
}
