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
	vector<int>v;
	for(char ch:s){
		if(ch=='1') v.push_back(1);
		if(ch=='2') v.push_back(2);
		if(ch=='3') v.push_back(3);
	}
	sort(v.begin(), v.end());
	vector<int>::iterator it;
	vector<int>::iterator it1=v.end();
	it1--;
	for(it=v.begin();it!=v.end();it++){
		printf("%d",*it);
		if(it!=it1) printf("+");
	}
	return 0;
}
