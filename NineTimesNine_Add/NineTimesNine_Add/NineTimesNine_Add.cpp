//==========================================================
//	‹ã‹ã•\(‰ÁŽZ)‚ð•\Ž¦‚·‚é
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()

int main()
{
	printf("    |   1   2   3   4   5   6   7   8   9\n----+------------------------------------");
	for (int Vertical = 1; Vertical < 10; Vertical++)
	{
		printf("\n   %d|   ",Vertical);
		for (int Horizon = 1; Horizon < 10; Horizon++)
		{
			if (Vertical + Horizon < 10) printf("%d   ", Vertical + Horizon);
			else printf("%d  ", Vertical + Horizon);

		}
	}
	return 0;
}