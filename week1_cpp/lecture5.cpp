#include<iostream>
using namespace std;

int main(){
    //int x;  // variables name x of type int --> it can store a single integer which means x can either a sinle integer

    //arrays can be used to store multiple values in a single variable name

    //int a[5] ; // this means it is an array of name which can store multiple integers.

    //element starting from 0-5.


    // int a,b,c,d,e;

    // cout<<"Give 5 integers as input :  ";
    // cin>>a>>b>>c>>d>>e;

    // cout<<"The integers in reverse order are : "<<e<<d<<c<<b<<a;

    int a[10];

    cout<<"Give 10 integers as input "<<endl;
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    cout<<"The 5 given inputs are : "<<endl;
    for(int i=9;i>=0;i--){
        cout<<a[i]<<" ";
    }
    return 0;
}