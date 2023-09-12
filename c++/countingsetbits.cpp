#include<bits/stdc++.h>
using namespace std;
int main()
{
   int num;
   cin>>num;
   int count=0;
   while(num){
        count+=num & 1;
        num=num>>1;
   }
    cout<<count;
    return 0;
}