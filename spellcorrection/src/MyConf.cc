#include "MyConf.h"
#include <iostream>
#include <utility>
#include <sstream>
#include <map>

using namespace std;

MyConf::MyConf(const string &filepath)
	:in_(filepath.c_str())//初始化流
{}

//对流操作，读取文件信息
bool MyConf::init()
{
	if(!in_)
	{
		cout<<"file read error"<<endl;
		return false;
	}

	string line;
	while(getline(in_,line))
	{
		//line里面有关键词和需要的真实的数据
		string key,value;
		stringstream ss(line);
		ss >> key >> value;//输入
		map_.insert(make_pair(key,value));//加到map中
	}

	return true;
}
//看下是不是我们想要的,打印出来
void MyConf::show()
{//对mit遍历
	map<string,string>::const_iterator mit;
	for(mit = map_.begin();mit != map_.end();++mit)
	{
		cout<<mit->first
			<<"---->"
			<<mit->second
			<<endl;
	}
}
