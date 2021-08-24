# int permu_infi_suply(int tar,  vector<int>& nums, int n, string psf)
{

	if (tar == 0)
	{
		cout << psf << endl;
		return 1;
	}

	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (tar - nums[i] >= 0)
		{
			count += permu_infi_suply(tar - nums[i], nums, n, psf + to_string(nums[i]));
		}
	}

	return count;
}
