#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int a[1001];
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        int check = 0;
        for(auto it: mp){
            if(it.first == x){
                cout << it.second << endl;
                check++;
                break;
            }
        }
        if(check == 0){
            cout << "-1" << endl;
        }

    }
}