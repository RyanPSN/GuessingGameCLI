#include <iostream>
#include <Windows.h>

using namespace std;

static bool isActive = true;

int main() {

	srand(time(0));

	std::cout << "Enter Your Guess Please: " << "\n";
	int guessNumber = rand() % 10 + 1;

	DWORD x = 0;

	cin >> x;

	for (int loop = 0; loop < 1; loop++) {

		while (isActive) {

			if (x < guessNumber) {
				cout << "To low" << endl;

			}

			if (x > guessNumber) {

				cout << "To High" << endl;

			}

			if (x == guessNumber) {

				cout << "Correct" << endl;

			}

			else {
				cout << "Not Correct" << endl;

				std::cout << "Number was: " << guessNumber << "\n";
			}



			isActive = false;
		}



		system("pause > 0");
		return 0;
	}
	
}