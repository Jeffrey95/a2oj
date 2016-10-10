#include <cstdio>
#include <cstdlib>
#include <string.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <map>
#include <set>
typedef long long ll;
using namespace std;
const int maxn = 60;
char a[maxn];
int main()
{
#ifdef local
	freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
#endif
	
	int n,t;
	cin >> n >>t;
	scanf("%s",a);
	for(int i = 0;i < t;i++)
	{
		for(int j = 0;j <= n-1;j++)
		{
			if(a[j]=='B'&&a[j+1]=='G') 
			{
				swap(a[j],a[j+1]);
				j++;
			}
		}
	}
	puts(a);
	return 0;
}
