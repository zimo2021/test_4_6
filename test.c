//#define _CRT_SECURE_NO_WARNINGS
//#include "contact.h"
////����Ŀ��ͨѶ¼��ʵ��
//void menu()
//{
//	printf("**************************************\n");
//	printf("***0.exit                     1.add***\n");
//	printf("***2.del                   3.search***\n");
//	printf("***4.modify                  5.show***\n");
//	printf("***6.sort                   7.clear***\n");
//	printf("**************************************\n");
//}
//int main()
//{
//	struct contact con;
//	//��ʼ��ͨѶ¼
//	init_contact(&con);
//	int input;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{ 
//		case 0:
//			printf("�˳��ɹ���\n");
//			break;
//		case 1:
//			addcontact(&con);
//			break;
//		case 2:
//			delcontact(&con);
//			break;
//		case 3:
//			searchcontact(&con);
//			break;
//		case 4:
//			modifycontact(&con);
//			break;
//		case 5:
//			showcontact(&con);
//			break;
//		case 6:
//			sortcontact(&con);
//			break;
//		case 7:
//			printf("����գ�\n");
//			clearcontact(&con);
//			break;
//		default:
//			printf("����������������룺\n");
//			break;
//		}
//			
//	} while (input);
//	return 0;
//}
