#include<cstdio>
int n,m,x,a[2000001];//定义变量
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    while(m--)
    {
        scanf("%d",&x);
        printf("%d\n",a[x]);
    }
}