


#include<bits/stdc++.h>
using namespace std;
int board(int n)
{
    //static int start = 0;
    int c1 = INT_MAX,c2 = INT_MAX,c3 = INT_MAX;
    if(n==1)
    {

        return 0;
    }
    if(n%2==0)
    {
        c3 = board(n/2);
    }
    if(n%3==0)
    {
        c3 = board(n/3);
    }
    c1 = board(n-1);
    return min(c1,min(c2,c3))+1;
}

int main()
{
    int n;
    cin>>n;
    cout<<board(n);
}




