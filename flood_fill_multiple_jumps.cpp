int flood_fill_multi(int sr, int sc, int er, int ec, vector<string>& ans, string psf, vector<vector<bool>> visited)
{
	if (sr == er and sc == ec)
	{
		ans.push_back(psf);
		return 1;
	}
	int count = 0;
	visited[sr][sc] = true;
	for (int d = 0; d < dir.size(); d++)
	{
		for (int rad = 1; rad <= max(er, ec); rad++)

		{
			int r = sr + rad * dir[d][0];
			int c = sc + rad * dir[d][1];

			if (r >= 0 and c >= 0 and r <= er and c <= ec)
			{
				if (!visited[r][c])
				{
					count += flood_fill_multi(r, c, er, ec, ans, psf + dirs[d] + to_string(rad), visited);
				}

			}
			else
			{
				break;
			}
		}
	}
	visited[sr][sc] = false;
	return count;
}
