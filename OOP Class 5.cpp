#include <iostream>
using namespace std;
class MaxNumber {
public:
    MaxNumber(int num1, int num2) {
        int maxNum;
        if (num1 > num2) {
            maxNum = num1;
        } else {
            maxNum = num2;
        }
        cout << "Maximum between " << num1 << " and " << num2 << " is: " << maxNum << endl;
    }
    MaxNumber(int num1, int num2, int num3) {
        int maxNum;
        if (num1 > num2) {
            if (num1 > num3) {
                maxNum = num1;
            } else {
                maxNum = num3;
            }
        } else {
            if (num2 > num3) {
                maxNum = num2;
            } else {
                maxNum = num3;
            }
        }
       
        cout << "Maximum between " << num1 << ", " << num2 << ", and " << num3 << " is: " << maxNum << endl;
    }
};
int main() {
    int num1, num2, num3;
    cout << "Enter the first number (num1): ";
    cin >> num1;
    cout << "Enter the second number (num2): ";
    cin >> num2;
    cout << "Enter the third number (num3): ";
    cin >> num3;
    MaxNumber max2(num1, num2);
    MaxNumber max3(num1, num2, num3);
    return 0;
}
