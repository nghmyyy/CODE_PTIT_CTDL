#include<bits/stdc++.h>
using namespace std;
vector<string> v;
int a[100][100], n;
bool used[100][100];
void Try(int i, int j, string s){
    if(a[1][1] == 0 || a[n][n] == 0) return;
    if(i == n && j == n && a[n][n] == 1){
        v.push_back(s);
        return;
    }
    if(a[i+1][j] == 1 && i + 1 <= n && !used[i+1][j]){
        used[i][j] = true;
        Try(i+1, j, s + "D");
        used[i][j] = false;
    }
    if(a[i][j+1] == 1 && j + 1 <= n && !used[i][j+1]){
        used[i][j] = true;
        Try(i, j + 1, s + "R");
        used[i][j] = false;
    }if(a[i][j-1] == 1 && j - 1 >= 1 && !used[i][j-1]){
        used[i][j] = true;
        Try(i, j-1, s + "L");
        used[i][j] = false;
    }if(a[i-1][j] == 1 && i - 1 >= 1 && !used[i-1][j]){
        used[i][j] = true;
        Try(i-1, j, s + "U");
        used[i][j] = false;
    }
}
int main(){
    int t; cin >> t;
    for(int k = 0; k < t; k++){
        cin >> n;
        for(int i = 1; i <= n;i++){
            for(int j = 1; j <= n; j++){
                cin >> a[i][j];
            }
        }
        for(int i = 1; i <= n;i++){
            for(int j = 1; j <= n; j++){
                used[i][j] = false;
            }
        }
        v.clear();
        Try(1,1, "");
        if(v.size() == 0) cout << "-1" << endl;
        else{
            sort(v.begin(), v.end());
            for(int i = 0; i <= v.size(); i++){
                cout << v[i] <<" ";
            }
            cout << endl;
        }
        
    }
}
