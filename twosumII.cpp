class Solution {
public:
    vector<int> 
        twoSum(vector<int>& numbers, int target) {
//          std::vector<int>return_index;
//         int *left = numbers.begin() ;
//         int *right= numbers.end();
//           for(i=0; i<numbers.size(); i++)
//           {   int l = numbers.size;
//               int a = *right + *left;
//              if(target<a)
//               {
//                   int r = 2 ;
//                   *right = &numbers[l-2];
//                    r++;
//                   if (r<0)
//                      break;
                  
//               }
//              else if (target>a)
//               {
//                      *left = &number[i++];
//               }
//              else if (target == a)
//              {
                
//                      if (number[i]== *right)
//                          return_index[1]= i+1;
//                      else if(number[i] == *left)
//                          return_index[0] == i+1;
                         
                    
//              }
//           }
//         return return_index;
        int start = 0;
        int end = numbers.size()-1;
        int curr_sum;
        vector<int> result;
        while(start<end){
            curr_sum = numbers[start] + numbers[end];
            if(target<curr_sum){
                end--;
            }
            else if(target>curr_sum){
                start++;
            }
            else{
                result.push_back(start+1);
                result.push_back(end+1);
                break;
            }
        }
        return result; 
    }
};
