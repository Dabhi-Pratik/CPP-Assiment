#include<iostream>

#define size 5

using namespace std;

class Stack{
        public:

        int top;
        int arr[size];

        Stack(){
            top = -1;
        }
    
        void push(int value){
            if( top == size-1){
                cout<<"Stack is Full."<<endl;
            }
            else{
                top++;
                arr[top]=value;

                cout<<value<<" is Push in Stack Successfully....!"<<endl;
            }
        }

        void pop(){
            if(top == -1){
                cout<<"Stack is Empty.Enter 1 for Enter Stack."<<endl;
            }
            else{
                cout<<arr[top]<<" is Removed Successfully.....!"<<endl;
                top--;
            }
        }

        void peek(){
            if(top == -1){
                cout<<"Stack is Empty.Enter 1 for Enter Stack."<<endl;
            }
            else{
                cout<<arr[top]<<" is Top of Stack."<<endl;
            }
        }

        void isEmpty(){
            if(top == -1){
                cout<<"Stack is Empty.........!"<<endl;
            }
            else{
                cout<<"Stack is not Empty.....!"<<endl;
            }
        }

        void isFull(){
            if(top == size-1){
                cout<<"Stack is Full.........!"<<endl;
            }
            else{
                cout<<"Stack is not Full.....!"<<endl;
            }
        }

        void Display(){
             if(top == -1){
                cout<<"Stack is Empty.........!"<<endl;
            }

            else {
                cout<<"Stack is: ";
                for(int i=0; i<=top; i++){
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
        }






};

int main(){
   
    Stack s1;

    int value,choice;

    while( choice != 0){

         cout<<endl<<"======Stack Functionality======="<<endl;
         cout<<"Enter 1 for Add Element in Stack."<<endl;
         cout<<"Enter 2 for Delete One Element in Stack."<<endl;
         cout<<"Enter 3 for See Top Element in Stack."<<endl;
         cout<<"Enter 4 for Check Stack is Empty."<<endl;
         cout<<"Enter 5 for Check Stack is Full."<<endl;
         cout<<"Enter 6 for Display Stack."<<endl;
         cout<<"Enter 0 for exit"<<endl;

         cout<<"Enter Your Choice: ";
         cin>>choice;

         switch(choice){
            case 1:
            cout<<"Enter Stack: ";
            cin>>value;
            s1.push(value);
            break;
              
            case 2:
            s1.pop();
            break;

            case 3:
            s1.peek();
            break;

            case 4:
            s1.isEmpty();
            break;

            case 5:
            s1.isFull();
            break;

            case 6:
            s1.Display();
            break;
         }

    }

    return 0;
}