#include "head.h"
//��ӵ��ļ�
void addtoFile(PER per[], int n)
{
	ofstream outfile;
	outfile.open("message.txt", ios_base::app);//���ļ�β����������
	if (outfile.is_open())//�ж��ļ��Ƿ�������
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
		outfile.close();//�ر��ļ�
		cout << "����ɹ���\n" << endl;
	}
	else cout << "����ʧ��";
}
