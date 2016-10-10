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
	
	int n,m;
	ll ans = 0;
	cin >> n >>m;
	for(int i = 1;i <= m;i++){
		scanf("%d",&a[i]);
	}
	return 0;
}
