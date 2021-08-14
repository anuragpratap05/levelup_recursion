# levelup_recursion
class Solution {
public:
    
    void permutation(vector<int>& s, vector<int> v, int n, int j, vector<vector<int>>& final)
{
	if (j == n)
	{
		final.push_back(v);
		return;
	}

	for (int i = 0; i < n; i++)
	{

		if (v[i] == 11)
		{
			v[i] = s[j];
			permutation(s, v, n, j + 1, final);
			v[i] = 11;
		}
	}
	return;
}
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> v(n,11);
        vector<vector<int>> final;
        permutation( nums, v, n, 0, final);
        return final;
        
    }
};
