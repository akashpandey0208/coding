#include<iostream>
#include<string>
using namespace std;
int main(){
    int num;
    cin>>num;
    int temp=num;
    int rem=0;
    int sum=0;
    int len=0;
    while(temp>0){
            rem=temp%10;
            sum+=rem*rem*rem;
            temp=temp/10;
            len++;
    }
    
    if(sum==num){
        int evesum=0;
        int oddsum=0;
        int rem=0;
        int count=1;
        while(num>0){
       if(count%2==0){
            evesum+=num%10;
       }
       else{
        oddsum+=num%10;
       }
       num=num/10;
       count++;
    }
    cout<<"Even sum : "<<evesum<<endl;
    cout<<"Odd sum : "<<oddsum<<endl;
}
}
