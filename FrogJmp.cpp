// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int X, int Y, int D) {
    // Implement your solution here
    int cnt = (Y - X) / D;

    if ((Y - X) % D > 0) {
        cnt++;
    }

    return cnt;
}