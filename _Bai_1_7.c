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

// Bai 1.7

#include <stdio.h>

void insertionSort(int *arr, int size) {
    if(size == 0 || size == 1) return;
    for(int *l = arr + 1; l < arr + size; ++l) {
        int key = *l;           // Luu lai gia tri can chen ve vi tri dung
        int *j = l - 1;         // Bien con tro tro toi vi tri ngay truoc key
        while(j >= arr && key < *j) {
            *(j + 1) = *j;      // Neu con thoa man rang buoc tiep tuc dich phai va tim vi tri dung
            --j;
        }
        *(j + 1) = key;         // Da tim thay vi tri dung va chen vao
    }
}

void printArray(int* arr, int size) {
    for(int i = 0; i < size; ++i) printf("%d ", arr[i]);
    printf("\n");
}

int main() {

    int size_dtn;
    printf("Enter the number of elements: ");
    scanf("%d", &size_dtn);
    int arr_dtn[size_dtn];
    printf("The input array is:\n");
    for(int i = 0; i < size_dtn; ++i) scanf("%d", &arr_dtn[i]);
    printArray(arr_dtn, size_dtn);
    insertionSort(arr_dtn, size_dtn);
    printf("The sorted array is:\n");
    printArray(arr_dtn, size_dtn);

    // Dao Trong Nguyen _ 20235390

    return 0;
}