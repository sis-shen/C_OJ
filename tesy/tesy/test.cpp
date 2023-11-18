#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int b[1005] = { 0 };
int len;
char str[1005];
void Eratosthenes() {
    b[0] = b[1] = 1;
    for (int i = 2; i * i <= 1000; i++)
        if (b[i] == 0)
            for (int j = i * 2; j <= 1000; j += i)
                b[j] = 1;
}
int check() {
    int i = 0;
    while (i + 3 < len) {
        int n = 0;
        for (int j = i; j < i + 3; j++)
            n = n * 10 + str[j] - '0';
        if (b[n] == 1)
            return 0;
        i += 3;
    }

    int n = 0;

    for (int j = i; j < len; j++)
        n = n * 10 + str[j] - '0';

    if (b[n] == 1) return 0;
    return 1;
}
int main() {
    Eratosthenes();

    while (scanf("%s", str) != EOF) {
        len = strlen(str);

        if (check() == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}