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

#include <iostream>

template <typename T> T arr_sum(T* a, int n, T* b, int m) {
    T sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += a[i];
    }
    for (int j = 0; j < m; ++j) {
        sum += b[j];
    }
    return sum;
}


int main() {
    int val_dtn;
    std::cin >> val_dtn;

    {
        int a_dtn[] = {3, 2, 0, val_dtn};
        int b_dtn[] = {5, 6, 1, 2, 7};
        std::cout << arr_sum(a_dtn, 4, b_dtn, 5) << std::endl;
    }

    {
        double a_dtn[] = {3.0, 2, 0, val_dtn * 1.0};
        double b_dtn[] = {5, 6.1, 1, 2.3, 7};
        std::cout << arr_sum(a_dtn, 4, b_dtn, 5) << std::endl;
    }

    return 0;
}