import java.util.Scanner;

class bingo
{
	static int box1[][]=new int[5][5];
	static int box2[][]=new int[5][5];
	//box1[][]= {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}}
	static int game=1;
	
	public static void main(String args[])
	{
		int n,t=1;
		Scanner get=new Scanner(System.in);
		System.out.print("\nPlayer 1 Enter your Bingo box\n");
		get(box1);
		disp(box1);
		
		System.out.print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		System.out.print("\nPlayer 2 Enter your Bingo box\n");
		get(box2);
		disp(box2);
		
		System.out.print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		while(game!=0)
		{
			if(t%2!=0)
				{
				disp(box1); 
				System.out.print("\n Player 1 Turn : ");
				}
			else
				{
				disp(box2); 
				System.out.print("\n Player 2 Turn : ");
				}
			n=get.nextInt();
			strike(n);
			if(t%2!=0)
				disp(box1);
			else
				disp(box2);
			count();
			System.out.print("\n\n\n\n\n\n\n\n\n\n Enter 0 to continue...  ");
			n=get.nextInt();
			System.out.print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			t++;
		}
	}
	
	static void disp(int[][] box)
	{
		int n;
		Scanner get=new Scanner(System.in);
		for(int i=0;i<5;i++)
		{
			System.out.print("\n");
			for(int j=0;j<5;j++)
			{
				System.out.print(box[i][i]+"  ");
			}
		}
		System.out.print("\n Enter 0 to continue...  ");
		n=get.nextInt();
	}
	
	static void get(int[][] box)
	{
		Scanner get=new Scanner(System.in);
		for(int i=0;i<5;i++)
		{
			//System.out,print("\n");
			for(int j=0;j<5;j++)
			{
				//System.out.print("\nEnter number ["+i+"]["+j+"] : ");
				box[i][j]=i*5+j+1;
			}
		}
	}
	
	static void strike(int n)
	{
		for(int i=0;i<5;i++)
		{
			//System.out,print("\n");
			for(int j=0;j<5;j++)
			{
				if(box1[i][j]==n)
				{
					box1[i][j]=0;
				}
				if(box2[i][j]==n)
				{
					box2[i][j]=0;
				}
			}
		}
	}
	
	static void count()
	{
		int s1=0;
		int s2=0;
		for(int i=0;i<5;i++)
		{
			if(box1[i][0]==0 && box1[i][1]==0 && box1[i][2]==0 && box1[i][3]==0 && box1[i][4]==0)
				s1++;
			if(box1[0][i]==0 && box1[1][i]==0 && box1[2][i]==0 && box1[3][i]==0 && box1[4][i]==0)
				s1++;
			if(box2[i][0]==0 && box2[i][1]==0 && box2[i][2]==0 && box2[i][3]==0 && box2[i][4]==0)
				s2++;
			if(box2[0][i]==0 && box2[1][i]==0 && box2[2][i]==0 && box2[3][i]==0 && box2[4][i]==0)
				s2++;
		}
		if(box1[0][0]==0 && box1[1][1]==0 && box1[2][2]==0 && box1[3][3]==0 && box1[4][4]==0)
			s1++;
		if(box1[0][4]==0 && box1[1][3]==0 && box1[2][2]==0 && box1[3][1]==0 && box1[4][0]==0)
			s1++;
		if(box2[0][0]==0 && box2[1][1]==0 && box2[2][2]==0 && box2[3][3]==0 && box2[4][4]==0)
			s2++;
		if(box2[0][4]==0 && box2[1][3]==0 && box2[2][2]==0 && box2[3][1]==0 && box2[4][0]==0)
			s2++;
		System.out.print("\n"+s1+"   "+s2);
		if(s1>4)
			{
			 System.out.println("\nPlayer 1 BINGO!");
			 game=0;
			}
		if(s2>4)
			{
			 System.out.println("\nPlayer 2 BINGO!");
			 game=0;
			}
	}
	
	
}

