/* Puzzle 02: Sum of Two Values
   Given an array of integersand a value, determine if there are any two integers in the array whose sum is equal to the given value.
   Return true if the sum existsand return false if it does not.
*/

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool find_sum_of_two(vector<int>& A, int val) {
    
    unordered_set<int> set;

    for (auto element : A) {

        if (element > val) 
            continue;

        for (auto saved_element : set) {
            if (element + saved_element == val)
                return true;
        }
        set.insert(element);
    }

    return false;
}

int main()
{
    //Entries
    vector<int> v = { 5, 7, 1, 2, 8, 4, 3 };
    vector<int> test = { 3, 20, 1, 2, 7 };

    // Computation
    for (auto t : test)
    {
        bool result = find_sum_of_two(v, t);
        cout << "For sum " << t << ", value exist? : " << result << endl;
    }


}
