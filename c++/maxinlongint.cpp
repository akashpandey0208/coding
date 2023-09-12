#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin>>n;
    int max=INT_MIN;
    int rem=0;
    while(n!=0){
        rem=n%10;
        if(rem>max){
            max=rem;
        }
        n/=10;
    }
    cout<<max;
    return 0;
}