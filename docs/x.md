

# C Programming Concepts: Pointers, Structures, Memory Allocation, Functions, Arrays, and Strings

## 🔹 Pointers
Pointers are variables that store memory addresses, allowing efficient memory management and dynamic data manipulation.

### **Declaration and Usage**
```c
int a = 10;
int *p = &a; // Pointer stores address of 'a'
printf("Value at address %p: %d", p, *p); // Output: 10


- & (Address-of) gives the memory location of a variable.
- * (Dereference) accesses the value stored at the address.
Pointer Arithmetic
int arr[3] = {10, 20, 30};
int *p = arr;
printf("%d", *(p + 1)); // Output: 20


Pointers allow direct memory manipulation without using indexes.

🔹 Structures
Structures (struct) allow grouping related variables under one type.
Declaration and Usage
struct Student {
    char name[50];
    int age;
};


Initializing and Accessing
struct Student s1 = {"Alice", 20};
printf("Name: %s, Age: %d", s1.name, s1.age);


Using Pointers with Structures
struct Student s2 = {"Bob", 22};
struct Student *ptr = &s2;
printf("Accessing via pointer: %s", ptr->name);


The -> operator is used to access structure members via pointers.

🔹 Dynamic Memory Allocation
Dynamic memory allocation allows memory to be allocated at runtime using functions like malloc(), calloc(), realloc(), and free().
Memory Allocation with malloc
int *ptr = (int*) malloc(5 * sizeof(int));
if (ptr == NULL) {
    printf("Memory allocation failed.");
}
free(ptr); // Free allocated memory


Using calloc()
int *arr = (int*) calloc(5, sizeof(int)); // Initializes memory to zero
free(arr);


Reallocating Memory with realloc()
int *numbers = (int*) malloc(2 * sizeof(int));
numbers = (int*) realloc(numbers, 5 * sizeof(int)); // Expands memory
free(numbers);



🔹 Functions
Functions help organize code into reusable blocks.
Defining and Calling Functions
int add(int a, int b) {
    return a + b;
}
int main() {
    int result = add(5, 3);
    printf("Sum: %d", result); // Output: 8
}


Function with Pointers
void updateValue(int *x) {
    *x = 100;
}
int main() {
    int num = 5;
    updateValue(&num);
    printf("%d", num); // Output: 100
}



🔹 Arrays
Arrays store multiple values of the same type in contiguous memory.
Declaration and Accessing Elements
int arr[5] = {1, 2, 3, 4, 5};
printf("%d", arr[2]); // Output: 3


Looping Through an Array
for(int i = 0; i < 5; i++) {
    printf("%d ", arr[i]); 
}


Pointer to an Array
int arr[] = {10, 20, 30};
int *p = arr;
printf("%d", *(p + 1)); // Output: 20



🔹 Strings
Strings in C are character arrays that end with a null character (\0).
String Declaration
char str[] = "Hello";
printf("%s", str); // Output: Hello


String Functions in C
char s1[20] = "Hello";
char s2[] = " World!";
strcat(s1, s2); // Concatenation
printf("%s", s1); // Output: "Hello World!"


Using strcmp()
if(strcmp("abc", "xyz") == 0) {
    printf("Strings are equal.");
} else {
    printf("Strings are different.");
}



🔹 Summary
- Pointers allow direct memory access.
- Structures group related data together.
- Dynamic memory allocation allows flexible memory management.
- Functions provide modular programming.
- Arrays store multiple elements efficiently.
- Strings are character arrays used for text operations.
🚀 Now you're set to code effectively!
---

This markdown file has **everything you need** in one copy-paste. Let me know if you want to add anything! 🚀🔥


