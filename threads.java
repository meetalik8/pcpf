import java.util.*;
class myThread1 extends Thread{
	public void run(){
		for(int i=1;i<11;i++){
			try{
				Thread.sleep(100);
			}
			catch(Exception e){
				System.out.println(e);
			}
			System.out.println("4 * "+i +"="+ 4*i);
		}
	}
}
class myThread2 implements Runnable{
	public void run(){
		for(char i='A';i<='Z';i++){
			try{
				Thread.sleep(120);
			}
			catch(Exception e){
				System.out.println(e);
			}
			System.out.println(i);
		}
	}
}
public class ExceptionHandle{
	public static void main(String [] args){
		myThread1 obj1=new myThread1();
		myThread2 obj2=new myThread2();
		Thread t2=new Thread(obj2);
		obj1.start();
		t2.start();
	}
}
