#include<bits/stdc++.h>
using namespace std;
void reversewords(string &str){
    vector<string>v;
    string word="";
    for(int i = 0; i<str.size(); i++){
        if(str[i]==' '){
            v.push_back(word);
            word="";
        }
        else{
            word=word+str[i];
        }
    }
    v.push_back(word);
    for(int i = v.size()-1;i>=0;i--){
        cout<<v[i]<<" ";
    }
}
int main()
{
    string str;
    getline(cin,str);
  reversewords(str);
    
    return 0;
}