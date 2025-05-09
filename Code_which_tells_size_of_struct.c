//Code which tells size of struct:

#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[60];
    float salary;
    char department[30];
};

int main() {
    struct Employee e;
    e.id = 2024118867;
    strcpy(e.name, "Ramesh");
    e.salary = 30000.0;
    strcpy(e.department, "mining");

    printf("%d %s %.2f %s\n", e.id, e.name, e.salary, e.department);
    printf("%zu\n",sizeof(struct Employee));
    return 0;
}
Output:
2024118867 Ramesh 30000.00 mining
100
