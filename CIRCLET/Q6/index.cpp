#include<iostream>
using namespace std;


int main(){

    for(int i=1; i<=5; i++) 
    {

        for(int k=1; k<=i; k++)
        {
            cout << k << " ";
        }

        for(int l=i; l<5; l++)
        {
            cout << "  " << "  ";
        }

        for(int j=1; j<=i; j++)
        {
            cout << j << " ";
        }

        cout << endl;

       
    }

    return 0;
}