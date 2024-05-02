#include <bits/stdc++.h>
using namespace std;

int n, start, a[101][101];
stack<int> st;
vector<int> ec;
void input(){
    cin >> n >> start;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
}
void euler(int v){
    st.push(v);
    while(!st.empty()){
        int s = st.top();
        for(int i = 1; i <= n; i++){
            if(a[s][i]){
                st.push(i);
                a[s][i] = 0;
                a[i][s] = 0;
                break;
            }
        }
        if(s == st.top()){
            ec.push_back(s);
            st.pop();
        }
    }
    for(int i = ec.size() - 1; i >= 0; i--) cout << ec[i] << " ";
}

int main() {
    input();
    euler(start);
}