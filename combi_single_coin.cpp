# int combi_single_coin(int target, int idx, vector<int>& nums, string psf)
{
	if (target == 0)
	{
		cout << psf << " ";
		return 1;
	}
	int count = 0;

	for (int i = idx; i < nums.size(); i++)
	{
		if (target - nums[i] >= 0 )
		{

			count += combi_single_coin(target - nums[i], i + 1 , nums, psf + to_string(nums[i]));

		}
	}
	return count;
}
