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
int a[3][3]={{1,1,1},{1,1,1},{1,1,1}};
int b[3][3];
int dir[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
int main()
{
#ifdef local
	freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
#endif
	
	for(int i = 0;i < 3;i++){
		for(int j = 0;j < 3;j++){
			scanf("%d",&b[i][j]);
			b[i][j]%=2;
			if(b[i][j]!=0){
				a[i][j]=1-a[i][j];
				for(int k = 0;k < 4;k++){
					int xx = i+dir[k][0];
					int yy = j+dir[k][1];
					if(xx>=0 && xx< 3 && yy >=0 &&yy<3){
						//printf("xx:%d yy:%d a[xx][yy]:%d\n",xx,yy,a[xx][yy]);
						a[xx][yy]=1-a[xx][yy];
					}
				}	
			}
		}
	}
	
	for(int i = 0;i <3;i++){
		for(int j =0;j<3;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
