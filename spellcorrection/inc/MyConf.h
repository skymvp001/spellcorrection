#ifndef _MYCONF_H
#define _MYCONF_H

#include <set>
#include <string>
#include <fstream>
#include <map>

class MyConf
{
public:
	MyConf(const std::string &filepath);
	bool init();
	void show();
private:
	std::map<std::string,std::string> map_;
	std::ifstream in_;

};

#endif

