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

// Bai 1.5

#include <stdio.h>

double *maximum(double *arr, int size) {
    double *result = arr;
    if(size == 0 || result == NULL) return NULL;
    for(int i = 1; i < size; ++i) 
        result = arr[i] > *result ? &arr[i] : result;
    return result;
}

int main() {
    double arr_dtn[] = {1, 5, 4, 8, 10, 6, 7, 2};
    printf("%.0lf", *maximum(arr_dtn, sizeof(arr_dtn) / sizeof(arr_dtn[0])));

    // Dao Trong Nguyen _ 20235390

    return 0;
}