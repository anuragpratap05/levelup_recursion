# int permu_single_coin(int target,  vector<int>& nums, string psf, vector<bool>& visited)
{

	if (target == 0)
	{
		cout << psf << " ";
		return 1;
	}
	int count = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		if (target - nums[i] >= 0 and !visited[i])
		{
			visited[i] = true;
			count += permu_single_coin(target - nums[i], nums, psf + to_string(nums[i]) , visited);

			visited[i] = false;
		}
	}
	return count;
}
