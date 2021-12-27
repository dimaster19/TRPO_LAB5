#include "Worker.h"
#include <fstream>
#include <iostream>
#include <iomanip>


Worker::Worker() {}
Worker::Worker(std::string name, std::string surname, bool sex, std::string bornYear, std::string startYear, double rating, int numOfPhotos) {
	this->name = name;
	this->surname = surname;
	this->sex = sex;
	this->bornYear = bornYear;
	this->startYear = startYear;
	this->rating = rating;
	this->numOfPhotos = numOfPhotos;
}

void Worker::setName(std::string name) {
	this->name = name;
}

void Worker::setSurname(std::string surname) {
	this->surname = surname;
}
void Worker::setSex(bool sex) {
	this->sex = sex;
}

void Worker::setBornYear(std::string bornYear) {
	this->bornYear = bornYear;
}

void Worker::setStartYear(std::string startYear) {
	this->startYear = startYear;
}

void Worker::setRating(double rating) {
	this->rating = rating;

}

void Worker::setPortfolio(int numOfPhotos) {
	this->numOfPhotos = numOfPhotos;

}

void Worker::upRating(int jury) {
	this->jury = jury;

	if (jury >= 10) {
		for (int i = 0; i < jury; i++) {
			this->rating += (double)(rand()) / RAND_MAX * (1.0 - 0.0) + 0.0;
		}
	}
	else this->rating = rating;
}

void Worker::serialize() {
	std::ofstream fout;
	fout.open("Worker.txt", std::ofstream::app);

	if (fout.is_open()) {
		printf("\nFile is open");
		fout.write((char*)this, sizeof(Worker));
	}
	else {
		printf("\nError opening file");
	}

	fout.close();
}

void Worker::deserialize() {
	std::ifstream fin;
	fin.open("Worker.txt");

	if (fin.is_open()) {
		printf("\nFile is open");

	}
	else {
		printf("\nError opening file");
		fin.read((char*)this, sizeof(Worker));

	}

	fin.close();
}

void Worker::serialize(const std::string& file) const {
	std::ofstream fout;
	fout.open(file, std::ofstream::app);

	if (fout.is_open()) {
		printf("\nFile is open");
		fout.write((char*)this, sizeof(Worker));
	}
	else {
		printf("\nError opening file");
	}

	fout.close();
}

void Worker::deserialize(const std::string& file) {
	std::ifstream fin;
	fin.open(file);

	if (fin.is_open()) {
		printf("\nFile is open");

	}
	else {
		printf("\nError opening file");
		fin.read((char*)this, sizeof(Worker));
	}

	fin.close();
}

Worker::~Worker() {}