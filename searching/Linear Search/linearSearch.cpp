#include <iostream>
using namespace std;


void linearSearch(int size, int arr[], int key) {
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            cout<< "element found at index "<< i<< endl;
            return;
        }
        else{
            continue;
        }
    }
    cout<< "\n element not fount!";
    return;
}

int main(){
    int size, i, key;
    cout<< "enter the size of array"<<endl;
    cin>> size;
    if(size <= 0){
        cout<< "Invalid array size!"<< endl;
        return 0;
    }
    int arr[size];
    cout<< "enter the elements of array"<<endl;
    for(i=0; i<size; i++){
        cin>> arr[i];
    }

    cout<<"enter the element to search"<<endl;
    cin>>key;
    linearSearch(size, arr ,key);
    return 0;
}