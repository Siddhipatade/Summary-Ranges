#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> summaryRanges(vector<int>& nums) {
    vector<string> ranges;

    for (int i = 0; i < nums.size(); i++) {
        int start = nums[i];
        // Keep iterating until the next element is one more than the current element.
        while (i + 1 < nums.size() && nums[i] + 1 == nums[i + 1]) {
            i++;
        }

        if (start != nums[i]) {
            ranges.push_back(to_string(start) + "->" + to_string(nums[i]));
        } else {
            ranges.push_back(to_string(start));
        }
    }

    return ranges;
}

int main() {
    vector<int> nums = {0, 1, 2, 4, 5, 7};
    vector<string> result = summaryRanges(nums);

    cout << "Ranges: ";
    for (const string& range : result) {
        cout << range << " ";
    }
    cout << endl;

    return 0;
}
