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
//			//switch允许嵌套使用
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
//		 printf("工作日\n");
//			 break;
//	 case 6:
//	 case 7:
//		 printf("休息日\n");
//			 break;
//	 default:
//		 printf("输入错误\n");
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
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
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
//	int i = 1;       //while输出1~100之间的奇数
//	while (i <= 100)
//	{
//		if (i% 2 == 1)
//			printf("%d ", i);
//		i++;
//
//	}
//	return 0;
//}



//int main()    //输出1~100之间的奇数
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
//	if (5 == num)    //比下面的代码好，不容易错误
//	{
//		printf("呵呵\n");
//	}
//	
//
//	//if (num = 5)//=赋值==判断相等
//	//{
//	//	printf("呵呵\n");
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
//		printf("未成年\n");
//	else if(age>=18 && age<28)
//		printf("青年\n");
//	else if(age>=28 && age<50)
//		printf("壮年\n");
//	else if (age>=50&& age<90)
//		printf("老年\n");
//
//
//	/*if(age<18)
//		printf("未成年\n");
//	else
//		printf("成年\n");*/
//	
//	
//	/*if (age < 18)
//	printf("未成年\n");*/
//	return 0;
//}