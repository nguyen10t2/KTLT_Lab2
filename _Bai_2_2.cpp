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

void rotate(int& a, int& b, int& c) {
    int temp = a;
    a = b;
    b = c;
    c = temp;
}

int main() {
    int a_dtn, b_dtn, c_dtn;
    std::cin >> a_dtn >> b_dtn >> c_dtn;
    std::cout << "Before rotation: " << a_dtn << " " << b_dtn << " " << c_dtn << std::endl;
    rotate(a_dtn, b_dtn, c_dtn);
    std::cout << "After rotation: " << a_dtn << " " << b_dtn << " " << c_dtn << std::endl;
    return 0;
}