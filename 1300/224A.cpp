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
	
	int a,b,c;
	cin >> a>>b>>c;
	int x=sqrt(a*c/b);
	int y=sqrt(a*b/c);
	int z=sqrt(b*c/a);
	cout <<4*(x+y+z)<<endl;
	return 0;
}
