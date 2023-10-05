#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;
    
    std::vector<int> numbers(n);
    std::cout << "Enter " << n << " numbers: ";
    for (int& num : numbers) {
        std::cin >> num;
    }
    
    // Print the inputted values
    std::cout << "Inputted numbers: ";
    for (const int& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
