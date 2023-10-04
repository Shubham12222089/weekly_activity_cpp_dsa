// #include<iostream>
// using namespace std;

// int main(){
    // int a,b,c,d;

    // cout<<"Input 2 integers a and b : ";

    // cin>>a;
    // cin>>b;
    // cin>>c;
    // cin>>d;

    // //statement a>b;
    // cout<<((a>b)&&(c>d))<<endl;

    // cout<<((a>b)||(c>d))<<endl;

//     float a,b;
//     cout<<"Give 2 floating point numbers as input: "<<endl;
//     cin>>a>>b;
//     if(a>0.01 && b>a){
//         cout<<"The condition in if statement is correct."<<endl;
//     }
//     else{
//         cout<<"The condition is false."<<endl;
//     }

    
//}

//------------example

// #include<iostream>
// using namespace std;

// int main(){
//     int marks;
//     cout<<"please enter the marks: ";
//     cin>>marks;

//     if(marks>90){
//         cout<<"A";
//     }
//     else if(marks>90){
//         cout<<"B";
//     }
//     else if(marks>70){
//         cout<<"C";
//     }
//     else{
//         cout<<"Pass";
//     }
// }


//----------------------
// #include<iostream>
// using namespace std;

// int main(){
//     int a,b,c,d;
//     cout<<"please enter 3 the inputs: ";
//     cin>>a>>b>>c>>d;

//     if(a>b && c>d){
//         cout<<"haha";
//     }
//     else if(a>b && c<d){
//         cout<<"hehe";
//     }
//     else if(a<b && c>d){
//         cout<<"huhu";
//     }
// }

//-----seitch case--------------

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter an integer a: ";
    cin>>a;
    switch(a){
        case 1:
        cout<<"The value of a is 1";
        break;
        case 2:
        cout<<"The value of a is 2";
        break;
        cout<<"default will be printed";
        break;
    }
    return a;
}