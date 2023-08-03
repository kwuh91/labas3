#include <iostream>
/*
int n;

void creation(int *a) {
    int value;
    std::cout << "Enter values:\n";
    for (size_t i = 0; i < n; ++i) {
        std::cin >> value;
        *(a + i) = value;
    }
}

void display(int *a) {
    for (int *it = a; it != a + n; ++it) {
        std::cout << *it << ' ';
    }
    std::cout << std::endl;
}

void task(int *a, int *sum) {
    for (int *it = a; it != a + n; ++it) {
        if (*it < 0) {
            *sum += *it;
            std::cout << "Address of a negative element: " << it << " (" << *it << ")" << std::endl;
        }
    }
    *(a + n - 1) = *sum;
}

int main() {
    std::cout << "Enter the size of an array:\n";
    std::cin >> n;
    if (n < 0) {
        std::cout << "n < 0\n";
        return 0;
    }
    int *sum = new int(0);
    int *a = new int[n];
    creation(a);
    std::cout << "Entered array:\n";
    display(a);
    task(a, sum);
    std::cout << "sum of negative elements = " << *sum << std::endl;
    std::cout << "Final array:\n";
    display(a);
    delete sum;
    delete[] a;
    return 0;
}
*/