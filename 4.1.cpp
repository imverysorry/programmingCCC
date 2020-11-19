#include <stdio.h>;
int main()
{
    int a[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        scanf_s("%d", &a[i]);
    }
printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
}