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
	int zero=0,five=0;
	for(int i = 0;i < n;i++){
		int tmp;
		scanf("%d",&tmp);
		if(tmp==5) five++;
		else zero++;
	}
	if(!zero){
		puts("-1");
		return 0;
	}
	five/=9;
	five*=9;
	//cout << five <<" "<<zero<<endl;
	for(int i = 0;i < five;i++){
		printf("%d",5);
	}
	if(five==0) printf("0");
	else{
		for(int i = 0;i < zero;i++){
			printf("%d",0);
		}
	}
	return 0;
}
