# levelup_recursion
int permutation2(string s, string psf)
{

	if (s.length() == 0)
	{
		cout << psf << "  ";
		return 1;
	}


	int count = 0;
	char prev = '$';
	for (int i = 0; i < s.length(); i++)

	{
		char ch = s[i];
		if (prev != ch)
		{
			string ros = s.substr(0, i) + s.substr(i + 1);
			count += permutation2(ros, psf + ch);
		}
		prev = ch;
	}

	return count;
}
