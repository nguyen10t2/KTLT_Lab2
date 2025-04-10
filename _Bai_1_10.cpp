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

// Bai 1.10

#include <iostream>

template <typename T>
class Matrix {
private:
    T** mtr;
    int row, col;

    T** create(int row, int col) {
        T** newMtr = new T*[row];
        for (int i = 0; i < row; ++i)
            newMtr[i] = new T[col];
        return newMtr;
    }

public:
    // Constructor
    Matrix(int row, int col) {
        this->row = row;
        this->col = col;
        this->mtr = create(row, col);
    }

    // Destructor
    ~Matrix() {
        for (int i = 0; i < row; ++i)
            delete[] mtr[i];
        delete[] mtr;
    }

    // Toán tử nhập
    friend std::istream& operator>>(std::istream& in, Matrix& p) {
        for (int i = 0; i < p.getRow(); ++i) {
            for (int j = 0; j < p.getCol(); ++j) {
                in >> p[i][j];
            }
        }
        return in;
    }

    // Toán tử xuất
    friend std::ostream& operator<<(std::ostream& out, const Matrix& p) {
        for (int i = 0; i < p.getRow(); ++i) {
            for (int j = 0; j < p.getCol(); ++j) {
                out << p[i][j] << ' ';
            }
            out << '\n';
        }
        return out;
    }

    // Toán tử cộng ma trận
    Matrix<T> operator+(const Matrix& other) {
        // Kiểm tra xem hai ma trận có cùng kích thước không
        if (this->getRow() != other.getRow() || this->getCol() != other.getCol()) {
            throw std::invalid_argument("Ma tran khong cung kich thuoc!");
        }
        Matrix<T> newMtr(this->getRow(), this->getCol()); // Tạo ma trận mới với kích thước giống
        for (int i = 0; i < this->getRow(); ++i) {
            for (int j = 0; j < this->getCol(); ++j) {
                newMtr[i][j] = (*this)[i][j] + other[i][j]; // Cộng từng phần tử
            }
        }
        return newMtr;
    }

    Matrix<T> operator*(const Matrix& other) {
        // Kiểm tra xem số cột của ma trận hiện tại có bằng số hàng của ma trận khác không
        if (this->getCol() != other.getRow()) {
            throw std::invalid_argument("So cot cua ma tran A phai bang so hang cua ma tran B!");
        }

        // Tạo ma trận kết quả với số hàng của ma trận hiện tại và số cột của ma trận khác
        Matrix<T> result(this->getRow(), other.getCol());

        // Thực hiện phép nhân ma trận
        for (int i = 0; i < this->getRow(); ++i) {
            for (int j = 0; j < other.getCol(); ++j) {
                result[i][j] = 0; // Khởi tạo phần tử tại result[i][j]
                for (int k = 0; k < this->getCol(); ++k) {
                    result[i][j] += (*this)[i][k] * other[k][j]; // Cộng phần tử (i, j)
                }
            }
        }
        return result;
    }

    // Toán tử [] để truy cập phần tử trong ma trận
    T* operator[](int rowIndex) {
        return mtr[rowIndex];
    }

    // Toán tử [] const để truy cập phần tử trong ma trận (hằng số)
    const T* operator[](int rowIndex) const {
        return mtr[rowIndex];
    }

    // Getter cho số hàng và số cột
    int getRow() const {
        return row;
    }

    int getCol() const {
        return col;
    }
};

int main() {

    // Dao Trong Nguyen _ 20235390 _ IT2-03 _ IT3040 _ 750829_ 2024.2

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    scanf("%d", &n);
    Matrix<int> p(n, n);
    // std::cout << "Nhap ma tran 3x3:\n";
    std::cin >> p;  // Nhập ma trận
    // std::cout << "Ma tran vua nhap:\n";
    // std::cout << p;  // In ma trận
    // Tạo một ma trận khác
    Matrix<int> q(n, n);
    // std::cout << "Nhap ma tran 3x3 khac:\n";
    std::cin >> q;
    // Cộng hai ma trận
    try {
        Matrix<int> result = p + q;
        std::cout << "Ket qua cua ma tran p + q:\n";
        std::cout << result;
    } catch (const std::invalid_argument& e) {
        std::cout << "Loi: " << e.what() << std::endl;
    }
    try {
        Matrix<int> result = p * q;
        std::cout << "Ket qua cua ma tran p * q:\n";
        std::cout << result;
    } catch (const std::invalid_argument& e) {
        std::cout << "Loi: " << e.what() << std::endl;
    }
    return 0;
}
