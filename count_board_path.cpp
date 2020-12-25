


#include<bits/stdc++.h>
using namespace std;
int board(int start,int n)
{
    //static int start = 0;
    int c = 0;
    if(start==n)
    {

        return 1;
    }
    if(start>n)
    {
        return 0;
    }

    //board path
    for(int jump = 1;jump<=3;jump++)
    {
        //start =start+jump;
        c += board(start+jump,n);
    }
    return c;
}

int main()
{
    int n;
    cin>>n;
    cout<<board(0,n);
}



