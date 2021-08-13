# levelup_recursion
int flood_fill(int sr, int sc, int er, int ec, vector<string>& ans, string psf, vector<vector<bool>> visited)
{
	if (sr == er and sc == ec)
	{
		ans.push_back(psf);
		return 1;
	}
	visited[sr][sc] = true;
	int count = 0;

	for (int d = 0; d < dir.size(); d++)
	{
		int r = sr + dir[d][0];
		int c = sc + dir[d][1];

		if (r >= 0 and c >= 0 and r <= er and c <= ec and !visited[r][c])
		{
			count += flood_fill(r, c, er, ec, ans, dirs[d] + psf, visited);
		}
	}
	visited[sr][sc] = false;
	return count;
}
