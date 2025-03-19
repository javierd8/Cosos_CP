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
    int l,r;cin>>l>>r;
    if(l+r==0)
        cout<<"Not a moose";
    else{
        if(l==r)
            cout<<"Even "<<l+r;
        else
            cout<<"Odd "<<max(l,r)*2;
    }
}
