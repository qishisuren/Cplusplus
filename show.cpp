#include"head.h"
//��ʾͬһ�����ϵ��
void show1(PER per[], int n)
{
	int i, find = 0;
	char GROUP[GROUP_LEN];
	cout << "����Ҫ��ѯ�����";
	cin >> GROUP;
	cout << "����      �Ա�      סַ           �绰          ��������               ���" << endl;
	for (i = 0; i < n; i++)
	{
		if (strcmp(per[i].group, GROUP) == 0)
		{
			cout << setiosflags(ios::left) << setw(NAM_LEN) << per[i].name;
			cout << setiosflags(ios::left) << setw(SEX_LEN) << per[i].sex;
			cout << setiosflags(ios::left) << setw(ADD_LEN) << per[i].address;
			cout << setiosflags(ios::left) << setw(TEL_LEN) << per[i].tel_no;
			cout << setiosflags(ios::left) << setw(MAIL_LEN) << per[i].e_mail;
			cout << setiosflags(ios::left) << setw(GROUP_LEN) << per[i].group << endl;
		}
	}
}
//���Ա���ʾ��ϵ��
void show2(PER per[], int n)
{
	int i, find = 0;
	char SEX[SEX_LEN];
	cout << "����Ҫ��ѯ���Ա�";
	cin >> SEX;
	cout << "����      �Ա�      סַ           �绰          ��������               ���" << endl;
	for (i = 0; i < n; i++)
	{
		if (strcmp(per[i].sex, SEX) == 0)
		{
			cout << setiosflags(ios::left) << setw(NAM_LEN) << per[i].name;
			cout << setiosflags(ios::left) << setw(SEX_LEN) << per[i].sex;
			cout << setiosflags(ios::left) << setw(ADD_LEN) << per[i].address;
			cout << setiosflags(ios::left) << setw(TEL_LEN) << per[i].tel_no;
			cout << setiosflags(ios::left) << setw(MAIL_LEN) << per[i].e_mail;
			cout << setiosflags(ios::left) << setw(GROUP_LEN) << per[i].group << endl;
		}
	}

}
//��ʾ������ϵ��
void show3(PER per[], int n)
{
	cout << "����    �Ա�   סַ   �绰  ��������  ���" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << setw(NAM_LEN) << per[i].name;
		cout << setw(SEX_LEN) << per[i].sex;
		cout << setw(ADD_LEN) << per[i].address;
		cout << setw(TEL_LEN) << per[i].tel_no;
		cout << setw(MAIL_LEN) << per[i].e_mail;
		cout << setw(GROUP_LEN) << per[i].group << endl;
	}
}
