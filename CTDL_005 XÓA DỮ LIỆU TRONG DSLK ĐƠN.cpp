#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a[100], k;
    cin >> n;
    for(int i = 0; i< n;i++){
        cin >> a[i];
    }
    cin >> k;
    for(int i = 0; i < n; i++){
        if(a[i] != k){
            cout << a[i] <<" ";
        }
    }
}