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
    int x;cin>>x;
    int n;cin>>n;
    int res=0,p;
    while(n--){
        cin>>p;
        res+=(x-p);
    }
    cout<<res+x;
}
