public class CommandLine2 {
    static int count = 0;
    CommandLine2() {
        count++;
    }
    public static void main(String args[]) {
        CommandLine2 c1 = new CommandLine2();
        CommandLine2 c2 = new CommandLine2();
        CommandLine2 c3 = new CommandLine2();
        System.out.println(count);
    }
}
