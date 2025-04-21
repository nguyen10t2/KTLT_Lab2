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
// Dao Trong Nguyen _ 20235390 _ IT2-03 _ IT3040 _ 750829 _ 2024.2

// Bai 1.4

#include <stdio.h>
#include <stdlib.h>

int **allocate_memory(int row_dtn, int col_dtn) {
    int **mtr = (int**)malloc(row_dtn * sizeof(int*));
    for(int i = 0; i < row_dtn; ++i)
        mtr[i] = (int*)malloc(col_dtn * sizeof(int));
    return mtr;
}

void allocate_mem(int ***mtr, int row_dtn, int col_dtn) {
    *mtr = (int**)malloc(row_dtn * sizeof(int*));           // *mtr la 1 con tro cap 2
    for(int i = 0; i < row_dtn; ++i)
        (*mtr)[i] = (int*)malloc(col_dtn * sizeof(int));    // cap phat cho tung hang trong ma tran luu y thu tu uu tien toan tu * < []

}

int main() {
    int **mtr;                                              // Khai bao 1 con tro cap 2 tro toi mang 2 chieu
    int row_dtn, col_dtn;
    printf("Enter m, n = ");
    scanf("%d%d", &row_dtn, &col_dtn);                  
    allocate_mem(&mtr, row_dtn, col_dtn);                   // Vi tham so cua ham la *** nen ta phai truyen vao dia chi o nho cua **
    for(int i = 0; i < row_dtn; ++i)
        for(int j = 0; j < col_dtn; ++j) {
            scanf("%d", &mtr[i][j]);
            printf("mt[%d][%d] = ", i, j);
        }

    int sum = 0;                                            // Khoi tao gia tri tinh tong ma tran

    for(int i = 0; i < row_dtn; ++i) {
        for(int j = 0; j < col_dtn; ++j) {
            printf("%d ", mtr[i][j]);
            sum += mtr[i][j] % 2 == 0 ? mtr[i][j] : 0;      // Toan tu 3 ngoi kiem tra dieu kien
        }
        printf("\n");
    }
    
    printf("The sum of all even elements is %d", sum);      // In ra tong cac phan tu chan trong ma tran
    // Dao Trong Nguyen _ 20235390

}