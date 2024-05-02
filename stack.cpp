#include<bits/stdc++.h>
using namespace std;
int n, k;
int ok;
char a[100];
//CAU TRUC DU LIEU STACK
/* 
1. cau truc du lieu list 
    linked list: 
        list k nhất thiết phải liên tiếp nhau trong bộ nhớ
        list có trường next trỏ đến phần tử tiếp theo trong list, mới có thể duyệt list và lấy ra các giá trị phần tử trong list
       
       */
void duyetStack(stack<int> st){
    while(!st.empty()){
        cout << st.top << " ";
        st.pop(); //xoa phan tu vua in, in tu ptu cuoi cung
    }
}
int main(){
    stack<int> st;
    //st.push(), st.pop()
    //cout << sr.top();
}