#include "constants.h"

double calcHeight(int i, double towerHeight) {
	return towerHeight - constants::gravity * i * i / 2.0;
}
