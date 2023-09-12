#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    int decimal = 0;
    int base = 1;
    int temp = n;
    while(temp){
        decimal += (temp%10)*base;
        temp=temp/10;
        base = base*2;
    }
    cout << decimal;
    return 0;
}