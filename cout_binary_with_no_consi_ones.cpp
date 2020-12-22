



#include<bits/stdc++.h>
using namespace std;
int countb(int n)
{
    //countb

    if(n==1 or n==2)
    {
        return n+1;
    }
            int sub = countb(n-1)+countb(n-2);
            return sub;


}

int main()
{
    int n;
    cin>>n;
    cout<<countb(n);
}


