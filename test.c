//#define _CRT_SECURE_NO_WARNINGS
//#include "contact.h"
////大项目：通讯录的实现
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
//	//初始化通讯录
//	init_contact(&con);
//	int input;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{ 
//		case 0:
//			printf("退出成功！\n");
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
//			printf("已清空！\n");
//			clearcontact(&con);
//			break;
//		default:
//			printf("输入错误，请重新输入：\n");
//			break;
//		}
//			
//	} while (input);
//	return 0;
//}
