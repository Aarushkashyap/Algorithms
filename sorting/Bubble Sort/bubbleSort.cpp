#include <iostream>
using namespace std;

void bubbleSort(int size, int arr[]){
    int i, j;

    for(i=0; i<size; i++){

        for(j=0; j<size-i-1; j++){

            if(arr[j]>arr[j+1]){
                
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int size, int arr[]){
    int i;
    cout<<"Sorted Array: "<<endl;
    for(i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

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
    bubbleSort(size, arr);
    printArray(size, arr);
    return 0;
}