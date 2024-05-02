#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        long long a[10001];
        set<long long> se;
        for(int i = 0; i < n ;i++){
            cin >> a[i];
        }
         for(int i = 0; i < n ;i++){
            se.insert(a[i]);
         }
        sort(a, a + n);
        long long ssh = a[n-1] - a[0] + 1;
        long long cnt = ssh - se.size();
        cout << cnt << endl;
        
    }
}