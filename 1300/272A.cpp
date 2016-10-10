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
	int num = 0;
	for(int i  = 0;i < n;i++){
		int tmp;
		scanf("%d",&tmp);
		num+=tmp;
	}
	int ans = 0;
	for(int i = 1;i<=5;i++){
		if((num+i)%(n+1)!=1){
			//printf("ans:%d\n",num+i);
			ans++;
		}
	}
	cout << ans<<endl;
	return 0;
}
