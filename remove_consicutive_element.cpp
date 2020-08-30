


#include<bits/stdc++.h>
using namespace std;
string star(string str)
{
    if(str=="")
    {
        return str;
    }

    char ch = str[0];
    string ros = str.substr(1);
    string result = star(ros);

    string star = "*";
    if(ch == result[0])
    {
        return result;
    }
    else
    {
        return ch + result;
    }
}

int main()
{

    cout<<star("aabbcdde");
}





