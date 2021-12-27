#include "CameraMan.h"
#include <iostream>

CameraMan::CameraMan():Worker() {}
CameraMan::CameraMan(std::string name, std::string surname, bool sex, std::string bornYear, std::string startYear, double rating, int numOfPhotos) :
	Worker(name, surname, sex,  bornYear,  startYear, rating, numOfPhotos) {}



void CameraMan::printPortfolio() {
	std::cout << "Num of photos in portfolio: " << numOfPhotos << std::endl;
}


void CameraMan::upPortfolio() {
	++numOfPhotos;
	printPortfolio();
}



void CameraMan::process(const std::string& photo_path) {
	std::cout << "Photo path: " << photo_path << std::endl;
	std::cout << "Photo was processed by: " << name << " " << surname << std::endl;
	upPortfolio();
}



