#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    for(int i = 0;i<n;i++){
        int a=sqrt(v[i]);
        if(a*a==v[i]){
            cout<<"<"<<v[i]<<","<<v[5-1]<<">, ";
        }
        else if(v[i]%4==0 && v[i]%6==0){
             cout<<"<"<<v[i]<<","<<v[4-1]<<">, ";
        }
        else if(v[i]%2==0){
             cout<<"<"<<v[i]<<","<<v[3-1]<<">, ";
        }

    }
    return 0;
}