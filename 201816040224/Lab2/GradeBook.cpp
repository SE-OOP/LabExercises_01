// Lab 2: GradeBook.cpp
// Member-function definitions for class GradeBook.
#include <iostream>
#include "GradeBook.h"
using namespace std;

// include definition of class GradeBook from GradeBook.h


// constructor initializes courseName and instructorName

// with strings supplied as arguments
GradeBook::GradeBook( string first, string second )
{
   setCourseName( first); // initializes courseName
  setInstructorName(second); // initialiZes instructorName
} // end GradeBook constructor
void GradeBook::setInstructorName(string teacher)
{
    instructorName = teacher;
}
// function to set the course name
void GradeBook::setCourseName( string name )
{
   courseName = name; // store the course name
} // end function setCourseName

// function to retrieve the course name
string GradeBook::getCourseName()
{
   return courseName;
} // end function getCourseName

/* write code to define a get member function for the instructor's name */
string GradeBook::getInstructName()
{

    return instructorName;
}
/* write code to define a set member function for the instructor's name */

// display a welcome message and the instructor's name
void GradeBook::displayMessage()
{
   // display a welcome message containing the course name
   cout << "Welcome to the grade book for\n" << getCourseName() << "!"
      << endl;

} // end function displayMessage