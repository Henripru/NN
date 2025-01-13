#include <Eigen/Dense>

#include <iostream>

int main()
{
    Eigen::Matrix4f T;
    T.fill(1.0f);

    Eigen::Matrix4f U;
    U.block<4,4>(0,0).triangularView<Eigen::StrictlyUpper>() = T.fullPivLu().matrixLU();

    std::cout << T << std::endl;
    std::cout << U << std::endl;

    return 0;
}
