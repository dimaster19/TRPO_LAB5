#include "Designer.h"
#include <iostream>

Designer::Designer() : Worker() {}

Designer::Designer(std::string name, std::string surname, bool sex, std::string bornYear, std::string startYear, double rating, int numOfPhotos) :
	Worker(name, surname, sex, bornYear, startYear, rating, numOfPhotos) {}

void Designer::process(const std::string& photo_path) {
	std::cout << "Photo path: " << photo_path << std::endl;
	std::cout << "Image was produced by: " << name << " " << surname << std::endl;
	upRating(rand () % 10 + 1);
}

void Designer::upRating(int jury) {
	this->jury = jury;

		for (int i = 0; i < jury; i++) {
			this->rating += (double)(rand()) / RAND_MAX * (1.0 - 0.0) + 0.0;
		}	
}




