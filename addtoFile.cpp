#include "head.h"
//添加到文件
void addtoFile(PER per[], int n)
{
	ofstream outfile;
	outfile.open("message.txt", ios_base::app);//向文件尾加入新数据
	if (outfile.is_open())//判断文件是否正常打开
	{
		for (int i = 0; i < n; i++)
		{
			outfile << setw(NAM_LEN) << per[i].name;
			outfile << setw(SEX_LEN) << per[i].sex;
			outfile << setw(ADD_LEN) << per[i].address;
			outfile << setw(TEL_LEN) << per[i].tel_no;
			outfile << setw(MAIL_LEN) << per[i].e_mail;
			outfile << setw(GROUP_LEN) << per[i].group << endl;
		}
		outfile.close();//关闭文件
		cout << "保存成功！\n" << endl;
	}
	else cout << "保存失败";
}
