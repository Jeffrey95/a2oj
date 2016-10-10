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
	
	int n,m;
	scanf("%d%d",&n,&m);
	int ans = 1;
	queue<pair<int, int> >q;
	for(int i = 1;i <= n;i++){
		int tmp;
		scanf("%d",&tmp);
		q.push(make_pair(tmp,i));
	}
	while(!q.empty()){
		if(q.size()==1){
			ans = q.front().second;
		}
		if(m<q.front().first){
			q.front().first -= m;
			pair<int,int> pp = q.front();
			q.push(pp);
		}
		q.pop();
	}
	cout << ans <<endl;
	return 0;
}
