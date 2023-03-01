
class Base
{
	public int A,B;
	public Base()
	{
		System.out.println("base constructor");
		this.A = 10;
		this.B = 20;
	}
	public void fun()
	{
		System.out.println("inside base fun");
	}
	public void gun()
	{
		System.out.println("inside base gun");
	}
	public void fun(int No)
	{
		System.out.println("inside base fun with one integer");
	}
}

class Derived extends Base
{
	public int X,Y;
	public Derived()
	{
		System.out.println("derived constructor");
		this.X = 30;
		this.Y = 40;
	}
	public void sun()
	{
		System.out.println("inside derived sun");
	}
	public void gun()
	{
		System.out.println("inside derived gun");
	}
}

class Single
{
	public static void main(String arg[])
	{
		//Base bobj1 = new Base();
		//Derived dobj1 = new Derived();
		Base bobj2 = new Derived();
		// Derived dobj2 = new Base();		
		
		bobj2.fun();
		bobj2.fun(11);
		bobj2.gun();
		//bobj2.sun();
	}
}