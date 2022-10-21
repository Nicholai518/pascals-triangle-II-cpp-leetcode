#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // row that will be returned
    vector<int> getRow(int rowIndex) {

        // the size of the vector is rowindex + 1
        // add 1 to the beginning of the row
        vector<int> result(rowIndex + 1, 1);

        // start at row 1 because we already have the row at index 0 created
        for (int i = 1; i < rowIndex; i++) {

            // we are technically not adding new rows
            // we are continuously building one row
            for (int j = i; j > 0; j--) {
                result[j] += result[j - 1];
            }
        }
        return result;
    }
};

int main()
{
    Solution solution;
    vector<int> row = solution.getRow(3);

    for (int i = 0; i < row.size(); i++)
    {
        cout << row[i] << " ";
    }
    cout << endl;
    return 0;
}
