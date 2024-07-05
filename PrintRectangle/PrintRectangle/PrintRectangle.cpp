//==========================================================
//	長方形を表示する
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()
// 関数プロトタイプ
void PrintRectangle(int w, int h);

int main()
{
    while (true) {
        int h, w;
        puts("長方形を表示します");
        do {
            printf("高さは: ");
            scanf("%d", &h);
        } while (h <= 0);
        do {
            printf("横幅は: ");
            scanf("%d", &w);
        } while (w <= 0);
        PrintRectangle(w, h);
    }
    return 0;
}

void PrintRectangle(int w, int h)
{
    for (int Vertical = 0; Vertical < h; Vertical++)
    {
        for (int Horizon = 0; Horizon < w; Horizon++)
        {
            printf("*");
        }
        putchar('\n');
    }
}