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
	int cnt = 0;
	bool ok = true;
	bool beg = false;
	for(char ch:s){
		if(!beg) {
			if(ch=='1') beg = true;
			else ok = false; 
		}
		if(beg){
			if(ch=='1') cnt=0;
			if(ch=='4') cnt++;
		}
		if(cnt>2||(ch!='1'&&ch!='4')){
			ok=false;
		}	
	}
	puts(ok?"YES":"NO");
	return 0;
}
