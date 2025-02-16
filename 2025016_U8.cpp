//U8


//void sum_diff( float op1, float op2, float *psum, float *pdiff )
//{
//    *psum = op1+op2;
//    *pdiff = op1-op2;
//}


//void Shift( char s[] )
//{
//    char a[3];
//    int i,n;
//    for(i=0;i<3;i++)a[i]=s[i];
//    n=strlen(s);
//    for(i=3;i<n;i++)s[i-3]=s[i];
//    s[n-3]=a[0];
//    s[n-2]=a[1];
//    s[n-1]=a[2];
//}



//void splitfloat( float x, int *intpart, float *fracpart )
//{
//    *intpart=(int)x;
//    *fracpart=x-*intpart;
//}



//int search( int list[], int n, int x )
//{
//    int i,search=-1;
//    for(i=0;i<n;i++)
//	{
//        if(list[i]==x)
//		{
//           search=i;
//           break;
//        }
//    }
//    return search;
//}



//void ArrayShift( int a[], int n, int m )
//{
//    m=m%n;
//    int i,b[n];
//    for(i=0;i<=m-1;i++)b[i]=a[n-m+i]; 
//    for(i=m;i<=n-1;i++)b[i]=a[i-m];
//    for(i=0;i<n;i++)a[i]=b[i];
//}



//void CountOff(int n,int m,int out[])
//{
//    int count=0,cnt=1,i;
//    for (i=0;i<n;i++)out[i]=0;            //学习这里 
//    while (cnt<=n)
//	{
//        for (i=0;i<n;i++)
//		{
//            if (!out[i])count++;
//            if (count==m)
//			{
//                out[i]=cnt;
//                cnt++;
//                count = 0;
//            }
//        }
//    }
//}





//void strmcpy( char *t, int m, char *s )
//{
//    int i, j;
//    for (i=0; t[i]!='\0'; i++);   //有分号：循环体为空，作用是找到字符串的长度i 
//    if (m>i) s[0] = '\0';
//    else 
//	{
//        i = 0; j = m-1;         //注意是m-1 
//        while (t[j]!='\0')
//            s[i++] = t[j++];
//        s[i] = '\0';
//    }
//}



void delchar( char *str, char c )
{
    int i=0,j=0;
    while(str[i]!='\0')
	{
        if(str[i]!=c)
		{
            str[j]=str[i];
            j++;
        }
        i++;        //等于c就跳过了，直接i++继续 
    }
    str[j]='\0';
}




bool palindrome( char *s )
{
    int len = strlen(s);
    for(int i = 0;i <=len/2;i++)
        if(s[i] != s[len-i-1]) return false;
    return true;
}




void StringCount( char *s )
{
    int digit=0,A_letter=0,a_letter=0,blank=0,other=0;
    int i=0;
    for(i=0;s[i]!='\0';i++)
	{
        if(s[i]>='A'&&s[i]<='Z')
            A_letter++;
        else if(s[i]>='a'&&s[i]<='z')
            a_letter++;
        else if(s[i]>='0'&&s[i]<='9')
            digit++;
        else if(s[i]==' ')
            blank++;
        else other++;
    }
    printf("%d %d %d %d %d",A_letter,a_letter,blank,digit,other);
}










