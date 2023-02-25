#include <iostream>
using namespace std;

// We use &a and &b so as to PASS BY REF, which thefo swaps the values in array.
void swapNum(int &a, int &b){

    int temp = a;
    a = b;
    b = temp;
}

// We initialize the first element as min
// Then we check for the actual minimum element in the array and then swap them and increment min
// which here is done by i.

void SelecSort(int arr[], int size){

    for(int i = 0; i < size-1; i++){

        int min = i;
        for(int j = i+1; j < size; j++){

            if(arr[j] < arr[min]){

                min = j;
            }
        }
        swapNum(arr[i], arr[min]);
    }
}

int main(){

    int size;

    cout << "Enter the number of Elements in the array : " << endl;
    cin >> size;

    int arr[size];

    for(int i =0; i < size; i++){

        cout << "Enter arr[" << i <<  "] : ";
        cin >> arr[i];
    }

    SelecSort(arr, size);

    cout << "Sorted Array using INSERTION SORT" << endl;

    for(int i =0; i < size; i++){

        cout << arr[i] << " ";
    }

    return 69;
}