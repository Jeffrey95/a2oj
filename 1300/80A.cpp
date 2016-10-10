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
int a[60];

int main()
{
#ifdef local
	freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
#endif
	
	fill(a,a+60,1);
	for(int i = 3;i<=50;i++)
	{
		for(int j = 2;j*j<=i;j++)
		{
			if(i%j==0) a[i]=0;
		}	
	}
	int x,b;
	scanf("%d%d",&x,&b);
	for(int i = x+1;i <=60;i++)
	{
		if(a[i]==1)
		{
			if(i==b) printf("YES");
			else printf("NO");
			break;
		} 
	}
	return 0;
}
