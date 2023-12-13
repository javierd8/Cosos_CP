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
    long long int a=0,b=0,res;
    while(cin>>a>>b){
        cout<<abs(a-b)<<endl;
    }

}
