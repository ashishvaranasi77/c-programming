#include <stdio.h>

// Define a simple structure with recursion
struct Person {
    char name[20];
    int age;
};

void printPersons(struct Person people[], int index, int total) {
    if (index >= total)
        return;

    printf("Name: %s, Age: %d\n", people[index].name, people[index].age);
    printPersons(people, index + 1, total); 
}

int main() {
    struct Person people[3] = {
        {"Alice", 25},
        {"Bob", 30},
        {"Charlie", 22}
    };

    printf("Person Details:\n");
    printPersons(people, 0, 3); 

    return 0;
}
