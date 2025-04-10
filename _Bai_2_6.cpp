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

void print(int n) {
    std::cout << n << std::endl;
}

int mul_3_plus_1(int n) {
    return 3 * n + 1;
}
int div_2(int n) {
    return n / 2;
}

void simulate(int n, int (*odd)(int), int (*even)(int), void (*output)(int)) {
    (*output)(n);
    if(n == 1) return;
    if(n % 2 == 0) {
        n = (*even)(n);
    }
    else {
        n = (*odd)(n);
    }
    simulate(n, odd, even, output);
}

int main() {
    int (*odd_dtn)(int) = &mul_3_plus_1;
    int (*even_dtn)(int) = &div_2;
    void (*output_dtn)(int) = &print;

    int n_dtn;
    std::cin >> n_dtn;
    simulate(n_dtn, odd_dtn, even_dtn, output_dtn);
    return 0;
}