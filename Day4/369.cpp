//https://binarysearch.com/problems/3-6-9/submissions/3530209

vector<string> solve(int n) {
    vector<string> ans;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            ans.push_back("clap");
            continue;
        }
        string numString = to_string(i);
        if (numString.find('3') != string::npos || numString.find('6') != string::npos || numString.find('9') != string::npos) {
            ans.push_back("clap");
        } else {
            ans.push_back(numString);
        }
    }
    return ans;
}#include <iostream>
using namespace std;
int main() {
    cout<<"Hello World!";
}
