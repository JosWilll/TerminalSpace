#pragma once
#include <vector>

#include "classplanet.h"
#include "classstar.h"

// Class that describe a star system
class system{
		// A vector that holds all the system's planets
		vector<planet> plts;

		// A vector that holds all the stars of the system
		vector<star> stars;
public:
		// Default constructor
		system();

		system(int s, int p);
		
		friend system* generatesystem();
}

