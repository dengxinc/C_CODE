#include <stdio.h>

int main()
{
	int i = 1;
	while (i <= 10)
	{  
		if (i == 5)
			break;
		printf("%d ", i);
		i++;
     }
	return 0;
} 






//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//
//	}
//	return 0;
//}


//int main()
//{
//	int n = 1;
//	++n;
//	printf("%d\n", n);
//	return 0;
//}
//
//

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//		switch (n)
//		{
//			//switch����Ƕ��ʹ��
//		case 1:n++;
//		case 2:m++, n++; break;
//
//
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d", m, n);
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	 case 1:
//	 case 2:
//	 case 3:
//	 case 4:
//	 case 5:
//		 printf("������\n");
//			 break;
//	 case 6:
//	 case 7:
//		 printf("��Ϣ��\n");
//			 break;
//	 default:
//		 printf("�������\n");
//			 break;
//			}
//	return 0;
//	}
//
//	


//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//}
//	return 0;
//}
//



//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//
//   }
//	return 0;
//}


//int main()
//{
//	int i = 1;       //while���1~100֮�������
//	while (i <= 100)
//	{
//		if (i% 2 == 1)
//			printf("%d ", i);
//		i++;
//
//	}
//	return 0;
//}



//int main()    //���1~100֮�������
//{
//	int i = 1;    
//    int p = 0;
//for (i = 1; i <= 100; i++)
//{
//	p=i % 2 ;
//	if (p == 1)
//		printf("%d ", i);
//	
//  }
//return 0;
//}







//int main()
//{
//	int num = 4;    
//	if (5 == num)    //������Ĵ���ã������״���
//	{
//		printf("�Ǻ�\n");
//	}
//	
//
//	//if (num = 5)//=��ֵ==�ж����
//	//{
//	//	printf("�Ǻ�\n");
//    //     }
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	    else
//		printf("haha\n");
//	return 0;
//}





//{
//	int age = 30;
//	if(age<18)
//		printf("δ����\n");
//	else if(age>=18 && age<28)
//		printf("����\n");
//	else if(age>=28 && age<50)
//		printf("׳��\n");
//	else if (age>=50&& age<90)
//		printf("����\n");
//
//
//	/*if(age<18)
//		printf("δ����\n");
//	else
//		printf("����\n");*/
//	
//	
//	/*if (age < 18)
//	printf("δ����\n");*/
//	return 0;
//}