#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<int> st;
        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] >= '0' && s[i] <= '9') st.push(s[i] - '0');
            if(s[i] == '*'){
                int ans = st.top();
                st.pop();
                ans *= st.top();
                st.pop();
                st.push(ans);
            }
            if(s[i] == '/'){
                int ans = st.top();
                st.pop();
                ans /= st.top();
                st.pop();
                st.push(ans);
            }if(s[i] == '+'){
                int ans = st.top();
                st.pop();
                ans += st.top();
                st.pop();
                st.push(ans);
            }if(s[i] == '-'){
                int ans = st.top();
                st.pop();
                ans -= st.top();
                st.pop();
                st.push(ans);
            }
        }
        cout << st.top() << endl;
    }

}