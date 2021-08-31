#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    set<int> st;
    int i;
    for (i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        st.insert(t);
    }
    cout<<st.size()<<endl;
    while(!st.empty())
    {
        cout<<*st.begin()<<" ";
        st.erase(st.begin());
    }
    return 0;
}