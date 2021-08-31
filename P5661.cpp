#include <iostream>
#include <queue>
using namespace std;
struct ticket
{
    int kind;
    int time;
    int money;
} a[100005];

queue<ticket> q[2];
int n, in;
int main()
{
    int i, ans = 0;
    bool f;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        f = false;
        cin >> a[i].kind >> a[i].money >> a[i].time;
        if (a[i].kind == 0)
        {
            ans += a[i].money;
            q[in].push(a[i]);
            continue;
        }
        while (!q[in].empty() && a[i].time - q[in].front().time > 45)
            q[in].pop();
        while (!q[in].empty())
        {
            if (q[in].front().money >= a[i].money)
            {
                f = true;
                q[in].pop();
                break;
            }
            q[1 - in].push(q[in].front());
            q[in].pop();
        }
        while (!q[in].empty())
        {
            q[1 - in].push(q[in].front());
            q[in].pop();
        }
        if (!f)
            ans += a[i].money;
        in = 1 - in;
    }
    cout << ans << endl;
    return 0;
}
