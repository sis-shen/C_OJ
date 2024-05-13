#define  _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <unordered_map>
#include <vector>
#include <cstring>

using namespace std;

double matrix[41][41] = { 0 };

class Solution
{
public:
	unordered_map<string, int> _E2I;//Ԫ��->�±�
	vector<string> _Elements;//�±�->Ԫ��

	int n = 0;
	int sz = 0;
	void judge()
	{
		set_matrix();
		n = 0;
		cin >> n;
		sz = 0;
		
		init_matrix();

		if (sz == 1 && sz < n)
		{
			printf("Y\n");
			return;
		}

		vector<bool> flag(sz, true);//�з���Ԫ�ؾ���true
		
		transform(0, 0, flag);

		int R = 0;
		for (auto f : flag)
		{
			if (f) R++;
		}

		if (R < n) printf("Y\n");
		else printf("N\n");

	}

	void transform(int row,int col,vector<bool>& flag)
	{
		//print_matrxi();
		if (row >= sz || col >= n) return;//�ݹ����

		if (row == sz - 1)
		{
			flag[row] = false;
			for (int j = col; j < n; j++)
			{
				if (-0.02 < matrix[row][j] && matrix[row][j] < 0.02)//�������������
					matrix[row][j] = 0;
				if (matrix[row][j])
				{
					flag[row] = true;
				}

			}
			return;
		}

		flag[row] = false;
		while (row < sz && flag[row] == false)//����ȫ0��
		{
			for (int i = col; i < n; i++)
			{
				if (-0.02 < matrix[row][i] && matrix[row][i] < 0.02)//�������������
					matrix[row][i] = 0;
				if (matrix[row][i])
				{
					flag[row] = true;
					break;
				}
			}
			if (flag[row]) break;
			row++;
			if (row == sz) return;//����
			flag[row] = false;
		}

		int r = row;
		while (r < sz && matrix[r][col] == 0) r++;

		if (r != row)
		{
			for (int i = col; i < n; i++)//������
			{
				swap(matrix[row][i], matrix[r][i]);
				//ά����ϣ���Ԫ�ر�
			}
			//swap(_Elements[row], _Elements[r]);
			//swap(_E2I[_Elements[row]], _E2I[_Elements[r]]);
		}

		for (int r = row + 1; r < sz; r++)//��������
		{
			if (matrix[r][col] == 0) continue;
			double corr = matrix[r][col] / matrix[row][col];
			for (int j = col; j < n; j++)
			{
				matrix[r][j] -= matrix[row][j] * corr;
				if (-0.02 < matrix[r][j] && matrix[r][j] < 0.02)//�������������
					matrix[r][j] = 0;
			}
		}

		transform(row + 1, col + 1, flag);

	}

	void print_matrxi()
	{
		for (int i = 0; i < sz; i++)
		{
			for (int j = 0; j < n; j++)
			{
				printf("%3.2lf ", matrix[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}


	void init_matrix()
	{
		string str;
		for (int i = 0; i < n; i++)
		{

			string element;
			int cur = 0;
			cin >> str;
			while (cur < str.size())
			{
				if ('1' <= str[cur] && str[cur] <= '9')
				{
					//������Ԫ��
					if (!_E2I.count(element))
					{
						_E2I[element] = sz;
						sz++;
					}
					//�������
					int num = 0;
					if (cur + 1 < str.size() && str[cur + 1] >= '0' && str[cur + 1] <= '9')
					{
						num = (str[cur] - '0') * 10 + str[cur + 1] - '0';
						cur += 2;
					}
					else
					{
						num = str[cur] - '0';
						cur++;
					}

					matrix[_E2I[element]][i] = num;

					element.resize(0);
				}
				else
				{
					//����Ԫ��
					element.push_back(str[cur]);
					cur++;
				}

			}
		}
	}

	void set_matrix()
	{
		memset(matrix, 0, sizeof(double) * 41 * 41);
	}

};


int main()
{
	int n = 0;
	scanf("%d", &n);

	while (n--)
	{
		Solution sl;
		sl.judge();
	}

	return 0;
}