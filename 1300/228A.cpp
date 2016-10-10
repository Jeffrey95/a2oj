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
	set<int>s;
	for(int i = 0;i < 4;i++){
		int c;
		cin >> c;
		s.insert(c);
	}
	printf("%d",4-s.size());
	return 0;
}
