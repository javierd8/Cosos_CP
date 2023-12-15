#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define ull unsigned long long
#define ld long double
using namespace std;

void uwo(){
    ld k;cin>>k;
    ld n=2*k;
    ld res=1;
    ld aux=k;
    for(int i=0;i<aux;i++){
        res *= n/k;
        n--;
        k--;
    }
    //ll res = cursi(n)/(cursi(k)*cursi(n-k));  //Overflow
    //ll res = ((cursi(n)-cursi(k))/cursi(k)); //xd
    cout<<fixed<<setprecision(0)<<res;
}

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    int tc=1;
    //cin>>tc;
    while(tc--)
        uwo();
    return 0;
}
