#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    int a;
    for(int i =0 ;i < n ; i++){
        cin>>a;
        arr.push_back(a);
    }
    int count=0;
    for(int num : arr){
        if(num==sqrt(num)*sqrt(num))
        count++;
    }
    cout<<count;
    return 0;
}