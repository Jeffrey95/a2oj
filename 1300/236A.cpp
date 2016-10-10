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
	set<char> st;
	for(char ch:s){
		st.insert(ch);
	}
	if(st.size()%2==0) puts("CHAT WITH HER!");
	else puts("IGNORE HIM!");
	return 0;
}
