#include <iostream>
#include "math.h"

double getHeight() {
	std::cout << "Give me the height of your tower: ";

	double a;
	std::cin >> a;
	
	std::cout << "At 0 seconds, the ball is at height: " << a << " meters\n";

	return a;
}

void displayHeight(int i, double towerHeight) {
	if (towerHeight > 0.0)
		std::cout << "At " << i << " seconds, the ball is at height: " << towerHeight << " meters\n";
	else
		std::cout << "At " << i << " seconds, the ball is on the ground.\n";
}
