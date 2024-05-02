#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[1001];
        for(int i = 0; i < n;i++){
            cin >> a[i];
        }
        sort(a, a + n);
        for(int i = 0; i <= n/2; i++){
            cout << a[i] <<" ";
            if(n - 1 - i != i) cout << a[n - 1 - i] << " ";
        }
        cout   << endl;

    }
}