//https://binarysearch.com/room/Bit-Manipulation-6RCbsBAVWs
//Hamming Distance

int solve(int x, int y) {
    int ans = x^y;
    return __builtin_popcount(ans);
}