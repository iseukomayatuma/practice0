//=========================================================
//	Recur3 ��ċA��
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>   // printf(),scanf()
#include <stdlib.h>  // exit()
#include "IntStack.h"

// �֐��v���g�^�C�v
void recur3(int n);
void recur3_notRecursive(int n);

int main()
{
    while (true) {
        int n;
        do {
            printf("���l:");
            scanf_s("%d", &n);
        } while (n < 0);

        recur3(n);
        puts("-----------");
        recur3_notRecursive(n);
    }
    return 0;
}

void recur3(int n)
{
    if (n > 0) {
        recur3(n - 1);
        recur3(n - 2);
        printf("%d\n", n);
    }
}

void recur3_notRecursive(int n)
{
    while
   /* const int STACK_SIZE = 100;
    IntStack stk;
    Initialize(&stk, STACK_SIZE);

    Terminate(&stk);*/
}