// 在手机编辑器中，全部写在同一个文件里

#include <iostream>

// 1. 头文件部分（相当于 MathUtils.h）
namespace MathUtils {
    int add(int a, int b);
    int factorial(int n);
    bool isPrime(int n);
    int gcd(int a, int b);
}

// 2. 实现部分（相当于 MathUtils.cpp）
namespace MathUtils {
    int add(int a, int b) { return a + b; }
    
    int factorial(int n) {
        if (n < 0) return -1;
        int result = 1;
        for (int i = 2; i <= n; ++i) result *= i;
        return result;
    }
    
    bool isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) return false;
        }
        return true;
    }
    
    int gcd(int a, int b) {
        while (b != 0) { int temp = b; b = a % b; a = temp; }
        return a;
    }
}

// 3. 主程序部分（相当于 main.cpp）
int main() {
    std::cout << "3 + 4 = " << MathUtils::add(3, 4) << std::endl;
    std::cout << "5的阶乘: " << MathUtils::factorial(5) << std::endl;
    std::cout << "7是质数吗? " << (MathUtils::isPrime(7) ? "是" : "否") << std::endl;
    std::cout << "12和18的最大公约数: " << MathUtils::gcd(12, 18) << std::endl;
    return 0;
}
