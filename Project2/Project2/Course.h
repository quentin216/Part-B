#ifndef COURSE_H
#define COURSE_H

#include <string>

class Course
{
public:
	Course() : courseNumber(0), courseUnits(0) {}

	void setCourseInfo(const std::string& aCoursePrefix, int aCourseNumber, int theCourseUnits);
	
	std::string getCoursePrefix() const;
	int getCourseNumber() const;
	int getCourseUnits() const;
	// mystery function

	~Course() {}



private:
	std::string coursePrefix;
	int courseNumber;
	int courseUnits;

};
#endif