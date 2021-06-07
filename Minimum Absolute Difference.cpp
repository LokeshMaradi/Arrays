class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size(),mini;
        vector<vector<int>> result;
        if(n>=2)
        {
        sort(arr.begin(),arr.end());
        mini=abs(arr[1]-arr[0]);
        for(int i=0;i<n-1;i++)
        {
            mini=min(mini,abs(arr[i]-arr[i+1]));
        }
        for(int i=0;i<n-1;i++)
        {
           if(mini==abs(arr[i]-arr[i+1]))
              result.push_back({arr[i],arr[i+1]});
        
       }
    } 
        return result;      
    }
};
int main()
{
 Solution s;
 vector<int> nums{2,5,6,4,3};
 cout<<s.findUnsortedSubarray(nums);
 return 0;
 }
