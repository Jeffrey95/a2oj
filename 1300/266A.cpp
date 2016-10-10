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
	cin >>n;
	string a;
	cin >> a;
	if(n==1){
		printf("0");
		return 0;
	}
	int cnt = 0,ans = 0;
	for(int i = 0;i <=n-1;i++)
	{
		if(a[i]==a[i+1]) cnt++;
		else{
			ans+=cnt;
			cnt =0;
		}
	}
	printf("%d",ans);
	return 0;
}
