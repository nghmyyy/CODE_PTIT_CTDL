#include<bits/stdc++.h>
using namespace std;
int n , k ,a[40], ok;
void ktao(){
    for(int i = 1; i <= k; i++){
        cin >> a[i];
    }
}
void sinh(){
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        i--;
    }
    if(i==0) ok = 0;
    else{
        a[i]++;
        for(int j = i + 1; j <= k;j++){
            a[j] = a[j-1] + 1;
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        ok = 1;
        set<int> se;
        int dem;
        ktao();
        for(int i = 1 ; i <= k;i++){
            se.insert(a[i]);
        }
        int x1 = se.size();
        sinh();
        if(ok==0){
            dem = k;
        }
        else{
            for(int i = 1 ; i <= k;i++){
                se.insert(a[i]);
            }
            dem = se.size() - x1;
        }
        cout << dem << endl;
    }
}