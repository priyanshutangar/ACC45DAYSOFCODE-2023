#include<iostream>
#include<vector>

using namespace std;

bool isSafe(vector<int> &sums, int sum, int pos, int subset_sum) {
    if (pos == subset_sum) {
        return sum == 0;
    }
    if (pos > subset_sum) {
        return false;
    }
    if (sums[pos] == 0) {
        return isSafe(sums, sum - 1, pos + 1, subset_sum);
    }
    return isSafe(sums, sum - 1, pos + 1, subset_sum) ||
           isSafe(sums, sum + 1, pos + 1, subset_sum);
}

bool subsetSum(vector<int> &sums, int subset_sum) {
    return isSafe(sums, 0, 0, subset_sum);
}

int main() {
    vector<int> sums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int subset_sum = 15;

    if (subsetSum(sums, subset_sum)) {
        cout << "Found a subset with the sum equal to " << subset_sum << "." << endl;
    } else {
        cout << "No subset with the sum equal to " << subset_sum << " was found." << endl;
    }

    return 0;
}
