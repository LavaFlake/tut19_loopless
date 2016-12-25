#include <iostream>
#include "io.h"
#include "math.h"

int main() {
	double towerHeight {getHeight()};
	
	towerHeight = calcHeight(1, towerHeight);
	displayHeight(1, towerHeight);
	towerHeight = calcHeight(2, towerHeight);
	displayHeight(2, towerHeight);
	towerHeight = calcHeight(3, towerHeight);
	displayHeight(3, towerHeight);
	towerHeight = calcHeight(4, towerHeight);
	displayHeight(4, towerHeight);
	towerHeight = calcHeight(5, towerHeight);
	displayHeight(5, towerHeight);

	return 0;
}
