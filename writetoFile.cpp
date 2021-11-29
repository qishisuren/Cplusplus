#include "head.h"
//写入到文件
void writetoFile(PER per[], int n)
{
	ofstream outfile;
	outfile.open("message.txt", ios_base::trunc);//打开“message.txt”并且清楚该文件里面原有数据
	if (outfile.is_open())
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
		outfile.close();
		cout << "保存成功！\n" << endl;
	}
	else cout << "保存失败";
}
