// #include<iostream>
// using namespace std;

// int main() {
// 	char c;
//     cin>>c;
//     if(c>='a' && c<='z'){
//         cout<<0;
//     }
//     else if(c>='A' && c<='Z'){
//         cout<<1;
//     }
//     else 
//     cout<<-1;
// }
/*
Pattern
1
23
345
4567
*/
// #include<iostream>
// using namespace std;


// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j = i,count = 1;
//         while(count<=i){
//             cout<<j;
//             j = j + 1;
//             count = count + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }
/*
Pattern
N = 4
   *
  ***
 *****
*******
*/
/*
Pattern
N = 4
   *
  ***
 *****
*******
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j = i,count = 2*n-1,gaps=(n-i),k=1;
//         while(k<=gaps){
//             cout<<" ";
//             k = k + 1;
//         }
//         int m = 1,ch = count - 2*gaps;
//         while(m<=ch){
//             cout<<"*";
//             m = m + 1;
//         }
//         k = 1;
//         while(k<=gaps){
//             cout<<" ";
//             k = k + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }

/*
Pattern
N = 4
1
22
333
4444
*/
// #include<iostream>
// using namespace std;

// int main(){
//   int i,j,n;
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
// 	        cout<<i;
//         }
//     cout<<endl;
//     }
// }
/*
Pattern
N = 4
1
21
321
4321
*/
#include<iostream>
using namespace std;

int main(){
  int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
       int p=i;
        for(j=i;j>0;j--){
          cout<<p;
          p--;
        }
        cout<<endl;
        
    }
}