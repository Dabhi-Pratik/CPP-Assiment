#include<iostream>

using namespace std;

int main(){

 int r,row,c,i,j;

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


    return 0;
}