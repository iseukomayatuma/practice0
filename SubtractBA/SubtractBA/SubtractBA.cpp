//==========================================================
//	����b-a
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // sscanf(),scanf(),printf()
// �֐��v���g�^�C�v

int main(int argc, char* argv[])
{
	int a, b;
	do {
		printf("a�̒l:");scanf("%d", &a);
		printf("b�̒l:"); scanf("%d", &b);
		if (a >= b) { puts("a���b�̕����傫���Ȃ�悤�ɓ��͂��Ă�������"); }
	} while (a >= b);

	printf("%d - %d = %d\n", b, a, b - a);
	return 0;
}