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
int MIN = 0x3f3f3f3f;

int main()
{
#ifdef local
	freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	bool rep = false;
	int ans = 1;
	for(int i = 1;i <= n;i++){
		int tmp;
		scanf("%d",&tmp);
		if(tmp==MIN){
			rep = true;
		}
		if(tmp < MIN){
			MIN = tmp;
			ans = i;
			rep = false;
		}
	}
	rep?cout <<"Still Rozdil"<<endl:cout<<ans<<endl;
	return 0;
}
