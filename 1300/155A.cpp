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
const int maxn = 1e3+10;
int a[maxn];
int main()
{
#ifdef local
	freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
#endif
	
	int n;
	cin >> n;
	for(int i = 0;i < n;i++) scanf("%d",&a[i]);
	int MAX = a[0],MIN = a[0];
	int cnt = 0;
	for(int i = 1;i < n;i++)
	{
		if(a[i]>MAX){
			MAX =a[i];
			cnt++;
		}
		if(a[i]<MIN){
			MIN = a[i];
			cnt++;
		}
	}
	cout << cnt<<endl;
	return 0;
}
