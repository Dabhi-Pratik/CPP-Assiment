#include<iostream>

using namespace std;


class Node{
  
    public:
      int data;
      Node* next;

      Node(int value)
      {
        data = value;
        next = NULL;
      }
};

class Linkedlist{
     
    public:
    Node*head;
    int size;

    Linkedlist(){
        head=NULL;
        size=0;
    }

    int insertatBeginning(int value){
        Node* newnode = new Node(value);
        newnode->next = head;
        head = newnode;

        cout<<"Element Added Successsfully......!"<<endl;
    }

    void search(int key){
         Node* temp = head;
         while(temp != nullptr){
            if(temp->data == key){
                cout<<"Value "<<key<<" is Found in List."<<endl;
                return;
            }
            temp=temp->next;
         }
         cout<<"Value "<<key<<" is not Found in List."<<endl;
    }

    void DeleteNode(int key){
        if(head == nullptr){
            cout<<"List is Empty.please Enter 1 for Add List."<<endl;
            return;
        }
        if(key == 0){
         Node* temp = head;
        head=head->next;
        delete temp;
        return;
        }
         
        Node*temp = head;

        for(int i =0 ; i< key-1 && temp != nullptr ; i++){
            temp = temp->next;
        }
         Node* NodeToDelete = temp->next;
         temp->next=NodeToDelete->next;
         delete NodeToDelete;
 
        cout<<"Delete Node Successfully....!"<<endl;

    }

    void Reverse(){
        Node* prev = NULL;
        Node* current = head;
        Node* next = NULL;

        while ( current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        head = prev;
        cout<<"List is Revesed SuccessFully....!"<<endl;
        
        Display();
    }
     


    int Display(){
        Node *temp = head;
        cout<<"Linked List: ";
        while(temp != nullptr){
            cout<<temp->data <<" -> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }


};


int main(){

  Linkedlist l1;
 
  int choice,value;

  while(choice != 0){

      cout<<endl<<"=====Menue===="<<endl;
      cout<<"Enter 1 for Insert Element At Beiginning."<<endl;
      cout<<"Enter 2 for Serch Element."<<endl;
      cout<<"Enter 3 for Delete a Node."<<endl;
      cout<<"Enter 4 for Revers List."<<endl;
      cout<<"Enter 5 for Display Element."<<endl;
      cout<<"Enter 0 for Exit."<<endl;
   
       cout<<"Enter Your Choice: ";
       cin>>choice;

      switch(choice){
        case 1:
         cout<<"Enter Your Element: ";
         cin>>value;
    
          l1.insertatBeginning(value);
          break;
        case 2:
          cout<<"Enter Value to Search: ";
          cin>>value;
          l1.search(value);
        break;   
        case 3:
         cout<<"Enter Position For Delete: ";
          cin>>value;
        l1.DeleteNode(value);
        break;   
        case 4:
        l1.Reverse();
        break;   
        case 5:
          l1.Display();
          break;
         default:
         cout<<"Enter Valid Choice.....!"<<endl;    
      }
  }
 


    return 0;

    
}