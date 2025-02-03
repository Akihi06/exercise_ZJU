/*
#include <stdio.h>

int main() 
{
    char ch;
    while ((ch = getchar())!= '\n') 
	{
        if (ch!='') {
            putchar(ch);
        } 
		else {
            putchar('\n');
        }
    }
    putchar('\n');
    return 0;
}

*/
/*
#include<stdio.h>
int main()
{
	string str,s;
	int q;
	scanf("%d",&q);
	getchar();
	
	
	
	return 0;
 } 

*/


/*    homework1_A

#include<stdio.h>
int main()
{
	int n;
	float t;
	scanf("%f %d",&t,&n);
	printf("%.3f\n",t*1.0/n);
	printf("%d\n",2*n);
	return 0;
 } 
*/


//homework1_B
/*
#include<stdio.h>
#include<math.h>
int main()
{
	int t,T;
	double s=0;
	double v=0;
	scanf("%lf %lf",&s,&v);
	t=ceil(s/v)+10;
	int HH,MM;
	//8*60=480
	if(t<=480)
	{
		T=480-t;
		HH=T/60;
		MM=T%60;
	}
	else
	{
		T=24*60-(t-8*60);
		HH=T/60;
		MM=T%60;
	}
	printf("%02d:%02d",HH,MM);
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{	double s,v;
	int n,h,t,m;
	cin>>s>>v;
	n=8*60+24*60;   //学习这种思路 
	t=ceil(s/v)+10;
	n=n-t;
	if(n>=24*60)
		n-=24*60;
	m=n%60;
	h=n/60;
	printf("%02d:%02d",h,m);
	
	return 0;
}

*/

//homework1_C
/*
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if((n%4==0 && n%100!=0)||n%400==0)
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}
	return 0;
 } 
*/


//homework1_D

/*
#include<stdio.h>
int main()
{
	int month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int y,m;
	scanf("%d %d",&y,&m);
	if((y%4==0 && y%100!=0)||y%400==0)
	{
		month[2]=29;
	}
	printf("%d",month[m]);
	
	return 0;
 } 
 
*/


//homework1_E
/*
#include<stdio.h>
int main()
{
	char isbn[14];
	//scanf("%s",isbn);
	int sum = 0;
	int n = 0;
	int num = 1;

	while (((isbn[n++] = getchar()) != '\n') && (n < 13) && (isbn[n] != EOF));
	isbn[13] = '\0';           //有疑问 

	for (int i = 0; i <= 10; i++)
	{
		if (isbn[i] == '-') {     //注意是连等号 
			continue;
		}

		sum += num * (isbn[i] - '0');
		num++;
	}

	int checkdigit = sum % 11;
	if (sum % 11 == 10) {
		checkdigit = 'X';
	}
	else {
		checkdigit = checkdigit + '0';
	}

	if (checkdigit == isbn[12]) {
		printf("Right\n");
	}


	else {
		isbn[12] = checkdigit;
		printf("%s", isbn);
	}

	return 0;
}


*/

//homework1_F
/*
#include<stdio.h>
int main()
{
	int n;
	int num = 1;
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n-i;j++){
			printf("%02d",num++);
		}
		printf("\n");
	}
	
	return 0;
 } 


*/


//homework1_G
/*
#include<stdio.h>
int main()
{
	int n,x;
	int sum=0;
	scanf("%d %d",&n,&x);
	 
	for(int i=1;i<=n;i++){
		int m;
		m=i;
		while(m){
			if((m%10)==x){
				sum++;
			}
			m/=10;
		}
	}
	printf("%d",sum);
	
	
	return 0;
}
*/

//homework1_G_change 

#include<stdio.h>
int main()
{
	int n,x;
	scanf("%d %d",&n,&x);
	
	int num[13]; //0-9十个数字 
	for(int i=1;i<=n;i++){
		int m;
		m=i;
		while(m){
			num[m%10]++;
			m/=10;
		}
	}
	printf("%d",num[x]);
	
	
	return 0;
}










