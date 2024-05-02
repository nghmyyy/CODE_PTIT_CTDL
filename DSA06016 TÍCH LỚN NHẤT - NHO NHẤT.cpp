#include<bits/stdc++.h>
using namespace std;
long long a[1000001], b[1000001];
int main(){
    int t; cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        for(int i = 0; i <n ;i++){
            cin >> a[i];
        }
        for(int i = 0; i <m ;i++){
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + m);
        long long pro = a[n-1]*b[0];
        cout << pro << endl;
    }
}