#include <iostream>
#include <vector>

void findMinMax(const std::vector<int>& arr, int& min, int& max) {
    min = arr[0];
    max = arr[0];
    for (int num : arr) {
        if (num < min) min = num;
        if (num > max) max = num;
    }
}

int main() {
    std::vector<int> arr = {5, 1, 9, 4, 7};

    int min, max;

    findMinMax(arr, min, max);

    std::cout << "Smallest: " << min << ", Largest: " << max << std::endl;
    
    return 0;
}
