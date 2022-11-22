//============================================================================
// Name        : UdemyCourses.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class MyUdemyCourses{
	public:
	template<typename ...Args>
	 auto sum_unary_right_fold(Args...args){


		return (args+ ... +0);
	}
};
int main() {
	MyUdemyCourses  courses;
	int x = courses.sum_unary_right_fold(1,2,3,4,5);
	cout<<x;
	return 0;
}



