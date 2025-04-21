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

// Bai 1.3

#include <stdio.h>

int main() {
    int x_dtn, y_dtn, z_dtn;
    int *ptr;
    printf("Here are the values of x, y, and z: \n");
    scanf("%d%d%d", &x_dtn, &y_dtn, &z_dtn);
    printf("%d %d %d\n", x_dtn, y_dtn, z_dtn);
    printf("Once again, here are the values of x, y, and z:\n");
    ptr = &x_dtn;
    *ptr += 100;
    ptr = &y_dtn;
    *ptr += 100;
    ptr = &z_dtn;
    *ptr += 100;
    printf("%d %d %d", x_dtn, y_dtn, z_dtn);

    // Dao Trong Nguyen 20235390

    return 0;

}