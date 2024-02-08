#include <iostream>
#include <ctime>
using namespace std;

bool is_number_prime(int number); 

int main() {

	double now = time(0);

	cout << is_number_prime(7) << endl;

	now -= time(0);
	cout << now;

	return 0;
}