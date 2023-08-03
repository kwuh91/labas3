#include <iostream>
#include <cstring>
#include <random>
#include <cstdio>
/*
struct Node{
    char *name = new char[100];
    int date;
    char *author = new char[100];
    int size;
    struct Node *next;
};

void append(struct Node **head, char *name, int date, char *author, int size){
    struct Node *new_node = new Node;
    new_node->next = nullptr;
    strcpy(new_node->name, name);
    new_node->date = date;
    strcpy(new_node->author, author);
    new_node->size = size;
    if (*head == nullptr){
        *head = new_node;
        return;
    }
    struct Node *temp = *head;
    while (temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = new_node;
}

void display(struct Node *head){
    int count = 1;
    while (head != nullptr){
        std::cout << count << " product:\n";
        std::cout << "   name: " << head->name << std::endl;
        std::cout << "   date: " << head->date << std::endl;
        std::cout << "   developer: " << head->author << std::endl;
        std::cout << "   required space: " << head->size << std::endl;
        ++count;
        head = head->next;
        std::cout << std::endl;
    }
}

int main(){
    struct Node *head = nullptr;
    FILE *f;
    f = fopen("file1.bin","w+");
    int choice;
    std::cout << "Would you like to create a file by hand or randomly?\nPress:\n 1 - by hand\n 2 - randomly\n";
    std::cin >> choice;
    switch (choice){
        case 1:{
            bool flag = true;
            while (flag){
                char *name = new char[100];
                int date;
                char *author = new char[100];
                int size;
                std::cout << "Enter the name of your product:\n";
                std::cin >> name;
                std::cout << std::endl;
                std::cout << "When was it created?:\n";
                std::cin >> date;
                std::cout << std::endl;
                std::cout << "Who developed it?:\n";
                std::cin >> author;
                std::cout << std::endl;
                std::cout << "What is the required space?:\n";
                std::cin >> size;
                std::cout << std::endl;
                append(&head,name,date,author,size);
                std::cout << "Would you like to add another product? (Y/N):\n";
                char *choice2 = new char;
                std::cin >> choice2;
                switch(*choice2){
                    case 'Y': {
                        flag = true;
                        break;
                    }
                    case 'N': {
                        flag = false;
                        break;
                    }
                    default: {
                        std::cout << "Invalid option\n";
                        std::cout << "Please enter Y or N\n";
                    }
                }
            }


            break;
        }
        case 2:{

            break;
        }
        default:
            std::cout << "Invalid option" << std::endl;
    }
    int choice3;
    std::cout << "Choose option:\n 1 - display everything\n 2 - define which products require less than 64K of space, developed in a certain period of time\n 3 - define which products were developed by a certain developer\n 4 - see all of the info about a certain product\n 5 - exit\n";
    while (true){
        std::cin >> choice3;
        switch (choice3){
            case 1:{

                break;
            }
            case 2:{

                break;
            }
            case 3:{

                break;
            }
            case 4:{

                break;
            }
            case 5:{
                exit(0);
            }
            default:{
                std::cout << "Invalid option\n";
                break;
            }
        }
    }

    //append(&head, "exp1",1989,"someone1",500);
    //append(&head, "exp2",2000,"someone2",700);
    //append(&head, "exp4",2121,"someone4",1000);

    return 0;
}
*/