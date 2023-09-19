#include <iostream>
#include <vector>

using namespace std;
//O(n * log(log(n))).
class Solution {
public:
    int countPrimes(int n) {
        vector<bool> prime(n + 1, true);
        prime[0] = false;
        prime[1] = false;

        for (int i = 2; i * i <= n; ++i) {
            if (prime[i]) {
                for (int j = i * i; j < n; j += i) {
                    prime[j] = false;
                }
            }
        }

        // Counting
        int primeCount = 0;
        for (int i = 2; i < n; ++i) {
            if (prime[i]) {
                primeCount++;//count of prime
                cout<<i<<endl;//prime numbers bwtween 1 to n
            }
        }
        return primeCount;
    }
};
//nlog(logn)
int main() {
    Solution solution;
    int n;
    cout << "Enter an integer n: ";
    cin >> n;

    int result = solution.countPrimes(n);
    cout << "The number of prime numbers less than " << n << " is: " << result << endl;

    return 0;
}

//prime between m to n 
#include <iostream>
#include <vector>

using namespace std;
//o(sqrt(n))
bool isPrime(int num) {
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;

    if (num % 2 == 0 || num % 3 == 0)
        return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }

    return true;
}

int main() {
    int m, n;
    cout << "Enter two integers (m and n) to find prime numbers between them: ";
    cin >> m >> n;

    cout << "Prime numbers between " << m << " and " << n << " are:" << endl;

    for (int num = m; num <= n; num++) {
        if (isPrime(num))
            cout << num << " ";
    }

    cout << endl;

    return 0;
}
