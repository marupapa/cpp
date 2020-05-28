#include<stdio.h>

int number, data[1000000];
/*
Quick Sort

O(N * logN)
*/

// int number = 10;
// int data[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};


void quickSort(int *data, int start, int end){
    if (start >= end) { //원소가 1개인 경우 그대로 두기.
        return;
    }

    int key = start; //키는 첫 번째 원소.
    int i = start + 1, j = end, temp;

    while (i <= j) {
        while (i <= end && data[i] <= data[key]) { //키 값보다 큰 값을 만날 때
            i++;
        }
        while (j > start && data[j] >= data[key]) {// 키 값보다 작은 값을 만났을 때.
            j--;
        }

        if (i > j) {
            temp = data[j];
            data[j] = data[key];
            data[key] = temp;
        } else {
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }

    quickSort(data, start, j - 1);
    quickSort(data, j + 1, end);
}

int main(void) {

    scanf("%d", &number);
    for(int i=0; i<number; i++) {
        scanf("%d", &data[i]);
    }
    quickSort(data, 0, number - 1);
    
    for (int i = 0; i < 10; i++) {
        printf("%d\n", data[i]);
    }

    return 0;
}