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
    double real_a_dtn, real_b_dtn, img_a_dtn, img_b_dtn;
    std::cin >> real_a_dtn >> img_a_dtn;
    std::cin >> real_b_dtn >> img_b_dtn;
    
    Complex a_dtn{real_a_dtn, img_a_dtn};
    Complex b_dtn{real_b_dtn, img_b_dtn};
    
    std::cout << a_dtn << " + " << b_dtn << " = " << a_dtn + b_dtn << std::endl;
    std::cout << a_dtn << " - " << b_dtn << " = " << a_dtn - b_dtn << std::endl;
    std::cout << a_dtn << " * " << b_dtn << " = " << a_dtn * b_dtn << std::endl;
    std::cout << a_dtn << " / " << b_dtn << " = " << a_dtn / b_dtn << std::endl;
    
    return 0;
}