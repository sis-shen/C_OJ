#define  _CRT_SECURE_NO_WARNINGS 1
//A

//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	while (scanf("%d", &num) != EOF)
//	{
//		if (num == 1 || num == 2)
//		{
//			printf("No\n");
//		}
//		else
//		{
//			if (num % 2 == 1)
//			{
//				printf("No\n");
//			}
//			else
//			{
//				printf("Yes\n");
//			}
//		}
//	}
//	return 0;
//}


//B

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		//�ϰ��
//		for (int rows = 1; rows <= n - 1; rows++ )
//		{
//			for (int i = 0; i < n - rows; i++)
//			{
//				printf(" ");
//			}
//			for (int i = 0; i < rows; i++)
//			{
//				printf("%c", 'a' + i);
//			}
//			printf("\n");
//		}
//
//		//�м�
//		for (int i = 0; i < n; i++)
//		{
//			printf("%c", 'a' + i);
//		}
//		for (int i = n - 1 - 1; i >= 0; i--)
//		{
//			printf("%c", 'a' + i);
//		}
//		printf("\n");
//		//�°�
//		for (int rows = n-1; rows >=1; rows--)
//		{
//			for (int i = 0; i < n - 1; i++)
//			{
//				printf(" ");
//			}
//			for (int i = rows - 1; i >= 0; i--)
//			{
//				printf("%c", 'a' + i);
//			}
//			printf("\n");
//		}
//
//		printf("\n");
//	}
//	return 0;
//}


//C

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[1086] = { 0 };
//	while (scanf("%s",str) != EOF)
//	{
//		int len = strlen(str);
//		int cnt7 = 0;
//		int sum = 0;
//		for (int i = 0; i < len; i++)
//		{
//			int num = str[i] - '0';
//			sum += num;
//			if (num == 7)
//			{
//				cnt7++;
//			}
//		}
//
//		if (cnt7 > len / 2 || sum%7 == 0)
//		{
//			printf("Yes\n");
//		}
//		else
//		{
//			printf("No\n");
//		}
//
//	}
//	return 0;
//}


//D
//#include <stdio.h>
//
//
//void destroy(char board[60][60], char display[60][60] ,int x,int y)
//{
//	char ch = board[x][y];
//	if (ch == board[x - 1][y] && ch == board[x + 1][y])
//	{
//		display[x - 1][y] = '0';
//		display[x + 1][y] = '0';
//		display[x][y] = '0';

//	}
//	if (ch == board[x][y - 1] && ch == board[x][y + 1])
//	{
//		display[x][y - 1] = '0';
//		display[x][y + 1] = '0';
//		display[x][y] = '0';

//	}
//}
//
//int main()
//{
//	int rows, cols;
//	while (scanf("%d %d", &rows, &cols) != EOF)
//	{
//		char board[60][60] = { 0 };
//		char display[60][60] = { 0 };
//
//		for (int i = 1; i <= rows; i++)
//		{
//			for (int j = 1; j <= cols; j++)
//			{
//				scanf(" %c", &board[i][j]);
//				display[i][j] = board[i][j];
//			}
//		}
//
//		for (int x = 1; x <= rows; x++)
//		{
//			for (int y = 1; y <= cols; y++)
//			{
//				destroy(board, display, x, y);
//			}
//		}
//
//		for (int i = 1; i <= rows; i++)
//		{
//			for (int j = 1; j <= cols; j++)
//			{
//				if (j != 1)
//				{
//					printf(" ");
//				}
//				printf("%c", display[i][j]);
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
//
//
//
//	return 0;
//}

//���� E : ˮ���꣨10�֣�

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct Fruit
//{
//	char name[90];
//	int sum;
//}Fruit;
//
//typedef struct Pos
//{
//	char name[90];
//	Fruit fruit_lst[100];
//	int size;
//}Pos;
//
//Pos Lst[100] = { 0 };
//
//int cmp_pos(const void* e1, const void* e2)
//{
//	const Pos* E1 = (const Pos*)e1;
//	const Pos* E2 = (const Pos*)e2;
//
//	return strcmp(E1->name, E2->name);
//}
//
//int cmp_fruit(const void* e1, const void* e2)
//{
//	const Fruit* QWQ = (const Fruit*)e1;
//	const Fruit* AWA = (const Fruit*)e2;
//	return strcmp(QWQ->name, AWA->name);
//}
//
//int main()
//{
//	char date[20] = { 0 };
//	int n = 0;
//	while (scanf("%s %d", date, &n) != EOF)
//	{
//		for (int i = 0; i < 20; i++)
//		{
//			if (date[i] == '/')
//			{
//				date[i] = '.';
//			}
//		}
//
//		//��ȡ����
//		int pos_size = 0;
//		
//		for (int i = 0; i < n; i++)
//		{
//			char fruit[90] = { 0 };
//			char pos[90] = { 0 };
//			int num = 0;
//			scanf("%s %s %d", fruit, pos, &num);
//
//
//			//�ҵ�����
//			Pos* ptr = Lst;
//			int j = 0;
//			for ( j = 0; j < pos_size; j++)
//			{
//				ptr = Lst + j;
//				if (strcmp(ptr->name, pos) == 0)//�ҵ��ˣ���ptr��ָ���Ǹ��ط�
//				{
//					break;
//				}
//			}
//			//û�ҵ���j == pos_size
//			if (j == pos_size)
//			{
//				ptr = Lst + pos_size;
//				//��ʼ��һ���µط�
//				strcpy(ptr->name, pos);
//				ptr->size = 0;//û��ˮ��
//				pos_size++;
//			}
//
//			//�ҵ�����ˮ��
//			
//			int O_O = 0;
//			Fruit* pfruit = ptr->fruit_lst;
//			for (O_O = 0; O_O < ptr->size; O_O++)
//			{
//				pfruit = ptr->fruit_lst + O_O;
//				if (strcmp(pfruit->name, fruit) == 0)
//				{
//					break;
//				}
//			}
//			if (O_O == ptr->size)
//			{
//				//��ʼ��һ��ˮ��
//				pfruit = ptr->fruit_lst + ptr->size;
//				strcpy(pfruit->name, fruit);
//				pfruit->sum = 0;//��Ϊ�����ǳ�ʼ��
//
//				ptr->size++;
//			}
//
//			//�ۼ�ˮ��
//			pfruit->sum += num;
//		}
//
//
//		printf("%s\n", date);
//
//		qsort(Lst, pos_size, sizeof(Pos), cmp_pos);
//		for (int i = 0; i < pos_size; i++)
//		{
//			Pos* ptr = Lst + i;
//			printf("%s\n", ptr->name);
//			qsort(ptr->fruit_lst, ptr->size, sizeof(Fruit), cmp_fruit);
//			for (int j = 0; j < ptr->size; j++)
//			{
//				Fruit* pfruit = ptr->fruit_lst + j;
//				printf("|----%s(%d)\n", pfruit->name, pfruit->sum);
//			}
//		}
//
//	}
//	return 0;
//}


//E����ʽ��ƽ
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//typedef struct Element
//{
//	char name[10];
//	int sum;
//}Element;
//
//Element ListA[200];
//Element ListB[200];
//
//int cmp_name(const void* e1, const void* e2)
//{
//	const Element* E1 = (const Element*)e1;
//	const Element* E2 = (const Element*)e2;
//	return strcmp(E1->name, E2->name);
//}
//
//void mkList(char* src, Element* dest,int* sz)
//{
//	int front = 1;
//	int cur = 0;
//	if ('2' <= src[0] && src[0] <= '9')
//	{
//		front = src[0] - '0';
//		cur++;
//	}
//	for (; src[cur]!= '\0'; )//ֱ��һ��һ��̽���
//	{
//		cnt++;
//		if ('A' <= src[cur] && src[cur] <= 'Z')
//		{
//			char name[10] = { 0 };
//			name[0] = src[cur];
//			int right = cur+1;
//			//�ҵ���������
//			if ('a' <= src[right] && src[right] <= 'z')
//			{
//				name[1] = src[right];
//			}
//			else
//			{
//				right--;//��֤rightʼ��ָ�����ֵ����һ����ĸ
//			}
//			//��ԭ������
//			right++;//ָ���β��һλ,������ ��ĸ ���Ӻţ� ����
//			int num = 1;
//			if ('2' <= src[right] && src[right] <= '9')
//			{
//				int n = src[right] - '0';
//				num = front * n;
//				right++;//��ʱrightָ����ĸ��Ӻ�
//			}
//			else
//			{
//				num = front * 1;
//			}
//
//			//�������ϣ����
//			int pos = 0;
//			Element* ptr = dest;
//			for (pos = 0; pos < *sz; pos++)
//			{
//				ptr = dest + pos;
//				if (strcmp(ptr->name, name)==0)
//				{
//					break;
//				}
//			}
//
//			if (pos == *sz)//û�ҵ��ͳ�ʼ��һ��
//			{
//				ptr = dest + *sz;
//				strcpy(ptr->name, name);
//				ptr->sum = 0;
//
//				(*sz)++;
//			}
//
//			//��Ԫ��
//			ptr->sum += num;
//
//			//������һ��ѭ��
//			if (right >= strlen(src))
//			{
//				break;
//			}
//			if (src[right] == '+')
//			{
//				right++;
//				
//				if ('2' <= src[right] && src[right] <= '9')
//				{
//					front = src[right] - '0';
//					right++;//ָ����ĸ��
//				}
//				else
//				{
//					front = 1;
//				}
//			}
//
//			cur = right;
//
//		}
//	}
//	//�������һ��
//	qsort(dest, *sz, sizeof(Element), cmp_name);
//}
//
//
//int ABcmp(Element* ListA, int szA, Element* ListB, int szB)
//{
//	if (szA != szB)
//	{
//		return 0;
//	}
//	for (int i = 0; i < szA; i++)
//	{
//		Element* pa = ListA + i;
//		Element* pb = ListB + i;
//
//		if (strcmp(pa->name, pb->name) != 0)
//		{
//			return 0;
//		}
//		if (pa->sum != pb->sum)
//		{
//			return 0;
//		}
//	}
//
//	return 1;
//}
//
//int main()
//{
//	char str[200] = { 0 };
//	while (scanf("%s", str) != EOF)
//	{
//		char srcA[200] = { 0 };
//		char srcB[200] = { 0 };
//		int szA = 0;
//		int szB = 0;
//		int cur = 0;
//		//�ַ����ָ�
//		for (cur = 0; cur < strlen(str); cur++)
//		{
//			if (str[cur] == '=')
//			{
//				break;
//			}
//			srcA[cur] = str[cur];
//
//		}
//
//		strcpy(srcB, str + cur + 1);
//
//		mkList(srcA, ListA, &szA);
//		mkList(srcB, ListB, &szB);
//
//		if (ABcmp(ListA,szA,ListB,szB) == 1)
//		{
//			printf("Yes\n");
//		}
//		else
//		{
//			printf("No\n");
//		}
//	}
//	return 0;
//}





//�������ʽ
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void mkList(char* src,int* dest)
{
	int front = 1;
	int cur = 0;
	if ('2' <= src[0] && src[0] <= '9')
	{
		front = src[0] - '0';
		cur++;
	}
	for (; src[cur] != '\0'; )//ֱ��һ��һ��̽���
	{

		if ('A' <= src[cur] && src[cur] <= 'Z')
		{
			int position = 0;
			char name[10] = { 0 };
			name[0] = src[cur];
			position += name[0];
			int right = cur + 1;
			//�ҵ���������
			if ('a' <= src[right] && src[right] <= 'z')
			{
				name[1] = src[right];
				position += name[1];
			}
			else
			{
				right--;//��֤rightʼ��ָ�����ֵ����һ����ĸ
			}
			//��ԭ������
			right++;//ָ���β��һλ,������ ��ĸ ���Ӻţ� ����
			int num = 1;
			if ('2' <= src[right] && src[right] <= '9')
			{
				int n = src[right] - '0';
				num = front * n;
				right++;//��ʱrightָ����ĸ��Ӻ�
			}
			else
			{
				num = front * 1;
			}

			//�������ϣ����

			dest[position] += num;

			//������һ��ѭ��
			if (right >= strlen(src))
			{
				break;
			}
			if (src[right] == '+')
			{
				right++;

				if ('2' <= src[right] && src[right] <= '9')
				{
					front = src[right] - '0';
					right++;//ָ����ĸ��
				}
				else
				{
					front = 1;
				}
			}

			cur = right;

		}
		else//ţ�ƣ���Ҳ��֪�������ɶ�ã��������˾Ͳ�ʱ�䳬���ˣ���ʵ��������ѭ��,��Ϊɶcur����ָ������ĩβҲ������ĸ�ĵط��أ�
		{
			cur++;
		}
	}

}


int ABcmp(int* ListA, int* ListB)
{
	for (int i = 0; i < 256; i++)
	{
		if (ListA[i] != ListB[i])
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	char str[250] = { 0 };
	while (scanf("%s", str) != EOF)
	{
		//��ϣ��
		int ListA[256] = { 0 };
		int ListB[256] = { 0 };

		char srcA[200] = { 0 };
		char srcB[200] = { 0 };
		int szA = 0;
		int szB = 0;
		int cur = 0;
		//�ַ����ָ�
		for (cur = 0; cur < strlen(str); cur++)
		{
			if (str[cur] == '=')
			{
				break;
			}
			srcA[cur] = str[cur];

		}

		strcpy(srcB, str + cur + 1);

		mkList(srcA, ListA);
		mkList(srcB, ListB);

		if (ABcmp(ListA, ListB) == 1)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
	return 0;
}