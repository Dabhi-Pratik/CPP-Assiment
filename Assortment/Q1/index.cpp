#include<iostream>

using namespace std;

int main(){

    int size,i;

    cout << "Enter arr size: ";
    cin >> size;
    
    int arr[size];

   

    for(i=0; i<size; i++){
        cout <<" arr[" << i << "]:";
        cin >> arr[i];
    }

    cout<<"Negative Element: "<<endl;
    for(i=0; i<size; i++){
        if(arr[i]<0){
            cout<<arr[i]<<" ";
        }
    }

return 0;

}