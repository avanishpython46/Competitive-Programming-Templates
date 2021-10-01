
int power(int x, int y)
{
	
	int res = 1;
	while (y)
	{
		
		if (y % 2 == 1)
			res = (res * x);
			
		y = y >> 1;
		
		x = (x * x);
	}
	return res;
}


