#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n+1][m+1], x[n+1][m+1];
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> a[i][j];
            }
        }
        for(int i = 1; i <= n ; i++){
            x[i][1] = 1;
        }
        for(int j = 1; j <= m; j++){
            x[1][j] = 1;
        }
        for(int i = 2; i <= n; i++){
            for(int j = 2; j <= m; j++){
                x[i][j] = x[i-1][j] + x[i][j-1];
            }
        }
        cout << x[n][m] << endl;
    }
}