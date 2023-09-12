#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cin>>str;
    string ans="";
    if(str.size()%2==0){
    for(int i =0;i<str.size();i+=2){
        swap(str[i],str[i+1]);
    }
  cout<<str;
    }
    else{
        for(int i =0;i<str.size()-1;i+=2){
        swap(str[i],str[i+1]);
    }
  cout<<str;
    }
    
}