#include<bits/stdc++.h>
using namespace std;
int op(char s){
    if(s == '^') return 3;
    if(s == '*' || s == '/') return 2;
    if(s == '+' || s == '-') return 1;
    return 0;
}
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<int> st;
        int ans = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= '0' && s[i] <= '9'){
                st.push(s[i] - '0');
            }
            if(s[i] == '*'){
                int res = st.top();
                st.pop();
                res*= st.top();
                st.pop();
                st.push(res);
            }
            if(s[i] == '/'){
                int res = st.top();
                st.pop();
                res = st.top() / res;
                st.pop();
                st.push(res);
            }if(s[i] == '+'){
                int res = st.top();
                st.pop();
                res += st.top();
                st.pop();
                st.push(res);
            }if(s[i] == '-'){
                int res = st.top();
                st.pop();
                res = st.top() - res;
                st.pop();
                st.push(res);
            }
        }
        cout << st.top() << endl;
        
    }
}