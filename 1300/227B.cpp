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
int pos[maxn];
int main()
{
#ifdef local
	freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
#endif
	
	int n,m;
	ll sum1=0,sum2=0;
	scanf("%d",&n);
	for(int i = 0;i <n;i++){
		int num;
		scanf("%d",&num);
		pos[num]=i+1;
	}
	scanf("%d",&m);
	for(int i = 0;i < m;i++){
		int tmp;
		scanf("%d",&tmp);
		sum1+=pos[tmp];
		sum2+=n-pos[tmp]+1;
	}
	cout << sum1<<" "<<sum2<<endl;
	return 0;
}
