#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[10000001];
        set<int> se;
        for(int i = 0;i < n;i++){
            cin >> a[i];
            se.insert(a[i]);
        }
        if(se.size() < 2) cout << "-1";
        else{
            int cnt = 2;
            for(auto it: se){
                cout << it << " ";
                cnt--;
                if(cnt==0) break;
            }
        }
            cout << endl;        
    }
}