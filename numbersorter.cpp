#include <iostream>

void AutoNumSorter(int array[], int size);
int main()
{
    int num[] = {4,1,6,3,8,9,2,5,7,10};
    int size = sizeof(num)/sizeof(num[0]);
    
    AutoNumSorter(num,size);

    return 0;
    
}

void AutoNumSorter(int array[], int size){

    int temp;
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
