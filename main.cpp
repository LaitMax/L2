#include<iostream>;
using namespace std;

void main()
{
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			for (int k = 0; k < 10; ++k)
			{
				int res = (i * i * i) + (j * j * j) + (k * k * k);
				if ((res < 100) || (res > 999))
					break;
				int kk = res % 10;
				int jj = ((res - kk) % 100) / 10;
				int ii = res / 100;
				if ((ii == i) && (jj == j) && (kk == k))
					std::cout << res << ' ';
			}
		}
	}
}
