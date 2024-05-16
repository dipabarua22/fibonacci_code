#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n=10;
    cout<<fib(n)<<endl;
}
/*normal way of fibonacci
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int first=0,second=1;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            cout<<first<<" ";
        }
        else if(i==2)
        {
            cout<<second<<" ";
        }
        else
        {
            sum=first+second;
            first=second;
            second=sum;
            cout<<sum<<" ";
        }

    }
}*/
