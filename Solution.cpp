class Solution {
public:
    int splitNum(int num) {
        vector<int> vec;
        while (num > 0) {
            vec.push_back(num % 10);
            num /= 10;
        }
        sort(vec.begin(), vec.end());
        int mn = INT_MAX, n = vec.size();
        do {
            int num1 = 0, num2 = 0;
            for (int i = 0; i < n; i++) {
                if (i < n / 2) {
                    num1 = 10 * num1 + vec[i];
                } else {
                    num2 = 10 * num2 + vec[i];
                }
            }
            mn = min(mn, num1 + num2);
        } while (next_permutation(vec.begin(), vec.end()));
        return mn;
    }
};
