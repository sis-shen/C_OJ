#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main()
{
	int n, s, a, b;
	cin >> n >> s >> a >> b; 
	int m = max(a, b);


	cout << dp[n][s+m];
	return 0;
}