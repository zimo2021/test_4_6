//#define _CRT_SECURE_NO_WARNINGS
//#include "contact.h"
////int cmp_name(const void* e1, const void* e2)
////{
////	return strcmp((struct cotact*)e1, (struct contact*)e2);
////}
//static int findname(struct contact* ps,char name[max_name])
//{
//	int i = 0;
//	for (i = 0; i < ps->size; i++)
//	{
//		if (strcmp(name, ps->date[i].name) == 0)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//void init_contact(struct contact* ps)
//{
//	memset(ps->date, 0, sizeof(ps->date));
//	ps->size = 0;
//}
//void addcontact(struct contact* ps)
//{
//	printf("������");
//	scanf("%s", ps->date[ps->size].name);//name������ ���Բ���&
//	printf("���䣺");
//	scanf("%d", &ps->date[ps->size].age);//age������ Ҫ��&
//	printf("�Ա�");
//	scanf("%s", ps->date[ps->size].sex);
//	printf("�绰��");
//	scanf("%s", ps->date[ps->size].tele);
//	printf("��ַ��");
//	scanf("%s", ps->date[ps->size].addr);
//	ps->size++;
//}
//void showcontact(const struct contact* ps)
//{
//	int i = 0;
//	printf("%-10s\t%-10s\t%-10s\t%-20s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
//	if (ps->size == 0)
//	{
//		printf("ͨѶ¼Ϊ��!\n");
//	}
//	for (i = 0; i < ps->size; i++)
//	{
//			printf("%-10s\t%-10d\t%-10s\t%-20s\t%-20s\n"
//				, ps->date[i].name
//				, ps->date[i].age
//				, ps->date[i].sex
//				, ps->date[i].tele
//				, ps->date[i].addr);
//	}
//	
//}
//void delcontact(struct contact* ps)
//{
//	char name[max_name];
//	printf("������Ҫɾ���ߵ�������");
//	scanf("%s", name);
//	int ret = findname(ps,name);
//	if (ret == -1)
//	{
//		printf("ͨѶ¼���޴��ˣ�\n");
//	}
//	else
//	{
//		int j = 0;
//		for (j = ret; j < ps->size - 1; j++)
//		{
//			ps->date[j] = ps->date[j + 1];
//		}
//		ps->size--;
//	}
//}
//void searchcontact(const struct contact* ps)
//{
//	char name[max_name];
//	printf("������Ҫ������ϵ�˵�������");
//	scanf("%s", name);
//	int i= findname(ps, name);
//	printf("%-10s\t%-10s\t%-10s\t%-20s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
//	printf("%-10s\t%-10d\t%-10s\t%-20s\t%-20s\n"
//		, ps->date[i].name
//		, ps->date[i].age
//		, ps->date[i].sex
//		, ps->date[i].tele
//		, ps->date[i].addr);
//}
//void modifycontact(struct contact* ps)
//{
//	printf("������Ҫ�޸ĵ���ϵ�˵�������");
//	char name[max_name];
//	scanf("%s", name);
//	int i = findname(ps, name);
//	printf("������");
//	scanf("%s", ps->date[i].name);//name������ ���Բ���&
//	printf("���䣺");
//	scanf("%d", &ps->date[i].age);//age������ Ҫ��&
//	printf("�Ա�");
//	scanf("%s", ps->date[i].sex);
//	printf("�绰��");
//	scanf("%s", ps->date[i].tele);
//	printf("��ַ��");
//	scanf("%s", ps->date[i].addr);
//}
////void qsort (void* base, size_t num, size_t size,
////int(*compar)(const void*, const void*));
////typedef struct stu
////{
////	char name[10];
////	int age;
////}stu;
//int cmp_name(struct lis ps,struct lis ps1)
//{
//	return strcmp(ps.name, ps1.name);
//}
//void my_sort(struct contact* ps)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < ps->size-1; i++)
//	{
//		for (j = 0; j < ps->size-1-i; j++)
//		{
//			int ret = cmp_name(ps->date[j],ps->date[j+1]);
//			if (ret > 0)
//			{
//				//����
//				struct lis tmp;
//				tmp = ps->date[j+1];
//				ps->date[j + 1] = ps->date[j];
//				ps->date[j] = tmp;
//			}
//		}
//	}
//}
//void sortcontact(struct contact* ps)
//{
//	//ʹ�ÿ⺯��
//	//qsort(ps->date, ps->size, sizeof(ps->date[0]), cmp_name);//�ɹ� 
//	//�Լ����һ�����ຯ��
//	my_sort(ps);//�ɹ���
//}
//void clearcontact(struct contact* ps)
//{
//	init_contact(ps);
//}