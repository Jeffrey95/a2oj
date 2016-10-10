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
	
	ll n,k;
	cin >> n>>k;
	if(k<=(n+1)/2){
		cout << 2*k-1<<endl;
	}
	else{
		k-=((n+1)/2);
		cout << 2*k<<endl;
	}
	return 0;
}
