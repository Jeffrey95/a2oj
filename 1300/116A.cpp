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
	int MAX = 0,cnt = 0;
	while(n--){
		int a,b;
		scanf("%d%d",&a,&b);
		cnt-=a;
		cnt+=b;
		MAX = max(cnt,MAX);
	}
	cout << MAX<<endl;
	return 0;
}
