
/// convert a integer to a binary string
string to_binary(int n)
{
	string s;
	while(n)
	{
		s+=(n%2?'1':'0');
		n/=2;
	}
	reverse(s.begin(),s.end());
	return s;
}

/// if we want exactly n bits to print an integer in binary, we can use 
cout<<bitset<n>(x);

/// left shift to b bits to an integer x
x << b is equal to x*2^b

/// right shift to b bits to an integer x
x >> b is equal to x/2^b

/// check ith bit of an integer is set or not
int check(int n,int i)
{
  if(n&(1<<i)) return 1;
  return 0;
}

