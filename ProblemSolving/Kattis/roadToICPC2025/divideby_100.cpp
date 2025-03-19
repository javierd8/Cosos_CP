#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000000
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define sorteo(awa) (sort(awa.begin(),awa.end())) //Menos a Mas
#define sorteoRev(awa) (sort(awa.rbegin(),awa.rend())) // Mas a Menos
using namespace std;

//AC
//https://open.kattis.com/problems/divideby100

void uwo(){
    string n,m;cin>>n>>m;
    string res="";
    int longEntero = n.size()-m.size();
    if(n.size()>=m.size()){ // n>=m
        for(int i=0;i<n.size();i++){
            res+=n[i];
            if(i==longEntero) res+='.';
        }
    }else{ //n<m
        res+="0.";
        for(int i=0;i<abs(longEntero)-1;i++){
            res+='0';
        }
        for(auto x:n) res+=x;
    }
    //quitar cero izquierda
    for(int i=res.size()-1;i>=0;i--){
        if(res[i]=='.'){
            res[i]=' ';
            break;
        }
        if(res[i]=='0') res[i]=' ';
        else break;
    }
    cout<<res;
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
