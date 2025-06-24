#include<iostream>

using namespace std;

int main(){

 int r,row,c,col,i,j;

    cout << "Enter arr Row: ";
    cin >>r;

    cout << "Enter arr Col: ";
    cin >>c;
    
    int arr[r][c];

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
           cout << "arr["<<i<<"]["<<j<<"]"<<": ";
           cin >> arr[i][j];
        }
    }

    cout<<endl;

    cout<<"Enter Row Numer: ";
    cin>>row;

    int sum=0;

     cout << "row " << row <<": ";

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            if(i==row){
                sum +=arr[i][j];
                cout<<arr[i][j]<<" ";
            }
        }
    }

    cout <<endl<<"The Sum Of Row "<<row<<":"<<sum<<endl;
   
     cout << endl;

    cout<<"Enter Col Numer: ";
    cin>>col;

     sum=0;

     cout << "col " << col <<": ";

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            if(j==col){
                sum +=arr[i][j];
                cout<<arr[i][j]<<" ";
            }
        }
    }

    cout <<endl<<"The Sum Of Col "<<col<<":"<<sum<<endl;


    return 0;
}