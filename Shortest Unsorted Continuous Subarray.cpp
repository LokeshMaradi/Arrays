class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int d=-2,c=-1,l=nums.size();
        vector<int> n(nums);
        sort(n.begin(),n.end());
        for(int i=0;i<l-1;i++)
        {
            if(n[i]!=nums[i])
            {c=i;break;}
        }
        if(c!=-1)
        {
        for(int i=l-1;i>0;i--)
        {
            if(n[i]!=nums[i])
            {d=i;break;}
        }
        }
        return d-c+1;
    }
};
int main()
{
 Solution s;
 vector<int> nums{2,5,4,4,3};
 cout<<s.findUnsortedSubarray(nums);
  return 0;
 }
