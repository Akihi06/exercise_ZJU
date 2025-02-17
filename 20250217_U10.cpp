//U10

//int sum( int n )
//{
//    int Sum=0;
//    if(n<=0)return 0;
//    if(n==1)return 1;
//    else return Sum=n+sum(n-1);
//}



//int search(int n)
//{
//    int i,j,cnt = 0,a,b,c;
//    for(i = 101;i<n;i++)
//	{
//        a=i%10;
//        b=i/10%10;
//        c=i/100;
//        if(sqrt(i)==(int)sqrt(i))    //学习 
//            if(a==b||b==c||a==c)
//                cnt++;
//    }
//    return cnt;
//}




//double fact( int n )
//{
//    if(n==1||n==0)return 1;
//    else return n*fact(n-1);
//}
//
//double factsum( int n )
//{
//    int sum=0;
//    for(int i=1;i<=n;i++)
//        sum+=fact(i);
//    return sum;
//}




//double calc_pow( double x, int n )
//{
//    if(n==0)return 1;
//    else return x*calc_pow(x,n-1);
//}



//double fn(double x, int n)
//{
//    if (n == 1)return x;
//    else return fn(x,n-1)*(-x)+x;
//}



//int Ack( int m, int n )
//{
//    if(m==0)return n+1;
//    else if(m>0&&n==0)return Ack(m-1,1);
//    else if(m>0&&n>0)return Ack(m-1,Ack(m,n-1));
//}




//int f( int n )
//{
//    if(n==0)return 0;
//    else if(n==1)return 1;
//    else return f(n-1)+f(n-2);
//}




//void dectobin(int n)
//{
//    int re=0;
//    if(n==0)printf("0");
//    else if(n==1)printf("1");
//    else
//	{
//        dectobin(n/2);
//        re=n%2;
//        printf("%d",re);
//    }
//}



//void printdigits(int n)
//{
//    if (n >= 10)
//        printdigits(n / 10);
//    printf("%d\n", n % 10);
//}





int insert(int a[ ], int value) 
{
    int i, index, j;
    index = query(a, value);
    if(index != -1)return -1;
    else
	{
        for (i = 0; i < Count; i++)
            if(value < a[i])
                break;
        for(j = Count -1; j >= i; j--)
            a[j+1] = a[j];
        a[i] = value;
        Count++;
    }    
    return 0;
}


int del(int a[ ], int value) 
{
    int i, index; 
    index = query(a, value);
    if(index == -1)return -1;
    else
	{
        for(i = index; i < Count - 1; i++)
            a[i] = a[i+1];                     //学学这里的“删除选项” 
        Count --;
    }    
    return 0;
}

int modify(int a[ ], int value1, int value2)
{
    int index;
    index = query(a, value1);
    if(index == -1 || query(a, value2) != -1)
        return -1;
    else
	{
        del(a, value1);
        insert(a, value2);
    }
    return 0;
}

int query(int a[ ], int value) 
{
    int mid, left = 0, right = Count - 1;
    while (left <= right)
	{
        mid = (left + right) / 2;
        if (value == a[mid])return mid;
        else if (value < a[mid])right = mid - 1;
        else left = mid + 1;
    }    
    return -1;
}





































