#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

void uwo(){
    int n,t;cin>>n>>t;
    vector<int> b(n);
    for(auto& x:b) cin>>x;
    vector<int> bfs(3601,INT_MAX); bfs[0]=0;
    queue<int> q; q.push(0);
    while(q.size()){
        int act = q.front(); q.pop();
        for(auto x:b){
            int sig = act+x;
            if(sig<0) sig=0;
            if(sig>3600) sig=3600;
            if(bfs[sig]>bfs[act]+1){
                bfs[sig] = bfs[act]+1;
                q.push(sig);
            }
        }
    }
    // for(auto x:bfs)
    //     cout<<x<<" "<<endl;
    for(int i=t;i<bfs.size();i++)
        if(bfs[i]!=INT_MAX){
            cout<<bfs[i]<<" "<<i-t<<endl;
            break;
        }

}

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    int tc=1;
    cin>>tc;
    while(tc--)
        uwo();
    return 0;
}
