#include <iostream>

int getSum(int a, int b) { return a + b ; }
int getGop(int a, int b) { return a * b; }
int getZegop(int a, int b) { return 0; }
int getDivide(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Division is not allowed!");
    }
    return a / b;
}
int getSumSum(int a, int b) { return 0; }
int getMinus(int a, int b) 
{
	return (a-b); 
}
int getSumSum(int a, int b, int c) {
	return a + b + c;
}
