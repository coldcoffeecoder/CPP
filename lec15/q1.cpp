//convert a to A type

#include<bits/stdc++.h>
using namespace std;

char convert(char name){
    char ans = name-'a' + 'A';
    return ans;
}

int main(){
    char name;
    cin>>name;

    cout<<convert(name);
}