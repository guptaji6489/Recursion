


#include<bits/stdc++.h>
using namespace std;
int board(int sr,int sc,int er,int ec)
{

    if(sr==er and ec==sc)
    {
        return 1;
    }
    if(sr>er or sc>ec)
    {
        return 0;
    }
    //count maze



    int right = board(sr,sc+1,er,ec);
    int down = board(sr+1,sc,er,ec);
    int c = right + down;
    return c;
}

int main()
{

    cout<<board(0,0,2,2);
}




