#pragma once
#include <string>
#include <fstream>
class Worker
{
public:
	std::string name = "Unknown";
	std::string surname = "Unknown";
	bool sex = 0; // 1-male, 0-female
	std::string bornYear = "Unknown";
	std::string startYear = "Unknown";
	double rating = 0.0;
	int jury = 0; 
	int numOfPhotos = 0;


	Worker();
	Worker(std::string name, std::string surname, bool sex, std::string bornYear, std::string startYear, double rating, int numOfPhotos);
	virtual void setName(std::string name);
	virtual void setSurname(std::string surname);
	virtual void setSex(bool sex);
	virtual void setBornYear(std::string bornYear);
	virtual void setStartYear(std::string startYear);
	virtual void setRating(double rating);
	virtual void setPortfolio(int numOfPhotos);
	virtual void upRating(int jury);
	virtual void serialize();
	virtual void deserialize();
	virtual void serialize(const std::string& file) const;
	virtual void deserialize(const std::string& file);
	virtual ~Worker();
};

