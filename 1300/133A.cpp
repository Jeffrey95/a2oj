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
	bool ok = false;
	for(char ch:s){
		if(ch=='H'||ch=='Q'||ch=='9') ok=true;
	}
	puts(ok?"YES":"NO");
	return 0;
}
