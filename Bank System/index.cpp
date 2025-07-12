#include<iostream>
#include<string>

using namespace std;

class Bankaccount{
    
    private:

    long long int accnumber;
    string accholdername;
    double balance=15000; 

    public:

    void setaccountdtial(long long int accno, string name, double bal){
                this->accnumber = accno;
                this->accholdername=name;
                this->balance=bal;
    }

    double getBalance(){
        return this->balance;
    }

    void withdraw(double amount){
        if(amount <= balance){
           this-> balance -=amount;
           cout<<"Withdraw "<<this->balance<<"Successfull........!"<<endl;
        }
        else{
            cout<<"Insufficient Balance.........!"<<endl;
        }
    }

    void diposit(double amount){
        if(amount > 0){
           this-> balance +=amount;
           cout<<"Diposit "<<this->balance<<"Successfull........!"<<endl;
        }
        else{
            cout<<"Invalid deposit amount.......!"<<endl;
        }
    }

    void displayprofile(){
        cout << "----Your Profile----" << endl;
        cout << "Account number : " << this->accnumber << endl;
        cout << "Account Holder Name : " <<this->accholdername<< endl;
        cout << "Account Holder Balance is : " << this->balance << endl;
    }

    



};

class SavingAccount : public Bankaccount{
  
    public:

    double Interestrate;

    void calculateintrest(){
        double interest = getBalance() * Interestrate / 100;
        cout << "Total simple Interest is : " << interest << endl;
    }


};

class CheckingAccount : public Bankaccount{
    public:

    double overdraftLimit;
  
    void Checkoverdraft(double amount){
        if(amount > getBalance() + overdraftLimit){
            cout<<"Amount exceeds overdraft limit.....!"<<endl;
        }
        else{
            cout<<"Overdraft Ok. Proceeding with withdrawal."<<endl;
        }
    }

};

class FixedDepositAccount : public Bankaccount{
    public:

      void CalculateIntrest(int time){
         float rate=7.5;
    
         cout<<"Fixed Deposit Interest : "<<(getBalance()*rate*time)/(12*100)<<endl;
      }
};

      



int main(){

    SavingAccount s1;
    s1.setaccountdtial(1236547895, "Utav", 10000);
    s1.Interestrate =3.15;
    
    CheckingAccount c1;
     c1.setaccountdtial(31546879452,"Dharmik",50000);

    FixedDepositAccount fd;
      c1.setaccountdtial(5467895431,"Brij",15000);


    int choice,amount,i;

    while(choice != 0){

          cout<<"Enter 1 to acess Saving Account "<<endl;
          cout<<"Enter 2 to acess Checking Account "<<endl;
          cout<<"Enter 3 to acess Fixed Deposite Account "<<endl;
          cout<<"Enter 0 For Exit"<<endl;
          cout<<"--------------------------------------------------"<<endl;

          cout<<"Enter Your Choice: ";
          cin>>choice;

          if(choice == 1){
                
            while(i != 0){
                      
                cout<<"You Entered In Saving Account Successfully.......!"<<endl;
                cout<<"Enter 1 to Check Balance "<<endl;
                cout<<"Enter 2 to Withdraw "<<endl;
                cout<<"Enter 3 to Deposit "<<endl;
                cout<<"Enter 4 to Calculate Fixed Interest"<<endl;
                cout<<"Enter 5 to See Profile"<<endl;
                cout<<"---------------------------------"<<endl;


               cout<<"Enter Your Choice: ";
               cin>>i;
              
               switch(i){

                case 1 : 
                   cout<<"Your Balance: "<<s1.getBalance() <<endl;
                   break;

                case 2 : 
                   cout<<"Enter Amount For Withdraw: ";
                   cin>>amount;

                   s1.withdraw(amount);
                   break;

                case 3 : 
                   cout<<"Enter Amount For Withdraw: ";
                   cin>>amount;

                   s1.diposit(amount);
                   break;

                case 4 : 
                       
                   s1.calculateintrest();
                   break;

                case 5 : 
                       
                   s1.displayprofile();
                   break;
                   
                default:
                cout<<"Invalid Choice....!"<<endl;
               }

            }
             i=-1; 
          }


          else if(choice == 2){
                  while(i != 0){
                      
                cout<<"You Entered In Checking Account Successfully.......!"<<endl;
                cout<<"Enter 1 to Check Balance "<<endl;
                cout<<"Enter 2 to Check Overdraft( "<<endl;
                cout<<"Enter 3 to Deposit "<<endl;
                cout<<"Enter 4 to Calculate Fixed Interest"<<endl;
                cout<<"Enter 5 to See Profile"<<endl;
                cout<<"---------------------------------"<<endl;


               cout<<"Enter Your Choice: ";
               cin>>i;
              
               switch(i){

                case 1 : 
                   cout<<"Your Balance: "<<c1.getBalance() <<endl;
                   break;
                case 2:
                  cout<<"Enter Amout: "  ;
                  cin>>amount;
                  c1.Checkoverdraft(amount);  
                  break;
                case 3:
                  cout<<"Enter Amout: "  ;
                  cin>>amount;
                  c1.diposit(amount);
                  break;
                case 4:
                   c1.displayprofile();
                   break;
                default:
                  cout<<"Invalid choice...!"<<endl;
               }
            }
            i=-1;
          }

          else if(choice == 3){
             
            while(i != 0){
                cout<<"You Entered In Fixed Deposite Account Successfully.......!"<<endl;
                cout<<"Enter 1 to Check Balance "<<endl;
                cout<<"Enter 2 to Withdrawal( "<<endl;
                cout<<"Enter 3 to Deposit "<<endl;
                cout<<"Enter 4 to Calculate interst"<<endl;
                cout<<"Enter 5 to See Profile"<<endl;
                cout<<"---------------------------------"<<endl;

                cout<<"Enter Your Choice: ";
               cin>>i;

               switch(i){
                    
                case 1: 
                 cout<<"Your Balance: "<<fd.getBalance()<<endl;
                 break;

                 case 2: 
                  cout<<"Enter Amout: "  ;
                  cin>>amount;
                  fd.withdraw(amount);  
                  break;

                  case 3:
                  cout<<"Enter Amout: "  ;
                  cin>>amount;
                  fd.diposit(amount);
                   break;

                  case 4:
                    int time;

                    cout<<"Enter Time(In Month): ";
                    cin>>time;

                    fd.CalculateIntrest(time);
                    break;

                 case 5:
                  fd.displayprofile();
                  break;

                 default:
                  cout<<"Invalid choice...!"<<endl;

               }
            }
            i=-1;
          }
          else{
            cout<<"Invalid choice...!"<<endl;
          }

    }

    return 0;
}