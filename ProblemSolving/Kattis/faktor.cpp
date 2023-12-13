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
    int a,i;cin>>a>>i;
    float res=a*i;

    while(ceil(res/a)>=i){
        res--;
    }
    cout<<res+1;

}
