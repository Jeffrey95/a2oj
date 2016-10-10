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
const int maxn = 1e5+10;
int a[maxn];
int main()
{
#ifdef local
	freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
#endif
	
	int k,l,m,n,d;
	scanf("%d%d%d%d%d",&k,&l,&m,&n,&d);
	for(int i =1;i <= d;i++){
		if(i%k==0||i%l==0||i%m==0||i%n==0) a[i]++;
	}
	int ans = 0;
	for(int i =1;i<=d;i++){
		if(a[i]!=0) ans++;
	}
	cout << ans<<endl;
	return 0;
}
