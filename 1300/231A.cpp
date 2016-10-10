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
	int cnt =0;
	while(n--){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		int tmp=a+b+c;
		if(tmp>=2) cnt++;
	}
	cout <<cnt<<endl;
	return 0;
}
