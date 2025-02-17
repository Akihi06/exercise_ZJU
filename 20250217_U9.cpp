//U9



//#include <stdio.h>
//struct time 
//{
//    int h, m, s;
//} T;
//int main()
//{
//    int n;
//    scanf("%d:%d:%d\n", &T.h, &T.m, &T.s);
//    scanf("%d", &n);
//    T.s += n;
//    if (T.s >= 60) 
//	{
//        T.s -= 60;
//        T.m++;
//        if (T.m >=60) 
//		{
//            T.m -= 60;
//            T.h++;
//            if (T.h==24) T.h = 0;
//        }
//    }
//    printf("%02d:%02d:%02d\n", T.h, T.m, T.s);
//    return 0;
//}




//#include <stdio.h>
//struct Vec 
//{
//    double x, y;
//};
//int main()
//{
//    struct Vec v1, v2;
//    double x,y;
//    scanf("%lf %lf %lf %lf", &v1.x, &v1.y, &v2.x, &v2.y);
//    x = v1.x + v2.x;
//    y = v1.y + v2.y;
//    if ((x>-0.05) && (x<0)) x = 0.0;
//    if ((y>-0.05) && (y<0)) y = 0.0;
//    printf("(%.1f, %.1f)", x, y);
//    return 0;
//}



//#include <stdio.h>
//#include <string.h>
//struct Book
//{
//    double price;
//    char name[31];
//};
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    struct Book book[n];
//    int i,max = 0,min = 0;
//    for(i=0; i<n; i++)
//	{
//        getchar();
//        gets(book[i].name);
//        scanf("%lf",&book[i].price);
//        if(book[i].price>book[max].price)max = i;
//        if(book[i].price<book[min].price)min = i;
//    }
//    printf("%.2lf, %s\n",book[max].price,book[max].name);
//    printf("%.2lf, %s\n",book[min].price,book[min].name);
//    return 0;
//}




//#include <stdio.h>
//#include <stdlib.h>
//struct friends 
//{
//	char name[11];
//	int birth;
//	char tele[18];
//} friend[11];
//
//void sort(struct friends friend[],int n)
//{
//	struct friends temp;
//	for(int i=0;i<n;i++)
//	{
//		for(int j=i+1;j<n;j++)
//		{
//			if(friend[i].birth>friend[j].birth)
//			{
//				temp=friend[i];
//				friend[i]=friend[j];
//				friend[j]=temp;
//			}
//		}
//	}
//}
//
//int main() 
//{
//	int n, i;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++) 
//	{
//		getchar();        //读取并丢弃输入一排后留在缓冲区的换行符\n，防止scanf停止读取 
//		                  //112行scanf输入n后，换行符留在缓冲区 
//		scanf("%s%d%s", friend[i].name, &friend[i].birth, friend[i].tele);//name和birth是数组名，所以不用取地址 
//	}
//	sort(friend, n);
//	for (i = 0; i < n; i++) printf("%s %d %s\n", friend[i].name, friend[i].birth, friend[i].tele);
//	return 0;
//}



//struct complex multiply(struct complex x, struct complex y)
//{
//    struct complex multiply;
//    multiply.real=x.real*y.real-x.imag*y.imag;
//    multiply.imag=x.real*y.imag+y.real*x.imag;
//    return multiply;
//}




int set_grade( struct student *p, int n )
{
    int i,cnt=0;
    for(i=0;i<n;i++)
	{
        if(p->score>=85)p->grade='A';
        else if(p->score<85&&p->score>=70)p->grade='B';
        else if(p->score<70&&p->score>=60)p->grade='C';
        else 
		{
            p->grade='D';
            cnt++;
        }
        p++;
    }
    return cnt;
}





















