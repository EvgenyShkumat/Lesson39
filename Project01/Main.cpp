#include <iostream>
#include <ctime>
using namespace std;

bool is_number_prime1(int number); 
bool is_number_prime2(int number);

int main() {
	long long number =	2147483647;

	long long start_time = time(NULL);
	bool result = is_number_prime1(number);
	long long end_time = time(NULL);

	//cout << (result ? "Prime" : "Is not prime") << endl;
	cout << "time: " << (end_time - start_time) << " sec" << endl;

	start_time = time(NULL);
	result = is_number_prime2(number);
	end_time = time(NULL);

	cout << "time: " << (end_time - start_time) << " sec" << endl;

	return 0;
} 