#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[100];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        stack<string> st;
        int cnt = 1;
        string s;
        for (int i = 0; i < n - 1; i++)
        {
            s = "Buoc ";
            s = s + to_string(cnt) + ": ";
            for (int j = i + 1 ; j < n; j++)
            {
                if(a[i] > a[j]) swap(a[i], a[j]);
            }
            for (int j = 0; j < n; j++)
            {
                s = s + to_string(a[j]) + " ";
            }
            st.push(s);
            cnt++;
        }
        while(!st.empty()){
            cout << st.top() << endl;
            st.pop();
        }
        
        
    }
}