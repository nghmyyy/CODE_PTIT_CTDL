#include<bits/stdc++.h>
using namespace std;
bool check = false;
vector<string> v;
int n, a[11][11];
void nhap(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    v.clear();
    check = false;
}
void Try(int i, int j, string s){
    if(i==1 && j==1 && a[i][j] == 0){
        check = false;
        return;
    }
    if(i==n && j == n && a[i][j] == 1){
        v.push_back(s);
        check = true;
        return;
    }
    if(i < n && a[i+1][j] == 1){
        Try(i+1,j, s+"D");
    }
    if(j < n && a[i][j+1] == 1){
        Try(i, j + 1, s+"R");
    }
    if((i < n && j < n && a[i+1][j] == 0 && a[i][j+1] ==0) || i > n || j > n){
        return;
    }
}
int  main(){
    int t; cin >> t;
    while(t--){
        nhap();
        Try(1,1,"");

        if(check == false) cout << -1 << endl;
        else{ 
           sort(v.begin(), v.end());
            for(int i = 0; i < v.size(); i++){
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
}