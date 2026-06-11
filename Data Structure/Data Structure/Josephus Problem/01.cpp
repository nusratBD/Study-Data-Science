#include <iostream>
using namespace std;

int josephusMath(int n, int k) {
    int survivor = 0; // বেস কেস: ১ জন মানুষের জন্য ০ নম্বর ব্যক্তি বিজয়ী

    // ২ জন মানুষ থেকে শুরু করে n জন মানুষ পর্যন্ত লুপ চলবে
    for (int i = 2; i <= n; i++) {
        survivor = (survivor + k) % i; // সেই ম্যাজিক সূত্র!
    }

    return survivor + 1; // 1-indexed করার জন্য শেষে ১ যোগ করা হলো
}

int main() {
    int n = 10, k = 2;
    cout << "Last survivor " << josephusMath(n, k) << endl;
    return 0;
}
