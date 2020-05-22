#include<stdio.h>

/*
재일 작은 숫자를 선택해여 순차적으로 맨 앞으로 보내는 정렬.

간복잡도 O(n2)


*/
int main(void){
    int i, j, min, index, temp;
    int array[10] = {1, 5, 4, 6, 8, 3, 2, 7, 9, 10};

    for (i = 0; i < 10; i++) {
        min = 9999;
        for (j = i; j < 10; j++) {
            if (min > array[j]) {
                min = array[j];
                index = j;
            }
        };
        //스와핑
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;

    };

    for (i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}