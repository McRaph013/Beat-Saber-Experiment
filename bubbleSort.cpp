#include <iostream>

void sortArray(float unsortedNumbers[], int size){

    float temp;

    for(int i = 0; i < size - 1; i++){

        for(int j = 0; j < size - 1; j++){

            if(unsortedNumbers[j] > unsortedNumbers[j + 1]){

                temp = unsortedNumbers[j];
                unsortedNumbers[j] = unsortedNumbers[j + 1];
                unsortedNumbers[j + 1] = temp;
            }
        }
    }
}

int main(){

    float numbers[] = {-4.2, -0.9, -2.1, -0.9, -3.3, 0.8, -1.1, -1.8, -1.2, -2.3, -1.7, -0.5, -1.9, -2.8, -2.6, -1.7, -0.2, -1.7, -2.4, -1.5, -1.7};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    sortArray(numbers, size);

    for(float num : numbers){

        std::cout << num << " ";
    }

    return 0;
}