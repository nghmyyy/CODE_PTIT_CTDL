#include<bits/stdc++.h>
using namespace std;
int d[1005];
vector<int> vv[1005];
int v,e,fi;
void dfs(int i)
{
    d[i]=1;
    cout<<i<<" ";
    for(auto j:vv[i])
    {
        if(d[j]==-1)
        {  
            dfs(j);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        cin>>v>>e>>fi;
        for(int i=0;i<1005;i++)
        {
            vv[i].clear();
        }
        memset(d,-1,sizeof(d));
        int x,y;

        for(int i=0;i<e;i++)
        {
            cin>>x>>y;
            vv[x].push_back(y);
            vv[y].push_back(x);
        }
        dfs(fi);
        cout<<endl;
    }
}
Bạn đã gửi
ngon
Hùng
Trần Mạnh Hùng
#include <bits/stdc++.h>
using namespace std;
int d[1005];
vector<int> vv[1005];
int v, e, fi, se;
void dfs(int i)
{
    for (auto j : vv[i])
    {
        if (d[j] == -1)
        {
            d[j] = i;
            dfs(j);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        cin >> v >> e >> fi >> se;
        for (int i = 0; i < 1005; i++)
        {
            vv[i].clear();
        }
        memset(d, -1, sizeof(d));
        int x, y;

        for (int i = 0; i < e; i++)
        {
            cin >> x >> y;
            vv[x].push_back(y);
            vv[y].push_back(x);
        }
        d[fi] = 0;
        dfs(fi);
        int tmp = se;
        if (d[se] == -1)
            cout << "-1";
        else
        {
            stack<int> st;
            while (tmp != 0)
            {
                st.push(tmp);
                tmp = d[tmp];
            }
            while (st.size() != 0)
            {
                cout << st.top();
                st.pop();
                cout << " ";
                /* code */
            }
        }

        cout << endl;
    }
}