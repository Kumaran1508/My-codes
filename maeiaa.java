import java.util.Scanner;
class maeiaa
{
	public  static void main(String args[])
	{
		Scanner get=new Scanner(System.in);
		int n;
		System.out.print("\nEnter number of elements in the array");
		n=get.nextInt();
		int  max,loc;
		int arr[]=new int[n];
		int cnt[]=new int[n];
		
		for(int i=0;i<arr.length;i++)
		{
			System.out.print("\nEnter element "+i+": ");
			arr[i]=get.nextInt();
		}
		
		for(int i=0;i<arr.length;i++)
		{
			cnt[i]=1;
			for(int j=i+1;j<arr.length;j++)
			{
				if(arr[i]==arr[j])
				{
					cnt[i]++;
				}
			}
		}
		max=cnt[0];
		loc=0;
		for(int i=1;i<arr.length;i++)
		{
			if(cnt[i]>max)
			{
				max=cnt[i];
				loc=i;
			}
		}
		System.out.print("The most occured element(s) is(are) ");
		for(int i=1;i<arr.length;i++)
		{
			if(cnt[i]>=max)
			{
				System.out.print(arr[i]+" , ");
			}
		}
	}
}