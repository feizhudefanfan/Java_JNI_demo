
#ifndef PERSON_H
#define PERSON_H
#include<string.h>
#include <iostream>
#include <stdio.h>
#include <fstream>


class Person{
private:
	int age;
	const char* name;
public:
	Person();
	void init(int, const char*);
	void say_info();
	void writeFile(const char* path_name, const char* content);
};


#endif /* PERSON_H_ */




