#include<bits/stdc++.h>
using namespace std;

int CountDigit(int n){
    int count = 0;
    while(n){
        count++;
        n/=10;
    }
    return count;
}

bool Armstrong(int num, int digit){
    int n = num, ans= 0, rem;
    while(n){
        rem = n%10;
        n/=10;
        ans= ans+ pow(rem, digit);
    }
    if(ans== num)
    return 1;
    else 
    return 0;
}

int main(){

    int num;
    cin>>num;

    //count digit
    int digit = CountDigit(num);

    //armstrong num
    cout<<Armstrong(num, digit);
}