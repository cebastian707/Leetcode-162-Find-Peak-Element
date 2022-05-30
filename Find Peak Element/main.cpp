/*By::Cebastian Santiago
* Leetcode 162
*/
#include<iostream>
#include<vector>

int findPeakElement(std::vector<int>& nums) {
	//just keep track of the idx
	int idx = 0;
	//loop through the moutain
	for (size_t i = 1; i < nums.size(); i++){
		//if the current idx is bigger then pervious
		//were going up the moutain till the current idx i 
		//is not bigger then i-1
		if (nums[i] > nums[i-1]) {
			idx = i;
		}
	}
	return idx;
}


int main(int argc, char* argv[]) {
	std::vector<int> nums = { 1,2,1,3,5,6,4 };
	std::cout << findPeakElement(nums) << std::endl;
	return 0;
}