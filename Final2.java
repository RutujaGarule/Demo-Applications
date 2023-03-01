
class Base
{
	public void fun()
	{
		System.out.println("base fun");
	}
	public final void gun()
	{
		System.out.println("base gun");
	}
}

class Derived extends Base
{
	public void fun()
	{
		System.out.println("derived fun");
	}
	public void gun()
	{
		System.out.println("derived gun");
	}
}

class Final2
{
	public static void main(String a[])
	{
		Base bobj = new Derived();
		
	}
}