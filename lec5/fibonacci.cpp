#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int first=0, second=1, next;
    for(int i=0; i<n; i++){
        if(i<=1)
            next=i;
        else{
            next= first+second;
            first= second;
            second=next;
        }
        cout<<next << " ";
        
    }
    return 0;
}