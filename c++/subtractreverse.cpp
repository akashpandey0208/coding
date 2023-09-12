#include<iostream>
#include<string>
using namespace std;
int main(){
    int num;
    cin>>num;
    int temp=num;
    int rev=0;
    int rem=0;
    while(temp>0){
            rem=temp%10;
            rev=rev*10+rem;
            temp=temp/10;
    }
    int dif=num-rev;
    cout<<dif;
}