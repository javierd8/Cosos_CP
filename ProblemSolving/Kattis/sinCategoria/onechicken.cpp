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
    int a,b;cin>>a>>b;
    if(a>b){
        if(a-b==1)
            cout<<"Dr. Chaz needs 1 more piece of chicken!";
        else 
            cout<<"Dr. Chaz needs "<<a-b<<" more pieces of chicken!";
    }else{
        if(b-a==1)
            cout<<"Dr. Chaz will have 1 piece of chicken left over!";
        else
            cout<<"Dr. Chaz will have "<<b-a<<" pieces of chicken left over!";
    }
}
