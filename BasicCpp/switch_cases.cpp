#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number = ";
    cin>>number;

    switch(number){
        case 1:
        cout<<"January";
        break;
        case 2:
        cout<<"Febrary";
        break;
        case 3:
        cout<<"March";
        break;
        case 4:
        cout<<"April";
        break;
        case 5:
        cout<<"May";
        break;
        case 6:
        cout<<"June";
        break;
        case 7:
        cout<<"July";
        break;
        case 8:
        cout<<"August";
        break;
        case 9:
        cout<<"September";
        break;
        case 10:
        cout<<"October";
        break;
        case 11:
        cout<<"Novamber";
        break;
        case 12:
        cout<<"December";
        break;
        default:
        cout<<"The number which you are pressing is invalid : "<<endl<<endl<<endl;
        cout<<"Please the valid number from 1 to 12";
    }
}