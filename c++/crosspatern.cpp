#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n= s.size();
    for(int i = 0;i<n;i++){
        int j= n-1-i;
        for(int k =0;k<n;k++){
            if(k==i || k==j){
                cout<<s[i];
            }
            else
            cout<<" ";
        }
         cout<<endl;
    }
   
    return 0;
}