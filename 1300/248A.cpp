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
	int a=0,b=0;
	for(int i = 0;i < n;i++){
		int aa,bb;
		scanf("%d%d",&aa,&bb);
		a+=aa,b+=bb;
	}
	int ans = 0;
	if(a>n/2) ans+=n-a;
	else ans+=a;
	if(b>n/2) ans+=n-b;
	else ans+=b;
	cout << ans<<endl;
	return 0;
}
