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
	System.out.println("\nClass B ");
	System.out.println("Value of c : "+c);
	System.out.println("Value of d : "+d);
	}
	public void showPubA(){
	System.out.println("Accessing class A from class B !");
	System.out.println("Value of a: "+a);
	showA();
	}
}

class C extends A {
	public int e = 25;
	private int f = 30;
	
	public void showC(){
	System.out.println("\nClass C ");
	System.out.println("Value of e : "+e);
	System.out.println("Value of f : "+f);
	}
	public void showPubA(){
	System.out.println("Accessing class A from class C !");
	System.out.println("Value of a: "+a);
	showA();
	}
}
class Hierarchical {
	public static void main(String x[]){
	B obj1 = new B();
	C obj2 = new C();
	obj1.showB();
	obj1.showPubA();
	obj2.showC();		
	obj2.showPubA();
	} 

}

