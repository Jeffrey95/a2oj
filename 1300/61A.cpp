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
	cin >>a>>b;
	for(int i = 0;i < a.size();i++)
	{
		if((a[i]=='1'&&b[i]=='0')||(a[i]=='0'&&b[i]=='1')) printf("1");
		else printf("0");
	}
	return 0;
}
