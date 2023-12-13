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
    double x;cin>>x;
    cout<<fixed<<(int)round(x*(1000.0*5280.0/4854.0));

}
