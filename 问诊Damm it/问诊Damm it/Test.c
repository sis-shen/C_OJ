#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int Is_prime(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;

}

int b[250][250] = { 0 };

int main() {
	int arr[60] = { 0 };
	int a = 0;
	for (int i = 2; i < 250; i++) {
		if (Is_prime(i)) {
			arr[a] = i;
			a++;
			if (a == 50)
			{
				break;
			}
		}
	}

	int n = 0;
	while (scanf("%d", &n) != EOF) {
			//1.右下为1  2.右上为2  3.左上为1  4.左下为2
		if (n == 1) {
			printf("11\n");
			printf("\n");
		}
		if (n == 2) {
			printf("02\n");
			printf("02\n");
			printf("02\n");
			printf("11\n");
			printf("\n");
		}
		if (n % 4 == 0) { //长度为arr[i]+1 宽度为arr[i-1]+1
			int flag = n;
			int flag1 = 0;
			int mark1 = arr[flag - 1], mark2 = 0;

			while (flag > 0) {
				for (int i = mark1; i > mark1 - arr[flag - 1]; i--) { //第一竖行
					b[i][mark2] = 2;
					flag1 = i - 1;
				}
				mark1 = flag1;
				flag--;
				for (int i = mark2; i < arr[flag - 1] + mark2; i++) { //第一横行
					b[mark1][i] = 1;
					flag1 = i + 1;
				}
				mark2 = flag1;
				flag--;
				for (int i = mark1; i < arr[flag - 1] + mark1; i++) { //第二竖行
					b[i][mark2] = 2;
					flag1 = i + 1;
				}
				mark1 = flag1;
				flag--;
				for (int i = mark2; i > mark2 - arr[flag - 1]; i--) {	//第二横行

					b[mark1][i] = 1;
					flag1 = i - 1;
				}
				mark2 = flag1;
				flag--;

			}
			for (int i = 0; i < arr[n - 1] + 1; i++) {
				for (int j = 0; j < arr[n - 2] + 1; j++) {
					printf("%d", b[i][j]);
				}
				printf("\n");
			}
			printf("\n");
		}
		else if (n % 4 == 1 && n != 1) {
			int flag = n;
			int flag1 = 0;
			int mark1 = arr[flag - 2], mark2 = arr[flag - 1];

			while (flag > 0) {
				for (int i = mark2; i > mark2 - arr[flag - 1]; i--) { //第一横行
					b[mark1][i] = 1;
					flag1 = i - 1;
				}
				mark2 = flag1;
				flag--;
				for (int i = mark1; i > mark1 - arr[flag - 1]; i--) { //第一竖行
					b[i][mark2] = 2;
					flag1 = i - 1;
				}
				mark1 = flag1;
				flag--;
				for (int i = mark2; i < arr[flag - 1] + mark2; i++) { //第二横行
					b[mark1][i] = 1;
					flag1 = i + 1;
				}
				mark2 = flag1;
				flag--;
				for (int i = mark1; i < mark1 + arr[flag - 1]; i++) {	//第二竖行

					b[i][mark2] = 2;
					flag1 = i + 1;
				}
				mark1 = flag1;
				flag--;

			}
			for (int i = 0; i < arr[n - 2] + 1; i++) {
				for (int j = 0; j < arr[n - 1] + 1; j++) {
					printf("%d", b[i][j]);
				}
				printf("\n");
			}
			printf("\n");
		}

		else if (n % 4 == 2 && n != 2) {
			int flag = n;
			int flag1 = 0;
			int mark1 = 0, mark2 = arr[flag - 2];

			while (flag > 0) {
				for (int i = mark1; i < mark1 + arr[flag - 1]; i++) { //第一竖行
					b[i][mark2] = 2;
					flag1 = i + 1;
				}
				mark1 = flag1;
				flag--;
				for (int i = mark2; i > mark2 - arr[flag - 1]; i--) { //第一横行
					b[mark1][i] = 1;
					flag1 = i - 1;
				}
				mark2 = flag1;
				flag--;
				for (int i = mark1; i > mark1 - arr[flag - 1]; i--) { //第二竖行
					b[i][mark2] = 2;
					flag1 = i - 1;
				}
				mark1 = flag1;
				flag--;
				for (int i = mark2; i < mark2 + arr[flag - 1]; i++) {	//第二横行

					b[mark1][i] = 1;
					flag1 = i + 1;
				}
				mark2 = flag1;
				flag--;

			}
			for (int i = 0; i < arr[n - 1] + 1; i++) {
				for (int j = 0; j < arr[n - 2] + 1; j++) {
					printf("%d", b[i][j]);
				}
				printf("\n");
			}
			printf("\n");
		}
		else if (n % 4 == 3) {
			int flag = n;
			int flag1 = 0;
			int mark1 = 0, mark2 = 0;

			while (flag > 0) {
				for (int i = mark2; i < mark2 + arr[flag - 1]; i++) { //第一横行
					b[mark1][i] = 1;
					flag1 = i + 1;
				}
				mark2 = flag1;
				flag--;
				for (int i = mark1; i < mark1 + arr[flag - 1]; i++) { //第一竖行
					b[i][mark2] = 2;
					flag1 = i + 1;
				}
				mark1 = flag1;
				flag--;
				for (int i = mark2; i > mark2 - arr[flag - 1]; i--) { //第二横行
					b[mark1][i] = 1;
					flag1 = i - 1;
				}
				mark2 = flag1;
				flag--;
				for (int i = mark1; i > mark1 - arr[flag - 1]; i--) {	//第二竖行

					b[i][mark2] = 2;
					flag1 = i - 1;
				}
				mark1 = flag1;
				flag--;

			}
			for (int i = 0; i < arr[n - 2] + 1; i++) {
				for (int j = 0; j < arr[n - 1] + 1; j++) {
					printf("%d", b[i][j]);
				}
				printf("\n");
			}
			printf("\n");
		}

	}
	return 0;
}
