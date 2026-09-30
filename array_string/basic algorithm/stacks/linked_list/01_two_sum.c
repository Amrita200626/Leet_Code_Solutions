#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for (int i = 0; i < nums.size(); i++) {

            for (int j = i + 1; j < nums.size(); j++) {

                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }

        return {};
    }
};

int main() {

    Solution s;

    // TEST CASE 1
    vector<int> nums1 = {2, 7, 11, 15};
    vector<int> answer1 = s.twoSum(nums1, 9);

    cout << "Test Case 1: ";
    cout << answer1[0] << " " << answer1[1] << endl;


    // TEST CASE 2
    vector<int> nums2 = {3, 3};
    vector<int> answer2 = s.twoSum(nums2, 6);

    cout << "Test Case 2: ";
    cout << answer2[0] << " " << answer2[1] << endl;

    return 0;
}