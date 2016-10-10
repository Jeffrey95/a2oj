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
	
	string a,b,c;
	cin >> a>>b>>c;
	a+=b;
	sort(a.begin(),a.end());
	sort(c.begin(),c.end());
	puts(a==c?"YES":"NO");
	return 0;
}
