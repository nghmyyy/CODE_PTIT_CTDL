#include<bits/stdc++.h>
using namespace std;
int a[100001], b[100001];
int main(){
    int t, cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        set<int> se;
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            se.insert(a[i]);
            mp[a[i]]++;
        }
        for(int i = ; i < m; i++){
            cin >> b[i];
            se.insert(b[i]);
            mp[b[i]]++;
        }
        for(auto it : se){
            cout << it << " ";
        }
        cout << endl;
        for(auto it : mp){
            if(it.second > 1) cout << it.first <<" ";
        }
        cout << endl;
    }
}