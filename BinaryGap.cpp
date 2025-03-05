// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    // Implement your solution here
    int cnt = -1;
    int max = 0;

    for (int i = 0; i < 32; i++) {
        if (((N >> i) & 1) > 0) {
            if (cnt > -1) {
                max = std::max(max, cnt);
                cnt = 0;
            }
            else {
                cnt++;
            }
        }
        else {
            if (cnt > -1) {
                cnt++;
            }
        }
    }
    return max;
}
