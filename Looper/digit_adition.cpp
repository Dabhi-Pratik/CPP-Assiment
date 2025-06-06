#include<iostream>

using namespace std;

int main(){
    
    int digit;

    cout << "Enter Digit: ";
    cin >> digit;


     int last_digit=digit%10;
     int first_digit = digit;


     while(first_digit >= 10){

        first_digit = first_digit / 10;

     }

     int sum = first_digit + last_digit;

       cout <<"First and Last Digit sum : "<< sum << endl;   
   
    return 0;
}