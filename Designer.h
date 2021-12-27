#pragma once
#include "Worker.h"
#include "IPictureProcessor.h"
class Designer : public Worker, public IPictureProcessor
{
private:
	
public:
	Designer();
	Designer(std::string name, std::string surname, bool sex, std::string bornYear, std::string startYear, double rating, int numOfPhotos);
	void process(const std::string& photo_path) override;
	void upRating(int jury) override;
};

