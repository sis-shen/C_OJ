#include<stdio.h>
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int a[101] = { 0 };
        for (int i = 0; i <=  n - 1; i++)
        {
            scanf("%d", &a[i]);
        }
        
        if (n % 2 == 0)
        {
            printf("No\n");
        }
        else {
            if (a[0] % 2 == 1 && a[n - 1] % 2 == 1)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 .
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}