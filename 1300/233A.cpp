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
	if(n%2!=0){
		printf("-1");
		return 0;
	}
	else {
		for(int i = 1;i <= n;i+=2){
			printf("%d %d ",i+1,i);
		}
	}
	return 0;
}
