

#include<bits/stdc++.h>
using namespace std;
int printDES(int n[],int si,int s)
{
    if(si==s-1)
    {
        return 1;
    }
    if(n[si]<n[si+1])
    {
        printDES(n,si+1,s);
    }
    else{
        return 0;
    }


}

int main()
{
    int n[]={1,2,3,14,5};
    cout<<printDES(n,0,5);
}

