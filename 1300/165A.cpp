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
const int maxn = 205;
int x[maxn],y[maxn];

int main()
{
#ifdef local
	freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
#endif
	
	int n;
	cin >> n;
	int cnt= 0;
	for(int i = 0;i < n;i++) scanf("%d%d",x+i,y+i);
	for(int i = 0;i < n;i++){
		int up=0,dn=0,le=0,rt=0;
		for(int j = 0;j < n;j++){
			if(i==j) continue;
			if(x[i]==x[j] && y[i]>y[j]) up=1;
			if(x[i]==x[j] && y[i]<y[j]) dn=1;
			if(y[i]==y[j] && x[i]>x[j]) le=1;
			if(y[i]==y[j] && x[i]<x[j]) rt=1;
		}
		if(up&&dn&&le&&rt) cnt++;
	}
	cout << cnt<<endl;
	return 0;
}
