import java.util.*;

public class ExceptionH{
	public static void main(String[] args){
		int a=10;
	int b=0;
	try{
		int c= a/b;
		System.out.println("The answer of the division is: "+c);
	}
	catch (Exception e){
		System.out.println(e);
	}
	}
}
