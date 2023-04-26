#include <iostream>
using namespace std;

const int MAX = 1000000;

int number[] = {2, 3, 4, 5, 6, 7, 9};
bool isPrime[MAX + 1];

int prime(int* numbers, int n) {
    int primeNumber = 0;
    fill_n(isPrime, n, true);

    for (int i = 0; i < n; i++) {
        if (isPrime[numbers[i]]) {
            int number = numbers[i];
            if (number > 1) {
                primeNumber++;
            }
            for (int j = number * 2; j <= MAX; j += number) {
                isPrime[j] = false;
            }
        }
    }
    return primeNumber;
}

int main() {
    int n = sizeof(number) / sizeof(int);
    int primeNumber = prime(number, n);
    cout << "The number of prime number: " << primeNumber << endl;

    for (int i = 2; i <= MAX; i++) {
        if (isPrime[i]) {
            cout << i<<" " ;
        }
    }
    return 0;
}
