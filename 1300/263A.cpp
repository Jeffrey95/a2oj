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
const int maxn = 6;
int a[maxn][maxn];

int main()
{
#ifdef local
	freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
#endif
	
	int x,y;
	for(int i = 1;i <= 5;i++)
	{
		for(int j = 1;j <= 5;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]==1){
				x = i,y=j;
			}
		}
	}
	printf("%d",abs(3-x)+abs(3-y));
	return 0;
}
