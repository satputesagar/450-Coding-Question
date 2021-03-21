#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int sum=0;
        int n=nums.size()-1;
        vector<int>count(n,0);
        for(int i=0;i<nums.size();i++)
        {
           count[nums[i]-1]++;
        }
        int max=0,res=0;
        for(int i=0;i<n;i++)
        {
            if(max<count[i])
            {
                max=count[i];
                res=i;
            }
        }
        return res+1; 
    }
};