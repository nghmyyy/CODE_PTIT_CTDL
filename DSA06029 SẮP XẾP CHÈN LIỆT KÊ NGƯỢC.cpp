#include<bits/stdc++.h>
using namespace std;
int main(){
        int n; cin >> n;
        int a[100];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        stack<string> st;
        int cnt = 0;
        string s;
        for(int i = 0; i < n; i++){
        	s = "Buoc " + to_string(cnt) + ": ";
        	sort(a, a + i + 1);
        	for(int j = 0; j <= i; j++){
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