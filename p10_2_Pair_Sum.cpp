#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int elt) {
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] + arr[j] == elt) {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5}; 

    
    int elt; 
    cout << "Enter the elt whose sum will be calculated by two pair of no.s: ";
    cin >> elt;

    vector<vector<int>> result = pairSum(arr, elt);

    // Output the result
    for (const auto &pair : result) {
        cout << "[" << pair[0] << ", " <<
         pair[1] << "]" << endl;
    }

    return 0;
}

//-------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s) {
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] + arr[j] == s) {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5}; // Example input
    int s = 5; // Example sum
    
    vector<vector<int>> result = pairSum(arr, s);

    // Output the result
    for (const auto &pair : result) {
        cout << "[" << pair[0] << ", " << pair[1] << "]" << endl;
    }
    return 0;
}