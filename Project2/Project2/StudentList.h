#ifndef STUDENTLIST_H
#define STUDENTLIST_H

#include <string>
#include "AnyList.h"

class StudentList
{
public:
	StudentList() {}

	void addStudent(Student aStudent);

	int getNoOfStudents();

	void printStudentByID(int anID, double aTuitionRate);
	void printStudentByName(std::string aLastName);
	void printStudentByCourse(std::string aCoursePrefix, int aCourseNumber);
	void printAllStudents(double aTuitionRate);
	
	void clearStudentList();

	~StudentList();


private:
	Node* first;
	Node* last;
	int count;

};

#endif
