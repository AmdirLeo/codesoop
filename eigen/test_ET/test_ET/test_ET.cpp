#include <iostream>
#include <Eigen/Dense>  
#include<chrono>

using namespace Eigen;
using namespace std;

int main() {
    Matrix2d A,B,C;
    A << 1,2,
         3,4;
    B << 5,6,
         7,8;
    C << 9,10,
         11,12;
    // 测试表达式模板的性能
    auto start = chrono::high_resolution_clock::now();
    MatrixXd result = A + B + C; // ET：一次性评估，无中间对象
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration = end - start;
    cout << "Expression Template Time: " << duration.count() << "s" << endl;
    return 0;
}