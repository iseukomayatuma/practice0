//=====================================
// 4�l�̍ŏ��l
//=====================================
#include <stdio.h>
#include <stdlib.h>  // srand(),rand()
#include <time.h>    // time()
// �֐��v���g�^�C�v
int MinOfFour(int a, int b, int c, int d);

int main()
{
	srand(time(nullptr));
	int a = rand() % 100;
	int b = rand() % 100;
	int c = rand() % 100;
	int d = rand() % 100;
	int ans = MinOfFour(a, b, c, d);
	printf("MinOfFour(%d,%d,%d,%d) => %d\n", a, b, c, d, ans);
	return 0;
}
int MinOfFour(int a, int b, int c, int d)
{
	// �������R�[�f�B���O���Ă�������
	if (a > b)    // a�ɍŏ��l���L�^����
		a = b;
	if (a > c)
		a = c;
	if (a > d)
		a = d;
	return a;
}