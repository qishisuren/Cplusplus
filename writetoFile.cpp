#include "head.h"
//д�뵽�ļ�
void writetoFile(PER per[], int n)
{
	ofstream outfile;
	outfile.open("message.txt", ios_base::trunc);//�򿪡�message.txt������������ļ�����ԭ������
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
		cout << "����ɹ���\n" << endl;
	}
	else cout << "����ʧ��";
}
