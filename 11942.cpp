/*
OJ: UVa
PROB ID: 11942 
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
    int t,x,i,a[1001],count1,count2;
    cin >> t;
    x=t;
    while(t--){
        count1=0,count2=0;
        for(i=0;i<10;++i){
            cin >> a[i];
        }
        if(t==x-1) cout << "Lumberjacks:" << endl;
        for(i=0;i<9;++i){
            if(a[i]<a[i+1]){
                ++count1;
            }
            if(a[i]>a[i+1]){
                ++count2;
            }
        }
        if(count1==9 || count2==9){
            cout << "Ordered" << endl;
        }
        else{
            cout << "Unordered" << endl;
        }
    }
}
