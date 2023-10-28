//loops
#include<iostream>
using namespace std;

//for loop------------

// int main(){
//     for (int i = 0; i < 101; i++)
//     {
//         cout<<i<<" ";
//     }
    
// }


//pre increment and post increment
// int main(){
//     int i,j,k;
//     i=0;
//     j=0;
//     k=0;

//     cout<<i<<" "<<j<<" "<<k<<endl;
//     j=i++;
//     cout<<i<<" "<<j<<" "<<k<<endl;
//     k=++i;
// }


//-------while loop-----------------
// #include<iostream>
// using namespace std;
// int main(){
//     int i=0;
//     while(i<10){
//         cout<<i<<" ";
//         i++;
//     }
// }

//---------------------------

// int main(){
//     int input;
//     for (int i = 1; i < 101; i++)
//     {
//         cin>>input;
//         if(input == 65){
//             cout<<"congrats you have guessed correct ";
//             break;
//         }
        
//     }
    
// }

//--------------Do while loop-------------------------

// int main(){
//     int password;

//     cout<<"Enter the password: ";
//     cin>>password;

//     do
//     {
//         cin>>password;

//     } 
//     while (password<999999);
    

    // while(password<999999){
    //     cout<<"The password not meet the required condition, please enter password again: ";
    //     cin>>password;
    // }

    // cout<<"The user has entered a correct password"<<endl;
    // return 0;
//}

//infinite loop
// int main(){
//     while(1){
//         cout<<"chocolates";
//     }
// }

int main(){
    for(int i=0; ;i++){
        cout<<i<<" ";
        if(i>100) break;
    }
}