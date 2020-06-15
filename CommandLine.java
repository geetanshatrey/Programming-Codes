class CommandLine {
    public static void main(String args[]) {
        for(int i = 0; i < args.length; i++) {
            if(Integer.parseInt(args[i]) % 2 == 0) {
                System.out.print("Even \t");
            }
            else {
                System.out.print("Odd \t");
            }
        }
    }
}
