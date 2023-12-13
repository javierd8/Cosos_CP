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
    string s;
    getline(cin,s);
    if(s=="OCT 31" || s=="DEC 25")
        cout<<"yup";
    else
        cout<<"nope";
}
