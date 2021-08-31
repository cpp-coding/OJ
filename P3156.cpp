#include<iostream>
using namespace std;
int main()
{
    int n,m;
    int arr[2000001];
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        int p;
        cin>>p;
        cout<<arr[p-1]<<endl;
    }
    return 0;
}
