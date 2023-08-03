#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
/*
int m,n;

void creation(int **a){
    for (size_t i = 0; i < m; ++i){
        for (size_t j = 0; j < n; ++j){
            *(*(a+i)+j) = rand()%100;
        }
    }
}

void display(int **a){
    for (size_t i = 0; i < m; ++i){
        for (size_t j = 0; j < n; ++j){
            printf("%2d ",*(*(a+i)+j));
        }
        std::cout << std::endl;
    }
}

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int *temp_arr)
{
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (temp_arr[j] > temp_arr[j + 1]){
                swap(&temp_arr[j], &temp_arr[j + 1]);
            }
        }
    }
}

int main(){
    srand(time(nullptr));
    std::cout << "Enter the size of a matrix (m*n)\n m:\n";
    std::cin >> m;
    std::cout << "n:\n";
    std::cin >> n;
    int amount = n-m;

    //initializing
    int **a = new int*[m];
    for (int i = 0; i < m; ++i){
        *(a+i) = new int[n];
    }

    creation(a);
    display(a);

    for (int i = 0; i < m; ++i){
        int *temp_arr = new int[100];
        for (int j = 0; j < n; ++j){
            temp_arr[j] = a[i][j];
        }
        bubbleSort(temp_arr);
        for (int k = 0; k < n; ++k){
            for (int l = 0; l < amount; ++l){
                if (a[i][k] == temp_arr[l]){
                    a[i][k] = -10000;
                }
            }
        }
    }

    int **b = new int*[m];
    for (int i = 0; i < m; ++i){
        *(b+i) = new int[n];
    }

    for (size_t i = 0; i < m; ++i){
        for (size_t j = 0; j < n; ++j){
            *(*(b+i)+j) = *(*(a+i)+j);
        }
    }

    //deleting
    for (int i = 0; i < m; ++i){
        delete[] *(a+i);
    }
    delete[] a;

    //reforming
    a = new int*[m];
    for (int i = 0; i < m; ++i){
        *(a+i) = new int[m]{0};
    }

    for (int i = 0; i < m; ++i){
        int k = 0;
        for (int j = 0; j < n; ++j){
            if (b[i][j] != -10000){
                a[i][k] = b[i][j];
                //std::cout << "checking: " << b[i][j] << std::endl;
                ++k;
            }
        }
    }

    std::cout << "Reformed Matrix:\n";

    for (size_t i = 0; i < m; ++i){
        for (size_t j = 0; j < m; ++j){
            printf("%2d ",*(*(a+i)+j));
        }
        std::cout << std::endl;
    }

    //deleting
    for (int i = 0; i < m; ++i){
        delete[] *(a+i);
    }
    delete[] a;

    return 0;
}
*/
