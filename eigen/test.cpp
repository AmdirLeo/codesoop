#include <iostream>
#include <Eigen/Dense>  // 引入Eigen主要功能

int main() {
    using namespace Eigen;
    using namespace std;

    // 一、创建矩阵和向量
    Matrix2d mat2x2; // 2x2 double类型矩阵
    Vector3f vec3f;  // 3维 float 向量

    mat2x2 << 1, 2,
              3, 4;
    vec3f << 1.0f, 2.0f, 3.0f;

    cout << "Matrix 2x2:\n" << mat2x2 << "\n\n";
    cout << "Vector 3f:\n" << vec3f << "\n\n";

    // 二、矩阵运算
    Matrix2d matResult = mat2x2 + mat2x2;
    cout << "Addition:\n" << matResult << "\n\n";

    matResult = mat2x2 * mat2x2;
    cout << "Multiplication:\n" << matResult << "\n\n";

    cout << "Transpose:\n" << mat2x2.transpose() << "\n\n";

    // 三、求解线性方程组 Ax = b
    Matrix3f A;
    A << 3, -1, 2,
         2,  0, 1,
         1,  2, 0;
    Vector3f b;
    b << 1, 2, 3;

    Vector3f x = A.inverse()*b;
    cout << "Solution x of Ax = b:\n" << x << "\n\n";
}
