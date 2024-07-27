#include <iostream>
#include <limits.h> 
using namespace std;

int main(){

    int arr[] = {54, 12, 43, 10, 8, 3, 75, 92, 69};

    int size = sizeof(arr) / sizeof(int);

    for(int i = 0; i<size; i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }

    for(int i = 0; i<size; i++){
        cout << arr[i] <<" ";
    }


    return 0;
}