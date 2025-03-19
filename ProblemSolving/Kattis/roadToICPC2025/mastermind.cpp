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
//https://open.kattis.com/problems/mastermind

void uwo(){
    int n;cin>>n;
    string code,guess;cin>>code>>guess;
    map<char,int> letrasCode,letrasGuess;
    for(int i='a';i<='z';i++){
        letrasCode[i]=0;
        letrasGuess[i]=0;
    }
    for(auto x:code) letrasCode[x]++;
    for(auto x:guess) letrasGuess[x]++;

    int r=0,s=0;
    for(int i=0;i<n;i++){
        if(guess[i]==code[i]){
            letrasCode[code[i]]--;
            letrasGuess[guess[i]]--;
            r++;
        }
    }
    for(auto x:letrasGuess){
        s+=min(letrasGuess[x.first],letrasCode[x.first]);
    }
    cout<<r<<" "<<s;
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
