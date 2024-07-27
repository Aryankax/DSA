#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int arr[] = {54, 12, 43, 10, 8, 3, 75, 92, 69};

    int size = sizeof(arr) / sizeof(int);

    for(int i = 0; i<size; i++){
        for(int j = 0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i = 0; i<size; i++){
        cout<< arr[i] <<" ";
    }

    return 0;
}

//in bubble sort always the largest element gets sorted in each iteration
//time complexity is O(n^2)