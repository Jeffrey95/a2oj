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
	
	string s;
	cin >> s;
	int cnt=0;
	for(int i = 0;i < s.size();i++)
	{
		if(s[i]=='4'||s[i]=='7') cnt++;
	}
	puts((cnt==4||cnt==7)?"YES":"NO");
	return 0;
}
