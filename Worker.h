#pragma once
#include "Header.h"

class Worker {
private:
	
	




	string name;
	int age;
	int YearsOfWork;
	char sex;
	int HoursOfWork;

public:
	static int count;


	static const int MIN_AGE = 21;
	static const int MAX_AGE = 90;

	static const int MIN_HOURS_OF_WORK = 4;
	static const int MAX_HOUR_OF_WORK = 12;

	static const int MIN_YEARS_OF_WORK = 1;

	Worker();
	~Worker();

	static int getCount();
	Worker(string name, int age, int YearsOfWork, char sex, int HoursOfWork);
	string getName();
	void setName(string initName);
	int getAge();
	void setAge(int age);
	int getYearsOfWork();
	void setYearsOfWork(int YearsOfWork);
	void setHoursOfWork(int YearsOfWork);
	int getHoursOfWork();
	void setSex(char sex);
	char getSex();



	string getInfo();

	};


