#include<bits/stdc++.h>
using namespace std;

int n, k, a[16], ok;
void ktao(){
    for(int i = 1; i <= k; i++){
        a[i] = i;
    }
}
void sinh(){
    int i;
    for(i = k; i >= 1; i--){
        if(a[i]  < n - k + i){
            break;
        }
    }
    if(i==0){
        ok = 0;
    }
    else{
        a[i]++;
        for(int j = i+1; j <= k;++j){
            a[j] = a[j-1]+1;
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        ok=1;
        ktao();
        while(ok){
            for(int i = 1; i <= k;i++){
                cout << a[i];
            }
            cout <<" ";
            sinh();
        }
        cout << endl;
    }
}