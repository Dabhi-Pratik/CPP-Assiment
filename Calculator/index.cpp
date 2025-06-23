#include<iostream>

using namespace std;

int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int mul(int a, int b){
    return a*b;
}

int divi(int a, int b){
    return a/b;
}

int mod(int a, int b){
    return a%b;
}


int main(){
   
    int a,b,choice;
  
    
    

   while(choice != 0){
           
    cout << "-------------------------" << endl;
    cout << "--> press 1 for +" <<endl;
    cout << "--> press 2 for -" <<endl;
    cout << "--> press 3 for *" <<endl;
    cout << "--> press 4 for /" <<endl;
    cout << "--> press 5 for %" <<endl;
    cout << "--> press 0 exit...!" <<endl;

    cout<<"Enter Choice: ";
    cin>>choice;

    cout<<"Enter The First Number: ";
    cin>>a;

    cout<<"Enter The Second Number: ";
    cin>>b;


    switch(choice){

        case 1: cout << "Addition of "<<a<<" and "<<b<<" is: "<<add(a,b)<<endl;
        break;

        case 2: cout << "Subtraction of "<<a<<" and "<<b<<" is: "<<sub(a,b)<<endl;
        break;

        case 3: cout << "Multiplication of "<<a<<" and "<<b<<" is: "<<mul(a,b)<<endl;
        break;

        case 4: cout << "Division of "<<a<<" and "<<b<<" is: "<<divi(a,b)<<endl;
        break;

        case 5: cout << "Modulus of "<<a<<" and "<<b<<" is: "<<mod(a,b)<<endl;
        break;
        default:
            cout<<"Invalid Choice.........!"<<endl;
        
 
        
    }

   

   }

}