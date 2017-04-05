#pragma once
#include "File.h"
#include <memory>
#include <vector>
class Folder
{
private:
	std::string _name;
	std::vector <std::shared_ptr<Folder>> _folders;
	std::vector<std::shared_ptr<File>> _files;
public:
	Folder(std::string name);
	Folder::Folder();
	~Folder();

	std::string getName() { return _name; }
	std::vector<std::string> ListFiles();
	std::string ListContents();
	void AddFile(std::shared_ptr<File> newFile);
	void AddFolder(std::shared_ptr<Folder> newFolder);
	std::shared_ptr<Folder> FindFolder(std::string name);
	std::shared_ptr<File> FindFile(std::string name);
};

