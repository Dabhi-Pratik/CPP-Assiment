#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;


class Node{
     public:
     
     int data;
     Node* next;

     Node(int value){
        data = value;
        next = nullptr;
     }

};

class Linkedlist{
     private:
     
     Node* head;

     public:

    Linkedlist(){
        head = nullptr;
     }

     void insertatend(int value){
        Node* newNode = new Node(value);

        if(head == nullptr){
            head = newNode;
        }
        else{
            Node* temp = head;
            
            while(temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = newNode;
        }

        cout<<value<<" is Insert in Linked list Successfully...!"<<endl;
     }

     void Display(){
        Node* temp = head;

        while(temp != nullptr){
            cout<< temp->data <<" -> ";
            temp = temp->next;
        }

        cout<<"NULL...........!"<<endl;
     }
};

void merge(vector<int>&arr,int start,int mid,int end){
    vector <int> temp;
     int i=start, j = mid+1;

    while(i <= mid && j<=end){

        if(arr[i] < arr[j]){
           temp.push_back(arr[i]);
           i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i <=mid){
            temp.push_back(arr[i]);
            i++;
    }
    while(j <= end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int k=0 ; k<temp.size(); k++){
        arr[start+k] = temp[k];
    }
}

int mergesort(vector<int>&arr,int start,int end){
          
    if(start < end){

        int mid = start + (end - start)/2;

        mergesort(arr,start,mid);
        mergesort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}

int partetion(vector<int>&arr,int start, int end){
    
    int idx = start-1;
    int pivot = arr[end];

    for(int j=start; j<end; j++){
        if(arr[j] <= pivot){
            idx++;
            // swap(arr[j],arr[idx]);

            int temp = arr[j];
            arr[j] = arr[idx];
            arr[idx] = temp;
        }
    }
    idx++;

    // swap(arr[end],arr[idx]);

    int x = arr[end];
    arr[end] = arr[idx];
    arr[idx] = x ; 

    return idx;
}

void quicksort(vector<int>&arr,int start, int end){
    if(start < end){
        int pividx = partetion(arr,start,end);

        quicksort(arr,start,pividx-1);
        quicksort(arr,pividx+1,end);
        
    }
}

int binarysearch(vector<int>&arr,int start,int end,int value){
 
    if(start<=end){
        
        int mid = start + (end-start)/2;

        if(arr[mid] == value){
            return mid;
        }
        else if(arr[mid]<value){
          return binarysearch(arr,mid+1,end,value);
        }
        else{
            return binarysearch(arr,start,mid-1,value);
        }
        return -1;
    }
}






int  main(){
    Linkedlist l1;     

    vector<int> arr;

    int choice,value;
    



    while(choice != 0){
       
        cout<<endl<<"=============Choices==========="<<endl;
        cout<<"Press 1 for Insert Linked List"<<endl;
        cout<<"Press 2 for Display Linked List"<<endl;
        cout<<"Press 3 for Enter Array"<<endl;
        cout<<"Press 4 for Merge Sort"<<endl;
        cout<<"Press 5 for Quick Sort"<<endl;
        cout<<"Press 6 for Binary Search"<<endl;
        
        cout<<"Enter Your Choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                 cout<<"Enter Value: ";
                 cin>>value;

               l1.insertatend(value);
            break;

            case 2:
            l1.Display();
            break;

            case 3:
              int n;

              cout<<"Enter Array Size: ";
              cin>>n;

              arr.resize(n);

              for(int i =0; i<n ; i++){
                cout<<"arr["<< i << "]: ";
                cin>>arr[i];
              }

            break;

            case 4:
              if(!arr.empty()){
                 mergesort(arr,0,arr.size()-1);

                 cout<<"Sorted Elements are using Merge Sort: ";
                 for(int i=0; i<arr.size();i++){
                    cout<<arr[i]<<" ";
                 }
              }else{
                cout<<"Press 3 For Enter Array.Array is Empty...!";
              }

            break;

            case 5:
              if(!arr.empty()){
                 quicksort(arr,0,arr.size()-1);

                 cout<<"Sorted Elements are using Quick Sort: ";
                 for(int i=0; i<arr.size();i++){
                    cout<<arr[i]<<" ";
                 }
              }else{
                cout<<"Press 3 For Enter Array.Array is Empty...!";
              }
            break;
            case 6:
              if(!arr.empty()){

                sort(arr.begin(),arr.end());
                   cout<<"Enter Value for Search: ";
                   cin>>value;
                int idx =   binarysearch(arr,0,arr.size(),value);

                if(idx == -1){
                    cout<<"No Match Found"<<endl;
                }
                else{
        cout<<value<<" is Founded at "<<idx<<" index Position"<<endl;
                }   
                 }
                 else{
                cout<<"Press 3 For Enter Array.Array is Empty...!";
                break;
              }

              default:
              cout<<"Please Enter Valid Choice......!"<<endl;

              }
        }
   return 0;
}
  