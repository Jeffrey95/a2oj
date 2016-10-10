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
int main()
{
#ifdef local
	freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
#endif
	
	int n;
	cin >> n;
	int cnt = 0;
	for(int i =0;i < n;i++)
	{
		int tmp;
		scanf("%d",&tmp);
		cnt+=tmp;
	}
	double ans = cnt/(n*100.0);
	ans*=100;
	printf("%lf",ans);
	return 0;
}
