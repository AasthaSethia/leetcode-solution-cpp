class Solution {
public:
       vector<int> 
        twoSum(vector<int>& nums, int target) 
       {  std::vector<int> v;
        for( int i =0; i<nums.size(); i++)
         {  int a = nums[i];
            for(int j=i+1; j<nums.size();j ++) 
             {
                 int temp = a+ nums[j];
                    if(temp==target)  
                    {
            
                        v.push_back(i);
                        v.push_back(j);
                        
                    }
                
             }
         }
           return v;
    }
