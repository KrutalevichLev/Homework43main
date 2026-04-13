#include "logic.h"

int main() {
	int vector[]{1,2,3,4,5,6,7,8,9,10,11,12,2 };

	bool result = is_unique_vector(vector, DEFAULT_SIZE);

	string msg = "Your vector is ";
	msg += result ? "" : "not ";
	msg += "unique";

	cout << msg;

	return 0;
}