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
        stack<char> st;
        string res ="";
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z') res += s[i];
            if(s[i] >= 'a' && s[i] <= 'z') res += s[i];
            if(s[i] == '(') st.push(s[i]);
            if(s[i] == '^' || s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-'){
                while(!st.empty() && op(st.top()) >= op(s[i])){
                    res += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            if(s[i] == ')'){
                while(st.top() != '('){
                    res += st.top();
                    st.pop();
                }
                st.pop();
            }
        }
        while(!st.empty()){
            if(st.top() == '(') st.pop();
            else{
                res += st.top();
                st.pop();
            }
        }
        cout << res << endl;
    }
}