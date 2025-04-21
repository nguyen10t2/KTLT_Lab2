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

// Bai 1.1 

#include <stdio.h>

int main() {
    int x_dtn, y_dtn, z_dtn;
    int *ptr;
    printf("Enter three integers: \n");
    scanf("%d%d%d", &x_dtn, &y_dtn, &z_dtn);
    printf("The three integers are: \n");
    ptr = &x_dtn;
    printf("x = %d\n", *ptr);
    ptr = &y_dtn;
    printf("y = %d\n", *ptr);
    ptr = &z_dtn;
    printf("z = %d", *ptr);

    // Dao Trong Nguyen _ 20235390

    return 0;
}