#include <iostream>
using namespace std;
 
#include<bits/stdc++.h>
using namespace std;
 //BUOC1: goi thuat toan dfs tren do thi ban dau va luu thu tu duyet cac dinh vao 1 stack
 //Buoc2: xay dung do thi lat nguoc cua do thi ban dau
//Buoc3: lan luot pop cac dinh trong stack cua buoc 1 va goi thuat toan dfs de liet ke cac thanh phan cac thanh phan lien thong manh
// strongly connected components: scc
 
int n, m, ans;
bool visited[101];
vector<int> adj[101], r_adj[101];
stack<int> st;
int a[101][101];
void input(){
    cin >> n;
    for(int i = 1; i <= n;i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j] == 1 ){
                adj[i].push_back(j);
                r_adj[j].push_back(i);
            }
        }
    }
    /*for(int i= 1; i <= n; i++){
    	for(int j : adj[i])
    		cout << i << " " << j << endl;
    }
    for(int i= 1; i <= n; i++){
    	for(int j : r_adj[i])
    		cout << i << " " << j << endl;
    }
    */
 
}
void dfs1(int u){
    visited[u] = true;
    for(int v : adj[u]){
        if(!visited[v]){
            dfs1(v);
        }
    }
    // da duyet xong dinh u;
    st.push(u);
}
void dfs2(int u){
    visited[u] = true;
    //cout << u <<" ";
    for(int v : r_adj[u]){
        if(!visited[v]) dfs2(v);
 
    }
}
void scc(){
	ans=0;
    memset(visited, false, sizeof(visited));
    for(int i = 1; i <= n; i++) {
    	if(visited[i] == false){
    		dfs1(i);
    	}
    }
    memset(visited, false, sizeof(visited));
    while(!st.empty()){
       int s = st.top(); st.pop();
       if(visited[s] == false) {
            dfs2(s);
            ++ans;
       }
 
    }
    //cout << endl << ans << endl;
    if(ans==1) cout << "Strongly connected component" << endl;
    else{
        cout << "Not" << endl;
    }
 
 
}
int main(){
    input();
    scc();
}