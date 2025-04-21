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
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int val1_90, val2_90;
    cin >> val1_90 >> val2_90;
    vector< vector<int> > a_90 = {
        {1, 3, 7},
        {2, 3, 4, val1_90},
        {9, 8, 15},
        {10, val2_90},
    };

    // sort(a_90.begin(), a_90.end(), [](const vector<int> &a, const vector<int> &b) {
    //     return std::accumulate(a.begin(), a.end(), 0) < std::accumulate(b.begin(), b.end(), 0);
    // });

    //Tương tự như trên, nhưng sử dụng vòng lặp for để tính tổng của từng vector thay vì hàm
    sort(a_90.begin(), a_90.end(), [](const vector<int> &a, const vector<int> &b) {
        int sum_a_90 = 0;
        for (int it : a) {
            sum_a_90 += it;
        }
        int sum_b_90 = 0;
        for (int it : b) {
            sum_b_90 += it;
        }
        return sum_a_90 > sum_b_90;
    });

    for (const auto &v_90 : a_90) {
        for (int it : v_90) {
            cout << it << ' ';
        }
        cout << endl;
    }
    return 0;
}