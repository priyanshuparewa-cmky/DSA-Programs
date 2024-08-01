/* Temperature Range: Write a program that checks 
if a given temperature is suitable for swimming. 
If the temperature is between 70 and 90 (Excluded)
degrees Fahrenheit print yes, else NO. */

#include<iostream>
using namespace std;
int main(){
    int temp;
    // cout<<"Enter the temp = ";
    // cin>>temp;

    
    for(temp=70; temp<=90; temp++){
     if(temp==70 || temp==90){
     cout<<"Suitable for swimming";
     return 0;
    } else {
      cout<<"Not suitable for swimming";
      return 0;

    }
} 
}