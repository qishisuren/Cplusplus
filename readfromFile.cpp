#include "head.h"
//��ȡ�ļ�
int readfromFile(PER per[])
{
	int i = 0;
	ifstream infile;
	infile.open("message.txt");
	if (infile.is_open())          //�ļ��򿪳ɹ�,˵������д�������  
	{
		while (infile.good() && !infile.eof())//�ļ���ȡ��������û�е��ļ�ĩβ
		{
			infile >> per[i].name >> per[i].sex >> per[i].address >> per[i].tel_no >> per[i].e_mail >> per[i].group;
			i++;
		}
		infile.close();
	}
	else cout << "��ȡʧ��";
	return i;//����ֵΪ���ļ��ж�ȡ��������ϵ�˸���
}