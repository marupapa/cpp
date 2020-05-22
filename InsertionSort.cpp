#include<stdio.h>

/*
insertion sort
時間複雑度 O(n2)

적절한 위치에 삽입.

선택정렬, 버블정렬과 비교하여 가장 효율적인 알고리즘.
*/

int main(void) {
    int i, j, temp;
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    for (i = 0; i < 9; i++) {
        j = i;
        while (array[j] > array[j+1]) {
            printf(" %d <> %d ", array[j], array[j+1]);
            temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
            j--;
            printf(" %d <> %d ", array[j], array[j+1]);
        }

            printf(" >>>>>>>>>>>> \n");
    }

    for (i = 0; i < 10; i++) {
        printf(" %d ", array[i]);
    }
    return 0;
}