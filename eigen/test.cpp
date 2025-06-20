#include <iostream>
#include <Eigen/Dense>  // 引入Eigen主要功能

int main() {
    Eigen::Matrix3d A;
    A << 1, 2, 3,
         4, 5, 6,
         7, 8, 10;
    Eigen::Vector3d b(3, 3, 4);

    // 三、使用 QR 分解求解
    Eigen::Vector3d x = A.colPivHouseholderQr().solve(b);

    std::cout << "Solution x = \n" << x << std::endl;
    return 0;
}