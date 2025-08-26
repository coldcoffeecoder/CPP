#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, pow, num;
    cout<<"enter a number: ";
    cin>>n;
    num=n;

    cout<<"enter a power: ";
    cin>>pow;

    for(int i=1; i<pow; i++){
        num=num*n;
    }
    cout<< num;
}