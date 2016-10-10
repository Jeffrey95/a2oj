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
	
	string a,b;
	cin >> a>>b;
	for(int i = 0; i < a.size();i++){
		a[i]=tolower(a[i]);
		b[i]=tolower(b[i]);
	}
	//cout << a<<" "<<b<<endl;
	if(a<b) printf("-1");
	else if(a==b) printf("0");
	else printf("1");
	return 0;
}
