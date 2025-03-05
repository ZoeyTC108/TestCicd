// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<unordered_map>

int solution(vector<int> &A) {
    // Implement your solution here
    int ans = -1;
    int n = A.size();
    unordered_map<int, int> occr;

    for (int i = 0; i < n; i++)
    {
        occr[A[i]]++;
    }

    for (auto i : occr) {
        if (i.second % 2 > 0)
        {
            ans = i.first;
            break;
        }
    }
    return ans;
}
