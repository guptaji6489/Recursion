
#include<bits/stdc++.h>
using namespace std;
void printIN(int n)
{
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }

    printIN(n-1);
    cout<<n<<endl;
    return;
}

int main()
{
    int n;
    cin>>n;
    printIN(n);
}
