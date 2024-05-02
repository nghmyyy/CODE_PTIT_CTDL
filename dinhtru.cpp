
#include<bits/stdc++.h>
using namespace std;
// loai bo 1 dinh bat ki, neu so tplt tang(giam tinh lien thong) thi no la dinh tru
 
int n, m, ans;
bool visited[101];
vector<int> adj[101];
int a[101][101];
void input(){
    cin >> n;
    for(int i = 1; i <= n;i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] == 1 ){
                adj[i].push_back(j);
            }
        }
    }
 
}
void dfs(int u){
    visited[u] = true;
    for(int v : adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}
void dinhtru(){
    memset(visited, false, sizeof(visited));
    //dem thanh phan lien thong cua do thi
    int tplt = 0;
    for(int i = 1; i <= n; i++){
        if(visited[i] == false){
            dfs(i);
            tplt++;
        }
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
        memset(visited, false, sizeof(visited));
        //loai bo dinh i ra khoi do thi
        int dem = 0;
        visited[i] = true;
        for(int j = 1; j <= n; j++){
            if(visited[j] == false){
                dfs(j);
                dem++;

            }
        }
        if(dem > tplt) {
            cout << i << " ";
            ans++;
        }

    }
    cout << endl;
    cout << ans << endl;
}
int main(){
    input();
    dinhtru();

}