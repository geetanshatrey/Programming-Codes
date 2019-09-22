class StringEx
{
	public static void main(String x[])
	{
		String s1=new String("Geetansh Atrey");
		System.out.println("Printing the string : "+s1);
		System.out.println("Length of string : "+s1.length());
		System.out.println("Character at 5th index : "+s1.charAt(5));
		System.out.println("Index of 'ta' : "+s1.indexOf("ta"));
		System.out.println("Index of 'ta' from 2nd index : "+s1.indexOf("ta",2));
		System.out.println("Last index of 'e' : "+s1.lastIndexOf("e"));
		String s2=s1.toUpperCase();
		System.out.println("If s1 string equals to s2 : "+s1.equals(s2));
		System.out.println("Substring from 2nd to 8th index : "+s1.substring(2,8));
	}
}
