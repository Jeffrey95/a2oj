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
	int a=0,b=0,c=0;
	while(n--)
	{
		int aa,bb,cc;
		scanf("%d%d%d",&aa,&bb,&cc);
		a+=aa,b+=bb,c+=cc;
	}
	if(a||b||c) printf("NO");
	else printf("YES");
	return 0;
}
