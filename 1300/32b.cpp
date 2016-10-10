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
const int maxn = 250;
char a[maxn];

int main()
{
#ifdef local
	freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
#endif
	scanf("%s",a);
	int pos = 1;
	bool ok = true;
	for(int i = 0;a[i]!='\0';i++)
	{
		if(ok){
			if(a[i]=='.') printf("0");
			else ok =false;
		}
		else{
			if(a[i]=='.') printf("1");
			else printf("2");
			ok = true;
		}
	}
	return 0;
}
