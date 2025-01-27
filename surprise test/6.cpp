#include <iostream>
#include <vector>

void reverseArray(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n / 2; ++i) {
        std::swap(arr[i], arr[n - i - 1]);
    }
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    reverseArray(arr);
    std::cout << "Reversed array: ";
    for (int num : arr) std::cout << num << " ";
    std::cout << std::endl;
    return 0;
}
