#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int fact=1;  //here it will only take values in its limit , so for large value we have to use long long instead of integer

    for(int i=1; i<=n; i++){
        fact= fact*i;
    }
    cout<<fact;
}