#include<bits/stdc++.h>
using namespace std;

//a or b is prime or not
//a,b ka factorial
//b-a is prime or not
//b-a ka factorial

//prime number
bool prime(int n){
    if(n<2)
    return false;
    for(int i=2; i<n; i++){
        if(n%i==0)
        return false;
    }
    return true;
}

//factorial
int fact(int n){
    int ans =1 ;
    for(int i =1; i<=n; i++){
        ans = ans*i;
    }
    return ans;
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<prime(a);
    cout<<endl;
    cout<<fact(a);
    cout<<endl;

    cout<<prime(b);
    cout<<endl;
    cout<<fact(b);
    cout<<endl;


    cout<<prime(b-a);
    cout<<endl;
    cout<<fact(b-a);
    cout<<endl;
}