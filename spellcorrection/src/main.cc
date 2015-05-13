/*************************************************************************
	> File Name: ./src/main.cc
	> Author: Skymvp
	> Mail:292908626@qq.com 
	> Created Time: Wed 13 May 2015 05:25:50 PM CHOT
 ************************************************************************/
#include"MyConf.h"
#include<string>
#include<iostream>
using namespace std;

int main()
{
	string filepath = "/home/skymvp/c++/spellcorrection/spellcorrection/conf/my.conf";
	MyConf myconf(filepath);
	myconf.init();
	myconf.show();

	return 0;
}

