// Find minimum in matrix
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<vector<int>> mat = {{3,5,1},{7,2,8},{9,4,6}};
    int mn = mat[0][0];
    for (auto& row : mat)
        for (int x : row) mn = min(mn, x);
    cout << mn;
    return 0;
}
