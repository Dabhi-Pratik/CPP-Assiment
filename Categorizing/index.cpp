#include <iostream>
#include <vector>

using namespace std;

void selectionsort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallest = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallest])
            {
                smallest = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
    }
}

void merge(vector<int> &arr, int start, int mid, int end)
{

    vector<int> temp;

    int i = start, j = mid + 1;

    while (i <= mid && j <= end)
    {

        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    
    for(int k=0; k<temp.size();k++){
        arr[start+k]=temp[k];
    }
}

void mergesort(vector<int> &arr, int start, int end)
{

    if (start < end)
    {

        int mid = start + (end - start) / 2;

        mergesort(arr, start, mid);
        mergesort(arr, mid + 1, end);
        merge(arr,start,mid,end);
    }
}



int linearsearch(vector<int> &arr, int value)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }

    return -1;
}

int binarysearch(vector<int>&arr,int start,int end,int value){
    if(start<=end){

        int mid = start +(end-start)/2;

        if( arr[mid]==value){
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

void display(vector<int>&arr){
    for(int i : arr){
        cout<<i<<" "<<endl;
    }
}

 

int main()
{

    vector<int> arr;

    int n, choice, value;

    cout << "Enter number of elements: ";
    cin >> n;

    arr.resize(n);

    
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]:";
        cin >> arr[i];
    }

    do
    {
        cout << endl
             << "----MENUE-----\n"
             << endl;
        cout << "Press 1 for Selection Sort" << endl;
        cout << "Press 2 for Merge Sort" << endl;
        cout << "Press 3 for Linear Search" << endl;
        cout << "Press 4 for Binary Search" << endl;
        cout << "Press 5 for Display" << endl;
        cout << "Press 0 for Exit." << endl;

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {

        case 1:
            selectionsort(arr, arr.size());
            break;
        case 2:
            mergesort(arr, 0, arr.size() - 1);
            break;
        case 3:
            cout << "Enter Value For Search: ";
            cin >> value;
                int idx;
             idx = linearsearch(arr, value);
            if (idx == -1)
            {
                cout << "No match Found" << endl;
            }
            else
            {
                cout << value << " is loacated at " << idx << " index position" << endl;
            }
            break;
        case 4:
            cout << "Enter Value For Search: ";
            cin >> value;

             int idex;

             idex = binarysearch(arr,0,arr.size()-1,value);
            if (idex == -1)
            {
                cout << "No match Found" << endl;
            }
            else
            {
                cout << value << " is loacated at " << idex << " index position" << endl;
            }
            break;
        case 5:
           cout<<"Current Array:  ";
           display(arr);
           break;
         default:
          cout<<"Enter Valid Choice........!"<<endl;  
        }

    } while (choice != 0);

    return 0;
}