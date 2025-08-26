#include<bits/stdc++.h>
using namespace std;

int sum(int m, int n){  //function declare
    int ans= m+n;       //function define
    return ans;
}

int mul(int m, int n){
    int ans= m*n;
    return ans;
}

void fun(){ 
    cout<<"hello"<<endl;
}

int main(){
    int a,b;
    cin>>a>>b;

    //function call

    cout <<sum(a,b);
    cout<<endl;
    cout<<mul(a,b);
    cout<<endl;

    fun();
}