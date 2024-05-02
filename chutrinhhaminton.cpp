#include <bits/stdc++.h>
using namespace std;

int n, start;
vector<int> path;
int check[101];
int a[101][101];
void input(){
    cin >> n >> start;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
}
void haminton(int id, int cur){
    for(int i = 1; i <= n; i++){
        if(a[cur][i] == 1 && cur != i){
            if(id == n && i == path[0]){
                for(int j = 0; j < path.size(); j++) cout << path[j] << " ";
                cout << path[0] << endl;
            }

            else if(check[i] == 0){
                check[i] = 1;
                path.push_back(i);
                haminton(id + 1, i);
                check[i] = 0;
                path.pop_back();
            }
        }
    }
}
int main(){
    input();
    memset(check, 0, sizeof(check));
    path.push_back(start);
    check[start] = 1;
    haminton(1, start);
}