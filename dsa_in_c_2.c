#include <stdio.h>
void inputArr(int a[]) {
    a[0] = 34;
    a[1] = 45;
    a[2] = 59;
    a[3] = 67;
    a[4] = 78;
    a[5] = 93;
    a[6] = 104;
    a[7] = 112;
    a[8] = 123;
    a[9] = 134;
}
void printArr(int a[]) {
    for (int i = 0; i < 10; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
int binarySearch(int e, int a[], int size) {
    int left = 0;
    int right = size - 1;
     while (left <= right) {
        int mid = left + (right - left) / 2;
if (a[mid] == e) {
            return mid;
        }
if (a[mid] < e) {
            left = mid + 1;
        }
          else {
            right = mid - 1;
        }
    }
 return -1;
}
int main() {
    int arr[10], ele, loc;
     inputArr(arr);
     printf("Array elements:\n");
    printArr(arr);
     printf("\nEnter No. to search: ");
    scanf("%d", &ele);
    loc = binarySearch(ele, arr, 10);
    if (loc != -1) {
        printf("\nElement found at location: %d\n", loc);
    } else {
        printf("\nElement not found.\n");
    }
     return 0;
}
