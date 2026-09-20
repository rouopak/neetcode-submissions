class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>temp;
        for(int i=0;i<nums.size();i++) temp.push_back({nums[i],i});
        sort(temp.begin(),temp.end());
        int sum,first=0,second=nums.size()-1;
        while(first<second){
            sum=temp[first].first+temp[second].first;
            if(sum<target){
                first++;
                continue;
            }
            if(sum>target){
                second--;
                continue;
            }
            vector<int> ans={temp[first].second,temp[second].second};
            sort(ans.begin(),ans.end());
            return(ans);
        }
    }
};
