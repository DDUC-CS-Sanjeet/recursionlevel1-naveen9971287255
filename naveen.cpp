#include<iostream>
using namespace std ;
int gcd (int x, int y)
{
	 if (y != 0)
       return gcd(y, x % y);
    else 
       return x ;
}
int GCD (int i, int j )
{    
	while(i!=j)
	{
	   if(i<j)
	   {j=j-i;
	   }
	   else
	   {
	   	i=i-j;
	   }
	}
	
}
int fib (int m)
{
	if (m==1||m==0)
	return (m);
	else
	return(fib(m-2)+fib(m-1)) ;
}
int FIB (int k)
{
	int num, first = 0,second=1,next;
	cout<< " enter the number of terms to be printed : " ;
	cin>> num ;
	for (int i=0;i<num;i++)
	{
		cout<< first<<endl;
		next =  first + second;
		first = second ;
		second = next ;
	}
}
int fact(int n)
{
	if((n==0)||(n==1))
	return 1 ;
	else
	return n*fact(n-1);
}
int FACT ( int l)
{int num;
cout<< " enter the number : "<<endl ;
cin>> num ;
	int fact=1;
	for( int i=1;i<=num;i++){
		fact=fact*i;
	}
	cout<< " factorial using iteration is : "<< fact ;
	
}
int pow(int a,int b)
{
	if(b==1)
	return a;
	else{
		return a*pow(a,b-1);
	}
}
int POW(int c, int d)
{
	int result = c;
	for(int i=1;i<d;i++)
	{
		result=result*c;
	}
	return result;
}
int main ()
{int x, y ;
		cout<<" enter the values of x and y :"<< endl;
	cin>> x>>y;
	cout<< " gcd using recursion is : "<< 	gcd (x,y) <<endl ;
	cout<< " GCD using iteration is  : "<< GCD (x,y)<<endl;
	int num,i=0 ;
	cout<< " enter the no. of terms to be printed : "<<endl;
	cin>> num ;
	while(i<num)
	{
			cout<<" fibonacci using recursion is : "<< fib(i)<<endl;
			i++ ;
	}
    cout<< " fibonacci using iteration is: "<< FIB(i)<<endl ;
    int n ;
    	cout<<" enter the number : "<<endl ;
	cin>>n;
    cout<< " factorial using recursion is : "<< fact(n)<<endl;
    FACT (x);
    cout<< endl ;
    int a,b ;
    cout<< " enter base no. : "<< endl;
	cin>>a;
	cout<<" enter power value : "<<endl;
	cin>>b ;
    cout<< " power using recursion is : "<<pow(a,b);
    cout<< " power using iteration  is : "<<POW(a,b);
	return 0 ;
	
}
