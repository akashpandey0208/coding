#include<bits/stdc++.h>
using namespace std;
void prime(int n){
    vector<bool>isprime(n,true);
    isprime[0]=isprime[1]=false;
    for(int i = 2; i < n; i++){
        if(isprime[i]){
            int j =2*i;
           while(j<n){
            isprime[j]=false;
            j=j+i;
           }
        }
    }
    for(int i =0;i<n;i++){
        if(isprime[i]){
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n;
    cin>>n;
    prime(n);
    return 0;
}