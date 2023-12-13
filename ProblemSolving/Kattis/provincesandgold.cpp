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
    int g,c,s;cin>>g>>s>>c;
    int sum=g*3+s*2+c*1;
    if(sum>=8)
        cout<<"Province or ";
    else
        if(sum>=5)
            cout<<"Duchy or ";
        else
            if(sum>=2)
                cout<<"Estate or ";
    if(sum>=6)
        cout<<"Gold";
    else
        if(sum>=3)
            cout<<"Silver";
        else
            if(sum>=0)
                cout<<"Copper";
}
