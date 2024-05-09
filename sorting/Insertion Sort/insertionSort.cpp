#include<iostream>
using namespace std;
void sort(int size, int arr[]){
    int i, key, j;
    for(i=0; i<size; i++){
        key = arr[i];
        j = i - 1;

        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
}

void printArray(int arr[], int size){
    int i;
    for(i=0; i<size; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

int main(){
    int i, size;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter the elements of array"<<endl;
 for(i=0; i<size; i++){
    cin>>arr[i];
 }
 sort(size, arr);
 cout<<"Sorted Array: "<<endl;
 printArray(arr, size);
    return 0;
}