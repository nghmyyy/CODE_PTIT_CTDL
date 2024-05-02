#include<bits/stdc++.h>
using namespace std;
stack<string> st;
void dayso(int a[], int n){
    if(n > 0){
        string s = "[";
        for(int i = 0; i < n; i++){
            int j = a[i];
            string s1 = to_string(j);
            if(i==n-1) {
                s = s + s1;
                s = s + "]";
            }
            else{
                s = s + s1;
                s = s + " ";
            }
        }
        st.push(s);
        for(int i = 0; i < n - 1; i++){
            a[i] = a[i] + a[i+1];
        }
        dayso(a, n - 1);
    }
    }
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[10];
        int k = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        dayso(a, n);
        while(!st.empty()){
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
        
        
    }
}