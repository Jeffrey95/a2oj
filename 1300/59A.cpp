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
#include <cctype>
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
	int l=0,u=0;
	for(int i = 0;i < s.size();i++)
	{
		if(islower(s[i])) l++;
		if(isupper(s[i])) u++;
	}
	if(l<u) transform(s.begin(), s.end(), s.begin(), ::toupper);
	else transform(s.begin(), s.end(), s.begin(), ::tolower);
	cout << s<<endl;
	return 0;
}
