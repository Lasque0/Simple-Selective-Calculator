#include<iostream>
using namespace std;

int main(){

    int a,b,x;
    cout<<"First Number: ";
    cin>>a;
    cout<<"Second Number: ";
    cin>>b;

    cout<<"\n\n";

    cout<<"[1] Addition\n";
    cout<<"[2] Multiplication\n";
    cout<<"[3] Division\n";
    cout<<"[4] Subtraction\n\n";
    cin>>x;

    switch(x){
    case 1:cout<<"Sum of Numbers: " << a+b << "\n";
     break;
    case 2:cout<<"Multiplication of Numbers: " << a*b << "\n";
     break;
    case 3:cout<<"Division of Numbers: " << a/b << "\n";
     break;
    case 4:cout<<"Difference of Numbers: " << a-b << "\n";
     default:cout<<"Invalid Number\n";
    }

     return 0;

}
