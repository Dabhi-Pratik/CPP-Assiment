#include<iostream>

using namespace std;

int main(){

    int mark; 
    
    cout <<"Enter Your Marks: ";
    cin >>mark;

    char grade = (mark >=90) ? 'A':
                 (mark >=80) ? 'B':
                 (mark >=70) ? 'C':
                 (mark >=50) ? 'D':
                 (mark <=33) ? 'E': 'F' ;

    cout << "Your Grade is  "<< grade;

    switch(grade){

        case 'A': cout << ". Excellent work! ";
            break;
        case 'B': cout << ". Well Done.";
            break;
        case 'C': cout << ". Good Job.";
            break;
        case 'D': cout << ". You passed, but you could do better. ";
            break;
        case 'F': cout << ". Sorry, you failed. ";
            break;
        default:
        cout << "Invalid grade. ";
    }

    if(grade=='A'||grade=='B'||grade=='C'||grade=='D'||grade=='E'){
        cout << "You are eligible for the next level."<<endl;
    }
    else{
        cout << "Please try again next time."<<endl;
    }


    return 0;
}