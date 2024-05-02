#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        long long a[1000001];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        set<long long> se;
        for(int i = 0; i < n; i++){
            while(a[i] > 0){
                se.insert(a[i]%10);
                a[i]/=10;
            }
        }
        for(auto it : se){
            cout << it << " ";
        }
        cout << endl;
    }
}