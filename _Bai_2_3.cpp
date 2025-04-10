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

__int64 get_value(int x, int a = 2, int b = 1, int c = 0) {
    return a * x * x + b * x + c;
}

int main() {
    int x_dtn;
    std::cin >> x_dtn;

    int a_dtn = 2, b_dtn = 1, c_dtn = 0;
    std::cin >> a_dtn >> b_dtn >> c_dtn;

    std::cout << "a = 2, b = 1, c = 0: " << get_value(x_dtn) << std::endl;
    std::cout << "a = " << a_dtn << ", b = 1, c = 0: " << get_value(x_dtn, a_dtn) << std::endl;
    std::cout << "a = " << a_dtn << ", b = " << b_dtn << ", c = 0: " << get_value(x_dtn, a_dtn, b_dtn) << std::endl;
    std::cout << "a = " << a_dtn << ", b = " << b_dtn << ", c = " << c_dtn << ": " << get_value(x_dtn, a_dtn, b_dtn, c_dtn) << std::endl;

    return 0;
}