#include<bits/stdc++.h>
using namespace std;
bool passwordcheck(string str){
    int n = str.size();
    bool digit=false;
    bool  upper=false;
    bool lower=false;
    bool ch=false;
    if(n>8 && n<15){
        for(char x : str){
        if(x>='0' && x<='9')
        digit=true;
        if(x>='a' && x<='z')
        lower=true;
        if(x>='A' && x<='Z')
        upper=true;
        if(x=='!'|| x=='@'|| x=='#'|| x=='$'|| x=='%'|| x=='^'|| x=='&'|| x=='*')
        ch=true;
    }
    if(digit && upper && lower && ch)
    return true;
    }
    return false;
}
int main()
{
    string in;
    cin>>in;
    if(!passwordcheck(in))
        cout<<in<<" is a invalid password";
        else
        cout<<in<<" is a valid password";
    return 0;
}