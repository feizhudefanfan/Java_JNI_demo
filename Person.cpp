#include "Person.h"

Person::Person(){

}
void Person::init(int age, const char* name_str){
	this->age = age;
	name = name_str;
}
void Person::say_info(){
	printf("this Printf function name:%s \n", name);
	std::cout << "this cout name:"<<name<<std::endl;
	printf("this Printf function age: %d \n", age);
	std::cout << "this cout function age:" << age << std::endl;
}
void  Person::writeFile(const char* path_name, const char* content){
	std::fstream outfile(path_name,std::ios::out);
	if (!outfile)
	{
		std::cerr << "open error!" << std::endl;
		//abort();
	}
	outfile << content;
	outfile.close();
}
