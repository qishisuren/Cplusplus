//头文件，包含PER类数组，每个项目的数组长度常量，所有元素的声明
#ifndef HEAD
#define HEAD
#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<iomanip>
using namespace std;
const int num = 200;
const int NAM_LEN = 10;
const int SEX_LEN = 4;
const int MAIL_LEN = 20;
const int ADD_LEN = 18;
const int TEL_LEN = 15;
const int GROUP_LEN = 10;

class PER     //联系人类数组
{
public:
	char name[NAM_LEN];
	char sex[SEX_LEN];
	char address[ADD_LEN];
	char tel_no[TEL_LEN];
	char e_mail[MAIL_LEN];
	char group[GROUP_LEN];
};
void add(PER per[], int n);//添加新联系人
int del(PER per[], int n);//删除联系人
void find1(PER per[], int n);//按姓名查询联系人
void find2(PER per[], int n);//按手机号码查询联系人
void find3(PER per[], int n);//按姓氏（姓名第一个字）查询联系人
int readfromFile(PER per[]);//从文件中读取数据
void change(PER per[], int n);//编辑联系人信息
void addtoFile(PER per[], int n);//添加新联系人到文件
void writetoFile(PER per[], int n);//向文件中写入数据
void show1(PER per[], int n);//按组别显示联系人
void show2(PER per[], int n);//按性别显示联系人
void show3(PER per[], int n);//显示所有联系人
#endif
