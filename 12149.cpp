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

//#define B border
#define MXN 1001
#define ll long long
#define sq(a) a*a

using namespace std;

int main()
{
    ll int n;
    while(1){
        int sum=0;
        cin >> n;
        if(n==0) break;
        int i;
        for(i=1;i<=n;++i){
            sum+=sq(i);
        }
        cout << sum << endl;
    }
}
