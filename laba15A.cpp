#include <cstdio>
#include <cstring>
#include <iostream>
#include <random>

/*
int main() {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<double> dist(0, 100);
    FILE *f;
    int amount_of_strings = ((int) floor(dist(mt))) % 40 + 5;
    //std::cout << "amount_of_strings: " << amount_of_strings << std::endl;
    f = fopen("file1.txt", "w+");
    char *str = new char[100];
    //char str[100];
    //char str[100];
    //int l_count = 1;
    char alph[26]{'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'z',
                  'x', 'c', 'v', 'b', 'n', 'm'};
    for (size_t j = 0; j < amount_of_strings; ++j) {
        size_t len = ((int) floor(dist(mt)));
        int letter_index = ((int) floor(dist(mt))) % 26;
        char letter = alph[letter_index];
        //std::cout << "letter_index: " << letter_index << std::endl;
        //std::cout << l_count << ") LETTER: " << letter << std::endl;
        //++l_count;
        for (size_t i = 0; i < len; ++i) {
            //std::cout << " letter: " << letter;
            //strncat(str,&letter,1);
            *(str + i) = letter;
            //std::cout << str << std::endl;
        }
        //std::cout << "STR: " << str << std::endl;
        if (*(str + strlen(str) - 1) == *(str)) {
            //std::cout << "ERROR" << std::endl;
            fputs(str, f);
            fputs("\n", f);
        }
        memset(str, 0, strlen(str));
    }
    rewind(f);
    int count = 1;
    printf("Initial file:\n");
    while (fgets(str, 100, f) != nullptr) {
        std::cout << count << ") " << str;
        ++count;
    }

    std::cout << std::endl;
    count = 1;
    rewind(f);
    FILE *f0;
    f0 = fopen("file2.txt", "w+");
    while (fgets(str, 100, f) != nullptr) {
        char *temp_str = new char[100]{""};
        char *count_str = new char[(int) ((ceil(log10(count)) + 1) * sizeof(char))];
        char *len_str = new char[(int) ((ceil(log10((double) strlen(str) - 1)) + 1) * sizeof(char))];
        //itoa(count, count_str, 10);
        //itoa((int) strlen(str) - 1, len_str, 10);

        sprintf(count_str, "%d", count);
        sprintf(len_str, "%llu", (strlen(str) - 1));
        strcat(temp_str, count_str);
        strcat(temp_str, ") ");
        strncat(temp_str, &*(str), 1);
        strcat(temp_str, len_str);

        fputs(temp_str, f0);
        fputs("\n", f0);
        //std::cout << count << ") " << str[0] << strlen(str)-1 << std::endl;
        ++count;
        memset(temp_str, 0, strlen(temp_str));
        memset(count_str, 0, strlen(count_str));
        memset(len_str, 0, strlen(len_str));
    }

    rewind(f0);

    //int count = 1;
    printf("End file:\n");
    while (fgets(str, 100, f0) != nullptr) {
        std::cout << str;
        //++count;
    }
    fclose(f);
    fclose(f0);
    remove("file1.txt");
    remove("file2.txt");
    return 0;
}
*/
