#include<bits/stdc++.h>
using namespace std;

//void swap(int a, int b){// pass by value = no swap
void swap(int &a, int &b){ // pass by reference =swap
    int c;
    c=a;
    a=b;
    b=c;
}

void swap(float &c, float &d){ //function overloading = same fun name but diff in argument
    float r = c;
    c=d;
    d=r;
}

int main(){
    int a,b;
    cin>>a>>b;

    swap(a,b);
    cout<<a<<" "<<b<<" ";
    cout<<endl;

    float f1= 4.8, f2= 3.6;
    swap(f1, f2);
    cout<<f1<<" "<<f2<<" ";
}