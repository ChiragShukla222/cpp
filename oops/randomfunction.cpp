
#include<iostream>
using namespace std;

class power {
public:
    void calculatePower(int a, int b) { // Changed the function name to calculatePower
        int pow1 = a;
        while (b > 1) {
            pow1 *= a;
            b--;
        }
        cout << "Result: " << pow1 << endl;
    }
};

int main() {
    int k, m;
    cout << "Enter the base: ";
    cin >> k;
    cout << "\nEnter the power: ";
    cin >> m;
    power r;
    r.calculatePower(k, m); // Changed the function call to calculatePower
    return 0;
}
