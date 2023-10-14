#include<iostream>
using namespace std;
// void printstuff(){
//     cout<<"writing my first function";
// }

int sum(int a,int b){
    int c;
    c=a+b;
    return c;
}

int main(){
    int a,b;
    a=2;
    b=5;
    int add = sum(a,b);
    cout<<add;


}