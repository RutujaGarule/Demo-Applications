
class StaticDemo
{
	static
	{
		System.out.println("inside sattic block of staticDemo which contain main");
	}
	public StaticDemo()
	{
		System.out.println("inside constructor of StaticDemo");
	}
	public static void main(String arg[])
	{
		System.out.println("inside main");
		
		System.out.println("value of static No3 is :"+Demo.No3);
		System.out.println("value of static No4 is :"+Demo.No4);
		Demo.gun();
		
		Demo obj1 = new Demo();
		Demo obj2 = new Demo();
		
		obj1.fun();
	}

}

class Demo
{
	public int No1;
	public int No2;
	public static int No3;
	public static int No4;
	
	public Demo()
	{	System.out.println("inside constructor");
		No1 = 11;
		No2 = 21;
	}
	static 
	{	System.out.println("inside static block of Demo");
		No3 = 51;
		No4 = 101;
	}
	public void fun()
	{
		System.out.println("inside non static method fun");
		System.out.println("value of no1 is :"+this.No1);
		System.out.println("value of no2 is :"+this.No2);
		System.out.println("value of no3 is :"+this.No3);
		System.out.println("value of no4 is :"+this.No4);
	
	}
	public static void gun()
	{
		System.out.println("inside static method gun");
		//System.out.println("value of no1 is :"+No1);
		//System.out.println("value of no2 is :"+No2);
		System.out.println("value of no3 is :"+No3);
		System.out.println("value of no4 is :"+No4);
	}
}