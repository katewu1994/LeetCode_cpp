class Solution {
  public:
	int reverse(int x) {
		long y = x;
		int sign = 1;
		long n = 0;
		if (y < 0)
		{
			y = -y;
			sign = -1;
		}
		while (y)
		{
			n = n*10 + (y%10);
			y /= 10;
			if (n > INT_MAX)
			n=0;
		}
		return sign*n;
	}
};
