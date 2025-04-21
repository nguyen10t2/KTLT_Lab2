//
//                       _oo0oo_
//                      o8888888o
//                      88" . "88
//                      (| -_- |)
//                      0\  =  /0
//                    ___/`---'\___
//                  .' \\|     |// '.
//                 / \\|||  :  |||// \|
//                / _||||| -:- |||||- \|
//               |   | \\\  -  /// |   |
//               | \_|  ''\---/''  |_/ |
//               \  .-\__  '-'  ___/-. /
//             ___'. .'  /--.--\  `. .'___
//          ."" '<  `.___\_<|>_/___.' >' "".
//         | | :  `- \`.;`\ _ /`;.`/ - ` : | |
//         \  \ `_.   \_ __\ /__ _/   .-` /  /
//     =====`-.____`.___ \_____/___.-`___.-'=====
//                       `=---='
//
//
//     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Dao Trong Nguyen _ 20235390 _ IT2-03 _ IT3040 _ 750829_ 2024.2

// Bai 1.6

#include <stdio.h>

void reversearray(int* arr, int size) {
    int l = 0, r = size - 1;
    while(l < r) {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++; r--;
    }
}

void ptr_reversearray(int* arr, int size) {
    int *l = arr, *r = arr + size - 1;
    while(l < r) {
        int temp = *l;
        *l = *r;
        *r = temp;
        l++; r--;
    }
}

void printArray(int* arr, int size) {
    for(int i = 0; i < size; ++i) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr_dtn[] = {9, 3 ,5 ,6 ,2 ,5};
    reversearray(arr_dtn, sizeof(arr_dtn) / sizeof(arr_dtn[0]));
    printArray(arr_dtn, sizeof(arr_dtn) / sizeof(arr_dtn[0]));
    // Dao Trong Nguyen _ 20235390

    return 0;
}