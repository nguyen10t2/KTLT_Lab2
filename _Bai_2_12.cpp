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
#include <algorithm>

struct myPair {
    int first;
    int second;

    bool operator<(const myPair& other) const {
        return (second < other.second) || (second == other.second && first < other.first);
    }
};

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    myPair *myPairs = new myPair[1000];
    int length = 0;
    while(std::cin >> myPairs[length].first >> myPairs[length].second) {
        length++;
    }

    std::sort(myPairs, myPairs + length, [](const myPair& a, const myPair& b) {
        return !(a < b);
    });

    for(int i = 0; i < length; i++) {
        std::cout << myPairs[i].first << " " << myPairs[i].second << std::endl;
    }
}