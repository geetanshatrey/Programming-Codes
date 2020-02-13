class A {
	public int a = 5;
	private int b = 10;
	
	public void showA(){
	System.out.println("Value of b : "+b);
	}
}

class B extends A {
	public int c = 15;
	private int d = 20;
	
	public void showB(){
	System.out.println("Value of d : "+d);
	}
}

class C extends B {
	public int e = 25;
	private int f = 30;
	
	public void showC(){
	System.out.println("Value of f : "+f);
	}
	public void showAll(){
	System.out.println("Value of a : "+a);
	System.out.println("Value of c : "+c);
	System.out.println("Value of e : "+e);
	}
}
class Multilevel {
	public static void main(String x[]){
	C obj = new C();
	obj.showA();
	obj.showB();
	obj.showC();		
	obj.showAll();
	} 

}

