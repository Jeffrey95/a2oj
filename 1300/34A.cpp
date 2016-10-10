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
int a[105];
int main()
{
#ifdef local
	freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
#endif
	
	int n,x=1,y=2;
	cin >> n;
	for(int i = 1;i <= n;i++) 
		scanf("%d",&a[i]);
	int MIN = abs(a[2]-a[1]);
	for(int i = 2;i < n;i++){
		int tmp = abs(a[i+1]-a[i]);
		if(tmp<MIN){
			MIN = tmp;
			x=i,y=i+1;
		}
	}
	if(abs(a[n]-a[1])<MIN){
		x = n,y=1;
	}
	cout << x<<" "<<y<<endl;
	return 0;
}
