#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int a[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    sort(a, a + 10);
    for (int i = 0; i < 10; i++) {
        cout << a[i] << ' ';
    }
}