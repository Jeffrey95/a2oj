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
	int x = 0;
	while(n--){
		string s;
		cin >> s;
		int op = 1;
		for(char ch:s){
			if(ch=='-') op=2;
		}
		op==1?x++:x--;
	}
	cout << x<<endl;
	return 0;
}
