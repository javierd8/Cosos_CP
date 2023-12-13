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
    int res=2,c=1;
    while(n--){
        res+=c;
        c*=2;
    }
    cout<<res*res;

}
