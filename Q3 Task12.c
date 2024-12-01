#include<stdio.h>
#include<stdlib.h>

void add(float** i, int* x, int* y) {
    if (*x == *y) {
        *y *= 2;
        *i = realloc(*i, *y * sizeof(float));
        if (*i == NULL) {
            printf("\nMemory Allocation Failed\n");
            exit(0);
        }
    }
    printf("\nEnter Number: ");
    scanf("%f", &(*i)[*x]);
    (*x)++;
}

void display(float* i, int x) {
    for (int j = 0; j < x; j++) {
        printf("\nElement %d: %.2f", j + 1, i[j]);
    }
}

void removeLast(float** i, int* x, int* y) {
    if (*x > 0) {
        (*x)--;
        if (*x < *y / 2 && *y > 4) {
            *y /= 2;
            *i = realloc(*i, *y * sizeof(float));
            if (*i == NULL) {
                printf("\nMemory Allocation Failed\n");
                exit(0);
            }
        }
    } else {
        printf("\nArray is already empty\n");
    }
}

void freeMemory(float* i) {
    free(i);
}

int main() {
    float* arr;
    int n = 4;
    arr = (float*)malloc(n * sizeof(float));
    if (arr == NULL) {
        printf("\nMemory Allocation Failed\n");
        return 0;
    }
    int b = 0, choice = 0;

    do {
        printf("\n\nMenu:");
        printf("\n1. Add number");
        printf("\n2. Display numbers");
        printf("\n3. Remove last number");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add(&arr, &b, &n);
                break;
            case 2:
                display(arr, b);
                break;
            case 3:
                removeLast(&arr, &b, &n);
                break;
            case 4:
                freeMemory(arr);
                printf("\nExiting program. Memory freed.\n");
                break;
            default:
                printf("\nInvalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}

