#include<bits/stdc++.h>
using namespace std;
bool rotate(string s1 , string s2){
    int n =s1.size();
    int index = s2.find(s1);
    if(s1.size()!=s2.size())
    return false;
    for(int i =0;i<n;i++){
        if(s1[(index+i)%n]!=s2[i])
        return false;
    }
    return true;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(rotate(s1,s2))
    cout<<"true";
    else
    cout<<"false";
}