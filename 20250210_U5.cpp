//U5
//int sum( int m, int n ){
//    int sum;
//    sum=(m+n)*(n-m+1)/2;
//    return sum;
//}


//int max( int a, int b ){
//    return (a>b)? a:b;
//}


//void CharPyramid( int n, char ch )
//{
//	int i,j;
//	for(i=1;i<=n;i++)
//	{
//		for(j=0;j<n-i;j++)printf(" ");
//		for(j=0;j<i;j++)printf("%c ",ch);
//		printf("\n");
//	}
//}



//int sign(int x){  
//    int y;
//    if(x > 0)  y = 1;
//    else if(x == 0) y = 0;
//    else y = -1;
//    return y;
//}


//int even( int n ){
//    int even;
//    if(n%2==0)even=1;
//    else even=0;
//    return even;
//}
//int OddSum( int List[], int N ){
//    int OddSum=0;
//    for(int i=0;i<N;i++)
//        if(!even(List[i]))
//            OddSum+=List[i];
//    return OddSum;
//}


//double dist (double x1, double y1 , double x2 , double y2){
//	double distant;
//	distant=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
//	return distant;
//}



//int prime( int p ){
//	
//    int prime;
//    if(p<=1)prime=0;
//    else if(p==2)prime=1;
//    else
//	{
//        int i;
//        prime=1;
//        for(i=2; i<=sqrt(p);i++)
//            if(p % i ==0)
//			{
//                prime=0;
//                break;
//            }
//    }
//    return prime;
//}
//int PrimeSum( int m, int n )
//{
//	int Sum = 0;
//	for (int i = m; i <= n; i++)if (prime(i))Sum = Sum + i;
//	return Sum;
//}



//int CountDigit( int number, int digit )
//{
//	if(number<0)
//	    number =-number;
//    if(number==0)
//	{
//        if(digit==0) return 1;
//        else return 0;
//    }
//	int r,count=0;
//	while(number)
//	{
//        r=number%10;
//	    if(r==digit)
//	        count++;
//	    number/=10;
//	}
//	return count;
//}





//int narcissistic( int number )
//{	
//	int remainder,sum=1,allsum=0;
//	int x,count=0,end=1;  //��ʼ��
//	
//	x=number;
//	while(x!=0)
//	{	
//		x=x/10;
//		count++; //������λ��N 
//	}	
//	
//	x=number; //��ʼ��x��ֵ ����while������x�仯 
//	while(x!=0)
//	{	
//		remainder=x%10;
//		for(end;end<=count;end++)
//		{
//			sum*=remainder;
//		}
//		allsum+=sum;
//		x=x/10;
//		end=1; 
//		sum=1; //��ʼ��end sum ��ֵ������ѭ��������ѭ�� end��ֵ���ĺܴ� sumҲ��
//	}	
//	
//	if(allsum==number)
//	{	
//		return 1;
//	}else
//	{
//		return 0;	
//	}
//}
// 
//void PrintN( int m, int n )
//{	
//	m=m+1;     //����֮ǰʹ��int M N  ʹ��M=m+1 n=n ��Ϊm��n����仯 ���ҵĵ������⣿��  ����ȷʵ�е����� 
//	for(m;m<n;m++)     //ͬһ������ �½�һ��Դ�ļ��Ժ�Ϳ�����
//	{                               //ǰ��֮����ʹ��x=number ����Ϊ������Ҫ����number��ֵ�����ﲻ��Ҫ���� ����int M N
//		if(narcissistic( m )==1)
//			printf("%d\n",m);
//	}
//}




//
//double funcos(double e,double x){
//	int flag=-1;
//	double item=1,i=2,funcos=1;
//	double denominator=1,numerator=1;
//	while(item>e)
//{
//		denominator*=(i-1)*i;
//		numerator*=x*x;
//		item=numerator/denominator;
//		funcos+=flag*item;
//		i=i+2;
//		flag=-flag;
//	}
//	return funcos;
//}


void hollowPyramid ( int n )
{
	int i,j;
	for(i=1;i<n;i++)
	{
		for(j=n;j>i;j--)
            {
            	printf(" ");
			}
		printf("%d",i);
		if(i!=1)
		{
		    for(j=1;j<=1+2*(i-2);j++)
                {
            		printf(" ");
				}
		    printf("%d",i);
        }
		printf("\n");
	}
	for(i=1;i<2*n;i++)
	{	
		printf("%d",n);
	}
}



























