#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // #ifndef ONLINE_JUDGE
    // cout<<"Please Use Microsoft Word!!!\n";
    // return 0;
    // #endif // !ONLINE_JUDGE
    string str;
    int n;
    cin >> n;
    cin >> str;
    for (int i = 0; i < n; i++)
    {
        int op;
        cin >> op;
        int a, b;
        string s, s2, search;
        switch (op)
        {
        case 1:
            // string s;
            cin >> s;
            str += s;
            cout << str << endl;
            break;
        case 2:
            // string s;
            // int a,b;
            cin >> a >> b;
            for (int i = a; i < a * 2; i++)
            {
                s += str[i];
            }
            str = s;
            cout << str << endl;
            break;
        case 3:
            // string s,s2;
            // int a;
            cin >> a >> s2;
            if(a==0){
                str+=s2;
                cout<<str<<endl;
                break;
            }
            for (int i = 0; i < a; i++)
            {
                s += str[i];
            }
            for (int i = a; i < str.length(); i++)
            {
                search += str[i];
            }
            s += s2;
            str = s;
            str += search;
            cout << str << endl;
            break;
        case 4:
            cin >> search;
            int pos = str.find(search);
            cout << pos << endl;
        }
    }
    return 0;
}
