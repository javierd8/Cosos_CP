#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void uwo();

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);    

    uwo();

    return 0;
}

void uwo(){
    int n;cin>>n;
    float q,y;
    float res=0;
    while(n--){
        cin>>q>>y;
        res+=(q*y);
    }
    cout<<res;
}
