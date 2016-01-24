/*
ID: border
*/
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <queue>
#include <sstream>
#include <cmath>

#define B border
#define MXN 1001
#define ll long long

using namespace std;

int main()
{
    ll int t,n,a[MXN];
    int x;
    while(1){
        int i=0;
        cin >> n;
        if(n<0) break;
        if(n==0){
            cout << "0";
        }
        else{
            while(n!=0){
                int r=n%3;
                n/=3;
                a[i]=r;
                i++;
            }
            for(x=i-1;x>=0;--x){
                cout << a[x];
            }
        }
        cout << endl;
    }
}
