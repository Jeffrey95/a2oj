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
	
	int n,k,l,c,d,p,nl,np;
	cin >>n>>k>>l>>c>>d>>p>>nl>>np;
	int aa = k*l/nl;
	int bb = c*d;
	int cc = p/np;
	printf("%d",min(min(aa,bb),cc)/n);
	return 0;
}
