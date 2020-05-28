#include<stdio.h>

/*
buble sort
배열의 바로 옆 요소와 비교하여 가장 큰 숫자를 맨 뒤로 보내는 정렬.
가장 비효율적인 알고리즘.
*/

int main(void) {
    int i, j, temp;
    int array[10] = {10, 1, 5, 4, 6, 8, 3, 2, 7, 9};
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    for (i = 0; i < 10; i++) {
        printf("%d", array[i]);
    }


    return 0;
}