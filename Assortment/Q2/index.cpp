#include<iostream>

using namespace std;

int main(){

    int row,col,i,j;

    cout << "Enter arr Row: ";
    cin >>row;

    cout << "Enter arr Col: ";
    cin >>col;
    
    int arr[row][col];

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
           cout << "arr["<<i<<"]["<<j<<"]"<<": ";
           cin >> arr[i][j];
        }
    }

    int max = 0;

    
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
           max > arr[i][j];
           max = arr[i][j];
        }
    }

    cout << "The Largest Element is"<<": "<<max;




   



return 0;

}