#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    int arr[] = {85, 92, 32, 6, 10, 15, 12, 35};

    int size = sizeof(arr) / sizeof(int);

    for(int i = 0; i<size; i++){
        int min = INT_MAX;
        int minIndex = i;
        for(int j = i; j<size; j++){
            if(arr[j] < min){
                min = arr[j];
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }

    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
