#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    for(int j =0;j<col;j++){
        int min=INT_MAX;
        for(int i =0;i<row;i++){
            if(min>arr[j][i])
            min=arr[j][i];
        }
        cout<<min<<" ";
    }
    
}
