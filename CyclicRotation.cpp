// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(vector<int> &A, int K) {
    // Implement your solution here
    int size = A.size();

    if (size == 0) {
        return A;
    }

    K = K % size;
    vector<int> rotated(size);

    for (int i = 0; i < size; i++) {
        rotated[((i + K) % size)] = A[i];
    }

    return rotated;
}