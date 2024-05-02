#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        long long a[100001];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<long long, long long> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }
        long long max = 0;
        int k = 0;
        for(auto it : mp){
            if(it.second > max && it.second > n/2){
                max = it.second;
                k = it.first;
            }
        }
        if(max != 0){
            cout << k << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
        
    }
}