#pragma once

#include <vector>
#include <map>
#include <string>

#include "classsector.h"

class planet{
	std::map<std::string, double> resources;
	
	// Describes a planetary map 7x12 sectors
	std::vector<std::vector<sector>> secmap(7);

public:
	planet();
};

