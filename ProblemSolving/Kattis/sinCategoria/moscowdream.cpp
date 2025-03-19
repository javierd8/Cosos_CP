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
    int a,b,c,d;cin>>a>>b>>c>>d;
    (a>0&&b>0&&c>0&&d>2&&a+b+c>=d) ? cout<<"YES" : cout<<"NO";
}
