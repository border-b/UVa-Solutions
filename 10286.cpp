/*
OJ: UVa
PROB ID: 10286
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
    double side,square;
    while(scanf("%lf",&side)!=EOF){
        square=1.0673956817111818692592637626711*side;
        printf("%0.10lf\n",square);
    }
}
