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

// Bai 1.4

#include <stdio.h>

void solution(int *arr, int size) {
    for(int i = 0; i < size; ++i) {
        for(int j = i; j < size; ++j) {
            for(int k = i; k <= j; ++k) {
                printf("%d ", arr[k]);
            }
            printf("\n");
        }
    }
}

int main() {
    int size_dtn;
    printf("Enter size = ");
    scanf("%d", &size_dtn);
    int arr_dtn[size_dtn];
    printf("Enter element of array: ");
    for(int i = 0; i < size_dtn; ++i) scanf("%d", &arr_dtn[i]);
    solution(arr_dtn, size_dtn);
    // Dao Trong Nguyen _ 20235390
    return 0;
}