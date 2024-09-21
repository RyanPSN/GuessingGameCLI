#include <iostream>
#include <Windows.h>

using namespace std;

static bool isActive = true;
static DWORD x = 0;
static int i = 10; 

int main() {

	srand(time(0));

	std::cout << "Enter Your Guess Please: " << "\n";
	int guessNumber = rand() % 10 + 1;

	cin >> x;

	while (isActive) {


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