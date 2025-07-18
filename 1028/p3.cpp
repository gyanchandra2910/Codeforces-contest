#include <iostream>
#include <vector>
using namespace std;

// Euclidean algorithm to find GCD of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// GCD of an array of numbers
int findGCDofArray(const vector<int>& nums) {
    int result = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        result = gcd(result, nums[i]);
    }
    return result;
}

int main() {
    vector<int> nums = {48, 18, 30};  // You can change these values
    
    int result = findGCDofArray(nums);
    cout << "GCD is: " << result << endl;

    return 0;
}
