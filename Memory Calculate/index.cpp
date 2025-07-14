#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Student{
  public:
    int id;
    string name;

    Student(int id, string name){
      this->id=id;
      this->name=name;
    }
    

};

class List{
   public:

    vector<Student>l1;

    List(){

    }

    void AddStudent(int id, string name){
          Student s(id,name);
          l1.push_back(s);

          cout<<"You Add a Student Successfully......!"<<endl;
      }

     void displayStudent(){
      
      cout<<endl<<"============All Stdent=========="<<endl;
         for(Student e: l1){
            cout<<"Student Name: "<<e.name<<endl; 
            cout<<"Student Id: "<<e.id<<endl<<endl;
         }
     }
     
     void RemoveStudent(int id){
        for(int i=0; i<l1.size(); i++){
         if(l1[i].id == id){
            l1.erase(l1.begin()+i);
            cout<<"Student is Removed Successfully.....!"<<endl;
         }
        }
     }

     void SearchStudent(int id){
        for(Student e: l1){
           if(e.id == id){
             cout<<endl<<"Student Name: "<<e.name<<endl; 
            cout<<"Student Id: "<<e.id<<endl;
           }
        }
     }

   

};


int main(){
       int id,choice;
       string name;
       List l1;

       while(choice !=0 ){
                
          cout<<endl<<"======================="<<endl;
          cout<<"Press 1 for Add Student"<<endl;
          cout<<"Press 2 for Display All Student"<<endl;
          cout<<"Press 3 for Remove a Student by Id"<<endl;
          cout<<"Press 4 for Search a Student by Id"<<endl;


          cout<<"Enter Your Choice: ";
          cin>>choice;

          switch(choice){

            case 1: 
               cout<<"Enter Student Id: ";
               cin>>id;
               cout<<"Enter Student Name: ";
               cin>>name;

              l1.AddStudent(id,name); 
              break;

            case 2: 
                l1.displayStudent();
              break;

            case 3: 
               cout<<"Enter Student Id: ";
               cin>>id;

              l1.RemoveStudent(id); 
              break;

            case 4: 
               cout<<"Enter Student Id: ";
               cin>>id;

              l1.SearchStudent(id); 
              break;
              
            default:
              cout<<"Enter Valid Choice....!"<<endl;
      
          }
          

            
       }
       





   return 0; 
}