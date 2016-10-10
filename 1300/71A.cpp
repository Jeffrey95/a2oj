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
	while(n--){
		string s;
		cin >> s;
		if(s.size()<=10) cout <<s<<endl;
		else printf("%c%d%c\n",s[0],s.size()-2,s[s.size()-1]);
	}
	return 0;
}
