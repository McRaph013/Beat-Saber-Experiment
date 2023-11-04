#include <iostream>

template <size_t N>
float average(float (&nums)[N]){

    int divisor = sizeof(nums) / sizeof(nums[0]);
    float sum = 0;

    for(float num : nums){

        sum += num;
    }

    return sum / divisor;
}

int main(){

    float numsStd[] = {82.9, 89.5, 89.6, 89.6, 90, 90.1, 91.3, 91.3, 91.6, 91.6, 91.7, 91.7, 91.8, 92, 92.1, 92.2, 92.2, 92.3, 92.4, 92.4, 93};
    float numsClw[] = {84.7, 90.7, 90.8, 91.6, 92.1, 92.5, 92.9, 93, 93.1, 93.3, 93.3, 93.4, 93.5, 93.8, 93.8, 94.1, 94.1, 94.1, 94.3, 94.3, 94.4};
    float diffs[] = {-4.2, -0.9, -2.1, -0.9, -3.3, 0.8, -1.1, -1.8, -1.2, -2.3, -1.7, -0.5, -1.9, -2.8, -2.6, -1.7, -0.2, -1.7, -2.4, -1.5, -1.7};

    std::cout << "The average percentage with Standard grip is " << average(numsStd) << "%\n";
    std::cout << "The average percentage with Standard grip is " << average(numsClw) << "%\n";
    std::cout << "The average difference in percentage is " << average(diffs) << "%\n";

    return 0;
}