import java.util.Scanner;
class calculator
{
	public static void main(String args[])
	{
		Scanner get=new Scanner(System.in);
		int n;
		System.out.print("\nEnter your choice: \n1.Raise power to a whole number\n2.Raise power to a decimal number\n");
		n=get.nextInt();
		switch(n)
		{
			case 1:int x,y,r;
				   System.out.print("\nEnter the base: ");
				   x=get.nextInt();
				   System.out.print("\nEnter the power: ");
				   y=get.nextInt();
				   r=calc.power(x,y);
				   System.out.println(" Power "+x+"^"+y+"="+r);break;

			case 2:double a,c;
				   int b;
			   	   System.out.print("\nEnter the base: ");
			   	   a=get.nextDouble();
			   	   System.out.print("\nEnter the power: ");
			   	   b=get.nextInt();
			   	   c=calc.pow(a,b);
			   	   System.out.println(" Duble "+a+"^"+b+"="+c);break;
			default:System.out.print("\n -------Wrong choice!-------");
				    main(null);
		}
	}
}
class  calc
{
	static int  power(int b,int p)
	{
		int res=1;
		for(int i=1;i<=p;i++)
		{
			res*=b;
		}
		return res;
	}
	static double pow(double b,int  p)
	{
		double res=1;
		for(int i=1;i<=p;i++)
		{
			res*=b;
		}
		return res;
	}
}