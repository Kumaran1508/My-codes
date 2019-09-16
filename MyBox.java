import java.util.Scanner;
class MyBox
{
	public static void main(String args[])
	{
		Scanner get=new Scanner(System.in);
		double x,y,z;
		System.out.print("\nEnter the length of the box : ");
		x=get.nextDouble();
		System.out.print("\nEnter the breadth of the box : ");
		y=get.nextDouble();
		System.out.print("\nEnter the height of the box : ");
		z=get.nextDouble();
		box dabba=new box(x,y,z);
		dabba.v=dabba.volume();
		System.out.print("\nThe volume of the box is "+dabba.v);
	}
}
class box
{
	double l,b,h,v;
	box(double a,double r,double c)
	{
		l=a;
		b=r;
		h=c;
	}
	double volume()
	{
		return  l*b*h;
	}
}