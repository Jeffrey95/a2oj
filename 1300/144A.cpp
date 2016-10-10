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
const int maxn = 105;
int a[maxn];

int main()
{
#ifdef local
	freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
#endif
	
	int n;
	cin >> n;
	int MIN=101,MAX=0;
	int mm=1,mx=1;
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i]);
		if(a[i]<=MIN){
			MIN = a[i];
			mm = i;
		}
		if(a[i]>MAX){
			MAX = a[i];
			mx = i;
		}
	}
	int ans = abs(n-mm)+abs(mx-1);
	if(mx>mm) ans-=1;
	cout << ans<<endl;
	return 0;
}
