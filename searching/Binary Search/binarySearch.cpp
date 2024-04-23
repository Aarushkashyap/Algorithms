#include <iostream>
using namespace std;

void binarySearch(int arr[], int left, int right, int key){

    while (left <= right){
        int mid = left + (right - 1) / 2;

        if(arr[mid] == key){
            cout<< "element found at index "<< mid;
            return;
        }
        if(arr[mid] < key){
            left = mid + 1;
        }

        else{
            right = mid - 1;
        }
    }

    cout<< "element not found!";
    return ;

}

int main(){
    int size, i, key;
    cout<< "enter the size of array"<<endl;
    cin>>size;
    if(size<=0){
        cout<< "Invalid array size!"<< endl;
        return 0;
    }
    int arr[size];
    cout<<"enter the elements of array"<<endl;
    for(i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<< "enter the element to search"<< endl;
    cin>>key;

    binarySearch(arr, 0, size-1, key);
    return 0;
}
