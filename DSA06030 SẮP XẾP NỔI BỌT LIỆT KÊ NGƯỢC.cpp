#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
        int n; cin >> n;
        int a[100];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            v.push_back(a[i]);

        }
        sort(v.begin(), v.end());
        stack<string> st;
        int cnt = 1;
        string s;
        int check;
        while (1)
        {
            check = 0;
            s = "Buoc " + to_string(cnt) + ": ";
            for(int i = 0; i < n - 1; i++){
                if(a[i] > a[i+1]) {
                    swap(a[i], a[i+1]);
                    check++;
                }
            }
            if(check==0) break;
            else{
                for (int i = 0; i < n; i++)
                {
                    s = s + to_string(a[i]) + " ";
                }
                st.push(s);
                cnt++;
            }

        }
        
        while(!st.empty()){
            cout << st.top() << endl;
            st.pop();
        }
	}
        
}