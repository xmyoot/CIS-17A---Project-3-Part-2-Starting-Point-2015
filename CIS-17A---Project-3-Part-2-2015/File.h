#pragma once
#include <string>
class File
{
private:
	std::string _name;
public:
	File(std::string name);
	~File();

	std::string getName() { return _name; }
};

