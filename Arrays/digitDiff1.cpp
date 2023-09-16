#include <iostream>
#include <vector>

// Function to find all numbers up to 'n' with adjacent digits having a difference of 1
void findNumbersWithDifference(int n) {
    std::vector<int> result;

    // Start from 1 as the first number
    for (int i = 1; i <= n; i++) {
        int num = i;
        bool isValid = true;

        // Check the difference between adjacent digits
        while (num > 9) {
            int lastDigit = num % 10;
            num /= 10;
            int nextDigit = num % 10;

            if (abs(lastDigit - nextDigit) != 1) {
                isValid = false;
                break;
            }
        }

        // If the number meets the criteria, add it to the result
        if (isValid) {
            result.push_back(i);
        }
    }

    // Print the numbers
    std::cout << "Numbers with adjacent digits having a difference of 1 up to " << n << " are: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    findNumbersWithDifference(n);

    return 0;
}
