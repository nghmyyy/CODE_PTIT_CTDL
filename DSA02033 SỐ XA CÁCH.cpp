#include<bits/stdc++.h>
using namespace std;
int n, ok, a[10];
void ktao(){
    for(int i = 01; i <= n; i++){
        a[i]  = i;
    }
}
void sinh(){
    int i = n - 1;
    while(i >= 1 && a[i] > a[i + 1]) i--;
    if(i==0) ok = 0;
    else{
        int j = n;
        while(a[i] > a[j]) j--;
        swap(a[i], a[j]);
        reverse(a+i+1, a+n+1);
    }
}
bool check(){
    for(int i = 1; i <= n - 1; i++){
        if(abs(a[i]-a[i+1]) <= 1) return false;
    }
    return true;
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        ok = 1;
        ktao();
        while(ok){
            sinh();
            if(check()){
                for(int i = 1; i <= n; i++){
                    cout << a[i];
                }
                cout << endl;
            }
        }
    }
}