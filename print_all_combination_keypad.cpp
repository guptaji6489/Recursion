


#include<bits/stdc++.h>
using namespace std;
string code[]={" ",".","abc","def","ghi","jkl","mno","pqrs","tuv"};
void star(string str,string ans)
{
    if(str.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch = str[0];
    string ros = str.substr(1);
    int idx = ch - '0';
    string key = code[idx];
    for(int i=0;i<key.length();i++)
    {

    star(ros,ans+key[i]);
    }
}

int main()
{

        star("423","");
        return 0;
}







