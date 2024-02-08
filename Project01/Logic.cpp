bool is_number_prime(int number) {
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