 
#include<bits/stdc++.h>
using namespace std;
// loai bo 1 canh bat ki, neu so tplt tang(giam tinh lien thong) thi no la dinh tru
 
int n, m, ans;
bool visited[101];
vector<int> adj[101];
int a[101][101];
vector<pair<int, int>> canh;
void input(){
    cin >> n;
    for(int i = 1; i <= n;i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] == 1 ){
                adj[i].push_back(j);
                canh.push_back({i,j});
            }
        }
    }
 
}
void dfs1(int u){
    visited[u] = true;
    for(int v : adj[u]){
        if(visited[v] == false) dfs1(v);
    }
}
void dfs(int u, int s, int t){
    visited[u] = true;
    for(int v : adj[u]){
        //loai bo canh s t ra khoi do thi
        if((u == s && v == t) || (v == s && u == t)) continue;
        if(!visited[v]){
            dfs(v, s, t);
        }
    }
}
void canhcau(){
    //dem thanh phan lien thong cua do thi
    memset(visited, false, sizeof(visited));
    int tplt = 0;
    for (int i = i; i <= n; i++)
    {
        if(visited[i] == false){
            tplt++;
            dfs1(i);
        }
    }
    // duyet tung canh
    ans = 0;
    for( auto it : canh){
        int x = it.first, y = it.second;
        //loai bo canh x, y khoi do thi;
        memset(visited, false, sizeof(visited));
        int dem = 0;
        for(int j = 1; j <= n; j++){
            if(visited[j]==false){
                dem++;
                dfs(j, x, y);
            }
        }
        if(dem > tplt) {
            cout << x <<" "<<y << endl;
            ans++;
        }
    }
    cout << ans;
    
}
int main(){
    input();
    canhcau();

}