# levelup_recursion
pair<string, int> longest_path(int sr, int sc, int er, int ec, vector<vector<bool>>& visited)
{
	if (sr == er and sc == ec)
	{
		return pair<string, int>("", 0);
	}

	pair<string, int > myans("", -1);

	visited[sr][sc] = true;

	for (int d = 0; d < dir.size(); d++)
	{
		int r = sr + dir[d][0];
		int c = sc + dir[d][1];
		if (r >= 0 and c >= 0 and r <= er and c <= ec and !visited[r][c])
		{
			pair<string , int> rec_ans = longest_path(r, c, er, ec, visited);
			if (rec_ans.second != -1 and rec_ans.second + 1 > myans.second)
			{
				myans.first = dirs[d] + rec_ans.first;
				myans.second = myans.first.length();
			}

		}
	}

	visited[sr][sc] = false;
	return myans;
}
