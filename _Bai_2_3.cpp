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
    int x_90;
    std::cin >> x_90;

    int a_90 = 2, b_90 = 1, c_90 = 0;
    std::cin >> a_90 >> b_90 >> c_90;

    std::cout << "a = 2, b = 1, c = 0: " << get_value(x_90) << std::endl;
    std::cout << "a = " << a_90 << ", b = 1, c = 0: " << get_value(x_90, a_90) << std::endl;
    std::cout << "a = " << a_90 << ", b = " << b_90 << ", c = 0: " << get_value(x_90, a_90, b_90) << std::endl;
    std::cout << "a = " << a_90 << ", b = " << b_90 << ", c = " << c_90 << ": " << get_value(x_90, a_90, b_90, c_90) << std::endl;

    return 0;
}