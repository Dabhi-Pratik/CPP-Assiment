#include<iostream>

using namespace std;

int main(){

    int r=5;

    for(int i=r;  i>=1; i--){
       for(int j=1; j<=i; j++){
        cout<<j%2<<" ";
       }
       cout<<endl;
    }


    return 0;
}