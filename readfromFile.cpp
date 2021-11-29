#include "head.h"
//读取文件
int readfromFile(PER per[])
{
	int i = 0;
	ifstream infile;
	infile.open("message.txt");
	if (infile.is_open())          //文件打开成功,说明曾经写入过东西  
	{
		while (infile.good() && !infile.eof())//文件读取正常并且没有到文件末尾
		{
			infile >> per[i].name >> per[i].sex >> per[i].address >> per[i].tel_no >> per[i].e_mail >> per[i].group;
			i++;
		}
		infile.close();
	}
	else cout << "读取失败";
	return i;//返回值为在文件中读取出来的联系人个数
}