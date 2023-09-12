#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={-5,6,-98,47,-23,-2};
    int n = sizeof(arr)/sizeof(int);
    int l=0;
    int h=0;
    while(l<n){
            if(arr[l]<0){
                swap(arr[l],arr[h]);
                    h++;
            }
            l++;
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    }
