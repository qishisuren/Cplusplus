//ͷ�ļ�������PER�����飬ÿ����Ŀ�����鳤�ȳ���������Ԫ�ص�����
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

class PER     //��ϵ��������
{
public:
	char name[NAM_LEN];
	char sex[SEX_LEN];
	char address[ADD_LEN];
	char tel_no[TEL_LEN];
	char e_mail[MAIL_LEN];
	char group[GROUP_LEN];
};
void add(PER per[], int n);//�������ϵ��
int del(PER per[], int n);//ɾ����ϵ��
void find1(PER per[], int n);//��������ѯ��ϵ��
void find2(PER per[], int n);//���ֻ������ѯ��ϵ��
void find3(PER per[], int n);//�����ϣ�������һ���֣���ѯ��ϵ��
int readfromFile(PER per[]);//���ļ��ж�ȡ����
void change(PER per[], int n);//�༭��ϵ����Ϣ
void addtoFile(PER per[], int n);//�������ϵ�˵��ļ�
void writetoFile(PER per[], int n);//���ļ���д������
void show1(PER per[], int n);//�������ʾ��ϵ��
void show2(PER per[], int n);//���Ա���ʾ��ϵ��
void show3(PER per[], int n);//��ʾ������ϵ��
#endif
