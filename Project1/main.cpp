#include "logic.h"

int main() {
	int array[]{1,2,3,4,5,6,7,8,9,10,11,12,2 };
	int length = 14;

	bool result = is_unique_vector(array, length);

	string msg = "Your vector is ";
	msg += result ? "" : "not ";
	msg += "unique";

	cout << msg;

	return 0;
}