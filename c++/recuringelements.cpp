#include<bits/stdc++.h>
using namespace std;
void removeduplicates(vector<int>v,int n){
    sort(v.begin(),v.end());
    int k = 0;
    for(int i= 0; i<n-1; i++){
        if(v[i]!=v[i+1])
       v[k++]=v[i];
    }
    v[k++]=v[n-1];
    for(int n : v){
        cout<<n<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    int a;
    for(int i = 0;i<n;i++){
            cin>>a;
            v.push_back(a);
    }
   removeduplicates(v,n);
    return 0;
}