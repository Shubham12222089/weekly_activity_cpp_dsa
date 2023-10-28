#include<iostream>
using namespace std;

// int compare(int a,int b){
//     int c;

//     if(a>b){
//         c=a;
//     }
//     else{
//         c=b;
//     }
//     // Now c will store the maximum of a,b;

//     return c;
// }

// int compare(int a,int b){
//     if(a>b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }


int sum(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    cin>>a>>b;
    int c=sum(a,b);

    cout<<"Sum is : "<<c<<endl;
}