#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, p;
        cin >> n >> p;
        int a[n+1], l[n], r[n], k[n], b[n+1];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            b[i] = a[i];

        }
        for(int i = 1; i <= p; i++){
            cin >> l[i] >> r[i] >> k[i];
        }
        int i = 1;
        while(p--){
            for(int j = l[i]; j <= r[i]; j++){
                a[j] = k[i];
            }
            int dem = 0;
            for(int j = 1; j <= n; j++){
                if(a[j]%2!=0) dem++;
            }
            if(dem%2!=0) cout << "YES" << endl;
            else{
                cout << "NO" << endl;
            }
            for(int j = 1; j <= n; j++){
                a[i] = b[i];
            }
            i++;
        }
    }
}