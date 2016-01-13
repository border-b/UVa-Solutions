/*
OJ: UVa
PROB ID: 12300
ID: border
*/
#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int xa,ya,xb,yb,n;
    double r,area;
    while(scanf("%d %d %d %d %d",&xa,&ya,&xb,&yb,&n)!=EOF){
        if(xa==0 && xb==0 && ya==0 && yb==0 && n==0) break;
        double d=sqrt(((xa-xb)*(xa-xb))+((ya-yb)*(ya-yb)));
        r=d/2/sin(M_PI/n*(n/2));
        area=n*(r*r/2)*(sin((2*M_PI)/n));
        printf("%0.6lf\n",area);
    }
}
