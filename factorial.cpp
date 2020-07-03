#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }

    int subproblem = fact(n-1);
    int ans = n * subproblem;
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
}
