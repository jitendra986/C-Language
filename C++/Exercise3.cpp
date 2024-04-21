#include<iostream>
#include<cmath>

int main()
{
	double l1, l2, I1, I2, w1, w2, j, x, q1, q2, Mb;
	double M;

	std::cout << "Enter the value of Length 1[m] = " << std::endl;
	std::cin >> l1;

	std::cout << "Enter the value of Length 2[m] = " << std::endl;
	std::cin >> l2;

	std::cout << "Moment of Inertia Iy1[m^4] = " << std::endl;
	std::cin >> I1;

	std::cout << "Moment of Inertia Iy2[m^4] = " << std::endl;
	std::cin >> I2;

	std::cout << "Load q1[Kn/m] = " << std::endl;
	std::cin >> q1;

	std::cout << "Load q2[Kn/m] = " << std::endl;
	std::cin >> q2;

	int n=10;

	std::cout << "Number of samples [-] =  "<<n << std::endl;




	
	for (int x = 0; x <= l1+l2; x++)
	{
		j = I1 / I2;

		Mb = (q1 * l1 * l1 * l1 + q2 * l2 * l2 * l2 * j) / (8 * (l1 + l2 * j));

		w1 = (x / l1) - (x / l1) * (x / l1);
		w2 = (x - l1) / l2 - ((x - l1) / l2) * ((x - l1) / l2);

		 if (x <= l1)
		 {
		 	M = Mb*(x / l1) - (q1 * l1 * l1 / 2 * w1);
		 	std::cout << "x = " << x << ":" << "		" << "M(x)  [Kn/m] = " << M << std::endl;
		 }
		 else
		 {
		 	M = Mb * (1 - (x - l1) / l2) - q2 * l2 * l2 * w2 / 2;
		 	std::cout << "x = " << x << ":" << "		" << "M(x)  [Kn/m] = " << M << std::endl;
		 }
	}

	



	
}