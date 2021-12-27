#pragma once
#include "Worker.h"
#include "IPictureProcessor.h"
class CameraMan : public Worker, public IPictureProcessor
{
private:

public:
	CameraMan();
	CameraMan(std::string name, std::string surname, bool sex, std::string bornYear, std::string startYear, double rating, int numOfPhotos);
	void process(const std::string& photo_path) override;
	void upPortfolio();
	void printPortfolio();
};

