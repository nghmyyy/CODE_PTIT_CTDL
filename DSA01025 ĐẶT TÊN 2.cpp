#include<bits/stdc++.h>
using namespace std;
int n, k, ok;
int a[16];
char x[16];
void ktao(){
    for(int i = 1; i <= k; i++){
        a[i] = i;
        if(i==1) x[i] = 'A';
        else{
            x[i] = x[i-1] + 1;
        }
    }
}
void sinh(){
    int i = k;
    while(i >= 1 && a[i] >= n - k + i){
        i--;
    }
    if(i == 0) ok = 0;
    else{
        x[i] ++;
        a[i] ++;
        for(int j = i + 1; j <= k; j++){
            x[j] = x[j-1] + 1;
            a[j] = a[j-1] + 1;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        ok = 1;
        ktao();
        while(ok){
            for(int i = 1; i <= k; i++){
                cout << x[i];
            }
            cout << endl;
            sinh();
        }
    }
}