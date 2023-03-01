
import java.io.*;

class CreateFile
{
	public static void main(String a[]) throws Exception
	{
		File fobj = new File("Marvellous.txt");
		
		if(fobj.createNewFile())
		{
			System.out.println("File created successfully\n");
		}
		else
		{
			System.out.println("Unable to create file\n");
		}
	}
}