import java.util.Scanner;
class dupelmnts
{
	public static void main(String args[])
	{
		Scanner get=new Scanner(System.in);
		int n;
		System.out.print("\nEnter number of elements in the array");
		n=get.nextInt();
		int arr[]=new int[n];
		int count=0;
		
		for(int i=0;i<arr.length;i++)
		{
			System.out.print("\nEnter element "+i+": ");
			arr[i]=
		}
		
		
		for(int i=0;i<arr.length;i++)
		{
			if(arr[i]!=-1)
			for(int j=i+1;j<arr.length;j++)
			{
				if(arr[i]==arr[j])
				{
					arr[j]=-1;
					count++;
				}
			}
		}
		
		
		for(int i=0;i<arr.length;i++)
		{
			leftshift(arr);
		}
		for(int i=0;i<(arr.length-count);i++)
		{
			//if(arr[i]!=-1)
			System.out.print(arr[i]+" ");
		}
		System.out.print("\n Length of the array after removing duplicate elements : "+count);
	}
	
	
	static void leftshift(int arr[])
	{
		for(int i=0;i<arr.length;i++)
		{
			if(arr[i]==-1)
			for(int j=i;j<arr.length-1;j++)
			{
				arr[j]=arr[j+1];
			}
		}
	}
}