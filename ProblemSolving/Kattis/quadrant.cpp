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
    int x,y;cin>>x>>y;
    if(x>0 && y>0)
        cout<<"1";
    if(x<0 && y>0)
        cout<<"2";
    if(x<0 && y<0)
        cout<<"3";
    if(x>0 && y<0)
        cout<<"4";
}
