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
#include <iomanip>
#include <cmath>

struct Complex {
    double real;
    double imag;
};

Complex operator +(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

Complex operator -(Complex a, Complex b) {
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

Complex operator *(Complex a, Complex b) {
    Complex result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}

Complex operator /(Complex a, Complex b) {
    Complex result;
    double denominator = b.real * b.real + b.imag * b.imag;
    result.real = (a.real * b.real + a.imag * b.imag) / denominator;
    result.imag = (a.imag * b.real - a.real * b.imag) / denominator;
    return result;
}

std::ostream& operator<<(std::ostream& os, const Complex& c) {
    os << '(' << std::setprecision(2) << c.real << (c.imag >= 0 ? '+' : '-') << fabs(c.imag) << 'i' << ')';
    return os;
}

int main() {
    double real_a_90, real_b_90, img_a_90, img_b_90;
    std::cin >> real_a_90 >> img_a_90;
    std::cin >> real_b_90 >> img_b_90;
    
    Complex a_90{real_a_90, img_a_90};
    Complex b_90{real_b_90, img_b_90};
    
    std::cout << a_90 << " + " << b_90 << " = " << a_90 + b_90 << std::endl;
    std::cout << a_90 << " - " << b_90 << " = " << a_90 - b_90 << std::endl;
    std::cout << a_90 << " * " << b_90 << " = " << a_90 * b_90 << std::endl;
    std::cout << a_90 << " / " << b_90 << " = " << a_90 / b_90 << std::endl;
    
    return 0;
}