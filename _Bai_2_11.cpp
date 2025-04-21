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
#include <vector>
#include <complex>
#include <cmath>

typedef std::complex<double> cd;
const double PI = acos(-1);

void fft(std::vector<cd>& a, bool invert) {
    int n = a.size();
    if (n == 1) return;

    std::vector<cd> a0(n/2), a1(n/2);
    for (int i = 0; 2*i < n; ++i) {
        a0[i] = a[i*2];
        a1[i] = a[i*2+1];
    }

    fft(a0, invert);
    fft(a1, invert);

    double ang = 2 * PI / n * (invert ? -1 : 1);
    cd w(1), wn(cos(ang), sin(ang));
    for (int i = 0; 2*i < n; ++i) {
        a[i]     = a0[i] + w * a1[i];
        a[i+n/2] = a0[i] - w * a1[i];
        if (invert) {
            a[i]     /= 2;
            a[i+n/2] /= 2;
        }
        w *= wn;
    }
}

std::vector<int> multiplyFFT(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<cd> fa(a.begin(), a.end()), fb(b.begin(), b.end());
    int n = 1;
    while (n < (int)a.size() + (int)b.size()) n <<= 1;
    fa.resize(n);
    fb.resize(n);

    fft(fa, false);
    fft(fb, false);
    for (int i = 0; i < n; ++i)
        fa[i] *= fb[i];
    fft(fa, true);

    std::vector<int> result(n);
    for (int i = 0; i < n; ++i)
        result[i] = round(fa[i].real());

    return result;
}

class Polynomial {
private:
    int degree;
    int* coeffs;

public:
    Polynomial(int d) : degree(d) {
        coeffs = new int[d + 1];
        for (int i = 0; i <= d; ++i) {
            coeffs[i] = 0.0;
        }
    }

    friend std::istream& operator>>(std::istream& is, Polynomial& p) {
        for (int i = 0; i <= p.degree; ++i) {
            is >> p.coeffs[i];
        }
        return is;
    }

    friend std::ostream& operator<<(std::ostream& os, const Polynomial& p) {
        for (int i = 0; i <= p.degree; ++i) {
            os << p.coeffs[i] << " ";
        }
        return os;
    }

    Polynomial operator+(const Polynomial& other) const {
        int max_degree = std::max(degree, other.degree);
        Polynomial result(max_degree);
        for (int i = 0; i <= max_degree; ++i) {
            result.coeffs[i] = (i <= degree ? coeffs[i] : 0) + (i <= other.degree ? other.coeffs[i] : 0);
        }
        return result;
    }

    Polynomial operator*(const Polynomial& other) const {
        std::vector<int> a(coeffs, coeffs + degree + 1);
        std::vector<int> b(other.coeffs, other.coeffs + other.degree + 1);
        std::vector<int> result = multiplyFFT(a, b);
        Polynomial res(result.size() - 1);
        for (int i = 0; i < result.size(); ++i) {
            res.coeffs[i] = result[i];
        }
        return res;
    }

    //for index operator
    int& operator[](int index) {
        return coeffs[index];
    }

    const int& operator[](int index) const {
        return coeffs[index];
    }

    int getDegree() const {
        return degree;
    }

};

int main() {

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int degree1;
    std::cin >> degree1;
    Polynomial p(degree1);
    std::cin >> p;

    int degree2;
    std::cin >> degree2;
    Polynomial q(degree2);
    std::cin >> q;

    Polynomial r = p * q;

    int res_90 = r[0];
    for(int i = 1; i <= r.getDegree(); ++i) {
        res_90 ^= r[i];
    }

    std::cout << res_90 << std::endl;

    return 0;
}