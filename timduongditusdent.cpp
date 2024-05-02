#include<bits/stdc++.h>
using namespace std;
int n, m;
int parent[101];
bool visited[101];
int a[101][101];
int s, t;
vector<int> dske[101];
void input(){
    cin >> n;
    cin >> s >> t;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if(a[i][j] == 1 ) dske[i].push_back(j);
        }
        
    }
    memset(visited, false, sizeof(visited));
}

void dfs(int u){
    visited[u] = true;
    for(int v: dske[u]){
        if(!visited[v]) {
            parent[v] = u;
            dfs(v);
        }
    }
    
}

void timduongdi(int s, int t){
    memset(visited, false, sizeof(visited));
    memset(parent, 0, sizeof(parent));
    dfs(s);
    if(!visited[t]){
        cout <<"-1" << endl;
    }
    else{
        //truy vet duong di
        vector<int> path;
        //bat dau tu dinh t
        while(s!=t){
            path.push_back(t);
            t = parent[t];
        }
        path.push_back(s);
        for(int i = 0; i < path.size(); i++){
            cout << path[i] << " ";
        }
    }
}
int main(){
    input();
    
}