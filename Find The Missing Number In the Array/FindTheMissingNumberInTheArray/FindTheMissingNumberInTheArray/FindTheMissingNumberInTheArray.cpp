
/* Puzzle 01. Find the missing number in the array
You are given an array of positive numbers from 1 to n, such that all numbers from 1 to n are present except one number x.
You have to find x.The input array is not sorted.Look at the below array and view the solution in Python.
*/

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int find_missing(const vector<int>& input) {

    /// It is an arithmetic progressing as following U(n+1) = U(n) + 1
    /// The sum of that kind of progression is n * (U(0) + U(n)) / 2
    int n = input.size() + 1;
    int expectedSum = n * (1 + n) / 2;
    int actualSum = accumulate(input.begin(), input.end(), 0);

    return expectedSum - actualSum;
}

int main()
{
    // Inputs
    vector<int> Array1 = { 3,7,1,2,8,4,5 };
    vector<int> Array2 = { 8,1,5,9,12,4,2,7,3,6,10 };

    // Computation
    int resultArray1 = find_missing(Array1);
    int resultArray2 = find_missing(Array2);

    // Results
    cout << "Result for First Array is: " << resultArray1 << endl;
    cout << "Result for Second Array is: " << resultArray2 << endl;
}

