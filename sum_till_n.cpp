#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if(n==1 or n==0)
    {
        return n;
    }

    int subproblem = sum(n-1);
    int ans = n + subproblem;
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
}

