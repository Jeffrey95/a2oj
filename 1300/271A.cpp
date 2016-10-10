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
	
	int x;
	cin >> x;
	for(int i = x+1;i <= 9999;i++)
	{
		int aa = i/1000,bb=(i/100)%10,cc=(i/10)%10,dd = i%10;
		if(aa!=bb&&aa!=cc&&aa!=dd&&bb!=cc&bb!=dd&&cc!=dd)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
