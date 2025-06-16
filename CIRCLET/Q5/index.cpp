#include<iostream>

using namespace std;

int main(){
      
    int r=5;

    for(int i=r; i>=1; i--){
        for(int k=1; k<i; k++){
            cout<<" "<<" ";
        }
        for(int j=i; j<=5; j++){
            cout<<j<<" ";
        }
        for(int j=5-1; j>=i; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}