#include <iostream>
#include <cstdlib>
#include <ctime>
/*
int n;

void creation(int **a) {
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < n; ++j) {
            *(*(a + i) + j) = rand() % 90 + 10;
        }
    }
}

void display(int **a) {
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < n; ++j) {
            std::cout << *(*(a + i) + j) << ' ';
        }
        std::cout << std::endl;
    }
}

int main() {
    srand(time(nullptr));
    std::cout << "Enter n, the size of a matrix(n*n):\n";
    std::cin >> n;
    if (n < 0) {
        std::cout << "n < 0\n";
        return 0;
    }
    //initializing
    int **a = new int *[n];
    for (int i = 0; i < n; ++i) {
        *(a + i) = new int[n];
    }
    std::cout << "Initial matrix:\n";
    creation(a);
    display(a);
    std::cout << "Output, based on task:\n";
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 1; j < n; j += 2) {
            std::cout << *(*(a + i) + j) << ' ';
        }
        std::cout << "   ";
        for (size_t k = 0; k < n; k += 2) {
            std::cout << *(*(a + i) + k) << ' ';
        }
        std::cout << std::endl;
    }
    //deleting
    for (int i = 0; i < n; ++i) {
        delete[] *(a + i);
    }
    delete[] a;

    return 0;
}
*/
