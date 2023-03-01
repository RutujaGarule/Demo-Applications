
interface Ciecle
{
	float PI = 3.14f;
	
	float Area(float Radius);
	float Circumference(float Radius);
}

class Mervellous implements Circle
{
	public float Area(float Radius)
	{
		return PI * Radius * Radius;
	}
	public float Circumference(float Radius)
	{
		return 2 * PI * Radius;
	}
}

class InterfaceDemo
{
	public static void main(String a[])
	{
		System.out.printlm("value of PI is : " +Circle.PI);
		
	}
}