
class Demo
{
	public int iSize;
	public int Arr[];
	
	public Demo(int No)
	{
		System.out.println("Inside constructor");
		iSize = No;
		Arr = new int[iSize];
	}
	
	protected void finalize()
	{
		System.out.println("Inside finalize method");
		Arr = null;
	}
}

class FinalizeDemo
{
	public static void main(String a[])
	{
		Demo obj = new Demo(4);
		obj = null;
		System.gc();
	}
}