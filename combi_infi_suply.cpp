# int combi_infi_suply(int target, int idx, vector<int>& nums, string psf)
{
	if (target == 0)
	{
		cout << psf << endl;
		return 1;
	}
	int count = 0;
	for (int i = idx; i < nums.size(); i++)
	{
		if (target - nums[i] >= 0)
		{
			count += combi_infi_suply(target - nums[i], i, nums, psf + to_string(nums[i]));
		}
	}
	return count;
}
