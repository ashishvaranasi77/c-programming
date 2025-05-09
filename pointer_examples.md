# C Pointer Concepts – Combined Code and Explanation

```c
#include <stdio.h>

// 1. Basic Pointer Usage
void fun1(int *ptr)
{
    printf("Before modification: %d\n", *ptr);
    *ptr = *ptr + 5;
}

// 2. Passing Arrays to Functions
void fun2(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: %d\n", i, arr[i]);
    }
}

// 6. Swapping String Pointers
void swap(const char **ptr1, const char **ptr2)
{
    const char *temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

// 10. Struct and Pointer Example
#include <string.h>
typedef struct student {
    int id;
    char name[100];
} student;

void changeName(student *ptr)
{
    strcpy(ptr->name, "NA");
}

// 7, 8, 9. Dynamic Allocation with malloc/calloc and free
#include <stdlib.h>
int* getArray_malloc(int n) {
    int *ptr = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }
    return ptr;
}

int* getArray_calloc(int n) {
    int *ptr = calloc(n, sizeof(int)); // Correct usage: each element of size int
    return ptr;
}

int main()
{
    // --- Basic Pointer Usage ---
    int x = 5;
    fun1(&x);
    printf("After modification: %d\n\n", x);

    // --- Array Passed to Function ---
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Array Elements:\n");
    fun2(arr, n);
    printf("\n");

    // --- Pointer Arithmetic ---
    int *ptr1 = arr;
    int *ptr2 = ptr1 + 2;
    printf("Pointer Arithmetic:\n");
    printf("ptr1 points to: %d at %p\n", *ptr1, (void*)ptr1);
    printf("ptr2 points to: %d at %p\n", *ptr2, (void*)ptr2);
    printf("Distance between ptr2 and ptr1: %zd\n\n", ptr2 - ptr1);

    // --- Void Pointer Example ---
    int y = 10;
    void *vptr = &y;
    printf("Void Pointer Value: %d\n\n", *(int*)vptr);

    // --- Pointer to Array ---
    int arr2[] = {10, 20, 30};
    int *p1 = arr2;
    int (*p2)[3] = &arr2;
    printf("Pointer to Array:\n");
    printf("First element using p1: %d\n", *p1);
    printf("First element using p2: %d\n\n", **p2);

    // --- Swapping String Pointers ---
    const char *s1 = "ashish";
    const char *s2 = "super";
    swap(&s1, &s2);
    printf("After Swapping Strings:\n%s %s\n\n", s1, s2);

    // --- Dynamic Memory Allocation with malloc ---
    int *mallocArr = getArray_malloc(5);
    printf("Array from malloc:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", mallocArr[i]);
    }
    printf("\n\n");

    // --- Dynamic Memory Allocation with calloc ---
    int *callocArr = getArray_calloc(5);
    printf("Array from calloc (initialized to 0):\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", callocArr[i]);
    }
    printf("\n\n");

    // --- Freeing Memory ---
    free(mallocArr);
    free(callocArr);

    // --- Struct and Pointer Example ---
    student s = {101, "abc"};
    changeName(&s);
    printf("Student Info After Name Change:\n");
    printf("ID: %d, Name: %s\n", s.id, s.name);

    return 0;
}
