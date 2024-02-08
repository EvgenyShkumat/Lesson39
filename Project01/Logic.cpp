#include <iostream>

bool is_number_prime1(int number) {
	int prime = true;

	for (int i = 2; i < number/2; i++)
	{
		if (number % i == 0) {
			prime = false;
			break;
		}
	}

	return prime;
}

bool is_number_prime2(int number) {
	int prime = true;

	for (int i = 2; i < sqrt(number); i++)
	{
		if (number % i == 0) {
			prime = false;
			break;
		}
	}

	return prime;
}