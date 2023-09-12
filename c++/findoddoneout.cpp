#include<iostream>
#include<vector>
using namespace std;
int main(){
int n,t;
cin>>t>>n;
int a;
vector<int>arr;
while(t>0){
for(int i =0;i<n;i++){
    cin>>a;
    arr.push_back(a);
}
int cnteven=0;
int cntodd=0;
int n1odd,n2odd,index1,index2;
for(int i=0;i<arr.size();i++){
    if(arr[i]%2==0){
        cnteven++;
        n1odd=arr[i];
        index1=i+1;
    }
    else{
        cntodd++;
        n2odd=arr[i];
        index2=i+1;
    }
}
if(cnteven>cntodd){
    cout<<n2odd<<endl;
    cout<<index2;
}
else{
    cout<<n1odd<<endl<<index1;
}
}
t--;
}
