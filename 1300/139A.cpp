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
int a[10];
int main()
{
#ifdef local
	freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
#endif
	
	int n;
	cin >> n;
	for(int i = 0;i < 7;i++){
		cin >> a[i];	
	}
	int day = 0;
	int cnt=0;
	while(cnt < n){
		cnt+=a[day];
		day++;
		day%=7;
	}
	if(day==0) day=7;
	cout << day<<endl;
	return 0;
}
