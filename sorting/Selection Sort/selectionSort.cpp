#include <iostream>
using namespace std;

void sort (int size, int arr[]) {
    int i, j, min;

    for(i=0;i<size-1;i++){
        min = i;
        for(j=i+1; j<size; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(min != i){
            swap(arr[min], arr[i]);
        }
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