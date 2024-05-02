#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> dske[101];
bool visited[101];
int a[101][101];

void input(){
    cin >> n;
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
        if(!visited[v]) dfs(v);
    }
    
}

int demlienthong(){
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]) {
            dfs(i);
            ans++;
        }
    }
    return ans;
}
int main(){
    input();
    demlienthong();
}