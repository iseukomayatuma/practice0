//=========================================================
//	�ċA�A���S���Y���̉��(�J�E���^�[)
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>   // printf(),scanf()
#include <string.h>  // strcpy()
#include <memory.h>  // memset()

// �֐��v���g�^�C�v
void recur_memo(int n);
void reset_memo();
void recur(int n);

int counter = 0, counter_memo = 0;

int main()
{
	while (true) {
		int n;
		do {
			printf("���l:");
			scanf_s("%d", &n);
		} while (n < 0);

			
		counter = 0;
		recur(n);
		printf("recur()�̌Ăяo���� %d ��\n", counter);

		reset_memo();
		recur_memo(n);
		printf("recur_memo()�̌Ăяo���� %d ��\n", counter_memo);
	}
	return 0;
}

static char _memo[128][1024] = { 0 };
// memo[-1]�����v
static char(*memo)[1024] = &_memo[1];

// _memo[]�̏�����
void reset_memo()
{
	memset(_memo, 0, sizeof(_memo));
}

// ���̊֐����C�����Ă��������B
void recur_memo(int n)
{
	counter_memo++;
	if (memo[n][0] != '\0') {
		printf("%s", memo[n]);
	}
	else {
		if (n > 0) {
			recur_memo(n - 1);
			printf("%d\n", n);
			recur_memo(n - 2);
			sprintf(memo[n], "%s%d\n%s", memo[n - 1], n, memo[n - 2]);
		}
		else {
			strcpy(memo[n], "");
		}
	}
}

// ���̊֐����C�����Ă��������B
void recur(int n)
{
	counter++;
	if (n > 0) {
		recur(n - 1);
		printf("%d\n", n);
		recur(n - 2);
	}
}