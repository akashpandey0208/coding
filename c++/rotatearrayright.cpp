#include<iostream>
#include<vector>
using namespace std;
vector<int> rotate(vector<int>&input , int n, int k){
    int index=n-k;
    vector<int>ans;
    int v;
    for(int i = 0 ;i<n;i++){
        v=input[(index+i)%n];
        ans.push_back(v);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
   vector<int>input;
   int a;
   for(int i = 0;i < n;i++){
    cin>>a;
    input.push_back(a);
   }
   int k;
   cin>>k;
   vector<int> v=rotate(input,n,k);
   for(int n : v){
    cout<<n<<" ";
   }
   
}
