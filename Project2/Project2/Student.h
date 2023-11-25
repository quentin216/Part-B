#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <map>
#include "Course.h"

class Student
{
public:
	Student() : studentID(0), numberOfCourses(0), tuitionWasPaid(false) {}
	
	void setStudent(Student aStudent);
	void setStudentInfo(int aStudentID, std::string aFirstName, std::string aLastName, bool checkTuitionPaid, std::multimap<Course, char> theCoursesCompleted);
	
	int getID();
	std::string getFirstName();
	std::string getLastName();
	void getName(std::string aFirstName, std::string aLastName);
	int getNumberOfCourses();
	int getUnitsCompleted();
	std::multimap<Course, char> getCoursesCompleted();
	bool isTuitionPaid();
	bool isCourseCompleted(std::string aCoursePrefix, int aCourseNumber);
	double calculateGPA();
	double billingAmount(double tuitionRate);
	
	void printStudent();
	void printStudentInfo(double tuitionRate);

	~Student() {}

private:
	int studentID;
	std::string firstName;
	std::string lastName;
	int numberOfCourses;
	bool tuitionWasPaid;
	std::multimap<Course, char> coursesCompleted;

};
#endif