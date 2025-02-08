//U3
#define _CRT_SECURE_NO_WARNINGS 1
//U3
/*
#include<stdio.h>
int main()
{
	int n,sign;
	scanf("%d",&n);
	if(n<0) sign=-1;
	if(n==0) sign=0;
	if(n>0) sign=1;
	printf("sign(%d) = %d",n,sign);

	return 0;
 }
 */

//#include<stdio.h>
//int main()
//{
//	int N,score,count=0;
//	float sum=0, average;
//	scanf("%d", &N);
//	if (N == 0) {
//		printf("average = 0.0\n");
//		printf("count = 0\n");
//	}
//	else {
//		for (int i = 0; i < N; i++) {
//			scanf("%d", &score);
//			sum += score;
//			if (score >= 60) count++;
//		}
//		average = sum / N;
//		printf("average = %.1f\n", average);
//		printf("count = %d\n", count);
//	}
//
//
//	return 0;
//}



//
///*ans1*/
//#include<stdio.h>
//int main()
//{
//	int i, letter = 0, blank = 0, digit = 0, other = 0;
//	char ch;
//	for (i = 0; i <= 9; i++)
//	{
//		ch = getchar();
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))letter++;
//		else if ((ch == ' ') || (ch == '\n'))blank++;
//		else if (ch >= '0' && ch <= '9')digit++;
//		else other++;
//	}
//	printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
//	return 0;
//}
//
///*ans2*/
//#include<stdio.h>
//int main()
//{
//	char s[15];
//	int i, letter = 0, blank = 0, digit = 0, other = 0;
//	int n = 0;
//	s[10] = '\0';
//	while ((s[n++] = getchar()) != '\0'&&n<=9);
//	s[10] = '\0';
//	for (i = 0; i <= 9; i++)
//	{
//		
//		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))letter++;
//		else if ((s[i] == ' ') || (s[i] == '\n'))blank++;
//		else if (s[i] >= '0' && s[i] <= '9')digit++;
//		else other++;
//	}
//	printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
//	return 0;
//}
//
//


//#include<stdio.h>
//int main()
//{
//	int n;
//	int ans = 0;
//	scanf("%d", &n);
//	if (n <= 2000 || n>2100) {
//		printf("Invalid year!");
//	}
//	else
//	{
//		for (int i = 2001; i <= n; i++)
//		{
//			if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//			{
//				printf("%d\n", i);
//				ans++;
//			}
//		}
//		if (ans == 0) {
//			printf("None");
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int x;
//    scanf("%d", &x);
//    switch (x / 10) {
//    case 10:printf("A"); break;
//    case 9:printf("A"); break;
//    case 8:printf("B"); break;
//    case 7:printf("C"); break;
//    case 6:printf("D"); break;
//    default:printf("E");
//    }
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int choice =0;
//	int count = 5;
//	printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n"); 
//
//	while(count--)
//	{
//		scanf("%d",&choice);
//		switch(choice)
//		{
//			case 0:break;
//			case 1:printf("price = 3.00\n");
//				break;
//			case 2:printf("price = 2.50\n");
//				break;
//			case 3:printf("price = 4.10\n");
//				break;
//			case 4:printf("price = 10.20\n");
//				break;
//			default:printf("price = 0.00\n");
//				break;
//		}
//		if(choice==0)break;
//		
//	 } 
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a,b,c;
//	int t;
//	
//	scanf("%d %d %d",&a,&b,&c);
//	
//	if(a>b){t=a;a=b;b=t;}
//	if(a>c){t=a;a=c;c=t;}
//	if(b>c){t=b;b=c;c=t;}
//	printf("%d->%d->%d\n",a,b,c);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int v,limit;
//	double exceed;
//	
//    scanf("%d %d",&v,&limit);
//    
//    exceed=(v-limit)*100.0/limit;
//    if(exceed>=50)printf("Exceed %.f%%. License Revoked",exceed);
//    else if(exceed>=10)printf("Exceed %.f%%. Ticket 200",exceed);
//    else printf("OK");
//	
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	double mileage;
//    int time,pay;
//    scanf("%lf %d",&mileage,&time);
//    if(mileage<=3)pay=10;
//    else if(mileage<=10)pay=10+2*(mileage-3)+0.5;/*0.5  四舍五入*/
//    else pay=24+(mileage-10)*3+0.5;
//    pay+=time/5*2;
//    printf("%d", pay);
//
//	return 0;
//}



//#include<stdio.h>
//int main(){
//    int n,i,grade,a=0,b=0,c=0,d=0,e=0;
//    scanf("%d",&n); 
//    for(i=1;i<=n;i++){
//        scanf("%d",&grade);
//        switch (grade/10){
//            case 10: 
//            case 9:a++;break;
//            case 8:b++;break;
//            case 7:c++;break;
//            case 6:d++;break;
//            default:e++;break;
//        }
//    }
//    printf("%d %d %d %d %d",a,b,c,d,e);
//    return 0;
//}


#include<stdio.h>
#include<math.h>
int main(){
    double x1,y1,x2,y2,x3,y3,p,s;
    double j,k,l;
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
    j=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    k=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    l=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    if(j+k>l&&k+l>j&&j+l>k){
        p=(j+k+l)/2;
        s=sqrt(p*(p-j)*(p-k)*(p-l));//海伦公式
        printf("L = %.2lf, A = %.2lf",p*2,s);
    }
    else printf("Impossible");
    return 0;
}




















































