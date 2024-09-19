#include <iostream> // preprocessor directive
#include <vector>
using namespace std;

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int rows = matrix.size();
        int cols = matrix[0].size();

        // Initialize row and col vectors to store the rows and columns to be zeroed
        vector<int> row(rows, 0);
        vector<int> col(cols, 0);

        // First pass: identify the rows and columns that need to be zeroed
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (matrix[i][j] == 0)
                {
                    row[i] = 1; // Mark the ith row
                    col[j] = 1; // Mark the jth column
                }
            }
        }

        // Second pass: set the matrix elements to zero based on row and col vectors
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (row[i] == 1 || col[j] == 1)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

// Helper function to print the matrix
void printMatrix(const vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    // Initialize matrix with proper 2D array structure
    vector<vector<int>> matrix = {
        {1, 1, 1, 1},
        {1, 0, 1, 1},
        {1, 1, 0, 1},
        {1, 1, 1, 1}
    };

    // Create an object of Solution and call the setZeroes method
    Solution solution;
    solution.setZeroes(matrix);

    // Print the updated matrix
    cout << "Updated Matrix: " << endl;
    printMatrix(matrix);

    return 0;
}
