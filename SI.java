class Account
{
	int P,R,T;
	Account(int p,int r,int t)
	{
		P=p;
		R=r;
		T=t;
	}
	void display()
	{
		int SI;
		SI=(P*R*T)/100;
		System.out.println("Simple Interest: \n"+SI);
	}
};
class SI
{
	public static void main(String args[])
	{
			Account obj=new Account(10,20,30);
			obj.display();
	}
};