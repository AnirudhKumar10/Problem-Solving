## Two Sum

Given an array of integers  `nums` and an integer  `target`, return  _indices of the two numbers such that they add up to  `target`_.

You may assume that each input would have  **_exactly_  one solution**, and you may not use the  _same_  element twice.

You can return the answer in any order.

**Example 1:**

    Input: nums = [2,7,11,15], target = 9
    Output: [0,1]
    Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

**Example 2:**

    Input: nums = [3,2,4], target = 6
    Output: [1,2]

**Example 3:**

    Input: nums = [3,3], target = 6
    Output: [0,1]


#### JS Solution

    var twoSum = function(nums, target) {
	    let map = {}
	    for(const [i, num] of nums.entries()){
	        if(num + nums[map[target-num]] === target)
	            return [map[target-num], i]
	        else 
	            map[num] = i;
	    }
    };

#### C++ Solution


	    

    vector<int> twoSum(vector<int>& nums, int target) {
	    unordered_map<int, int> umap;
	    vector<int> res;
	                
	    for(int i=0; i<nums.size(); i++){	        
		    if(nums[i] + nums[umap[target-nums[i]]] == target) {		        
			    res.push_back(umap[target-nums[i]]);
			    res.push_back(i);			    
			    return res;		    
		    } else {		        
			    umap[nums[i]]=i;		    
		    }		    
	    }	    
	    return res;    
    }

