#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[100001];
        for(int i = 0; i < n ; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        int min = 999999999;
        for(int i = n - 1; i > 0; i--){
            if(a[i] - a[i - 1] <= min) min = a[i] - a[i-1];
        }
        cout << min << endl;
    }
}