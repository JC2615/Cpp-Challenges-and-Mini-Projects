#include <iostream>
using namespace std;

void swap(int a[], int index1, int index2){
    int temp = a[index1];
    a[index1] = a[index2];
    a[index2] = temp;
}


int main(){
    int nums[5] = {1, 9, 4, 7, 6};

    for(int i = 0; i < 5; i++){
        int high = i;
        for(int j = high + 1; j < 5; j++){
            if(nums[high] < nums[j]){
                high = j;
            }
        }
        swap(nums, i, high);
    }

    for(int i = 0; i < 5; i++){
        cout << nums[i];
    }
    
}