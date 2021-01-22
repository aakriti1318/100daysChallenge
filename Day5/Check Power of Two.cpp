//https://binarysearch.com/room/Spaghetti-Code-xKPi6TenfS
//Check Power of Two

bool solve(int n) {
    return __builtin_popcount(n) == 1? true:false;
}