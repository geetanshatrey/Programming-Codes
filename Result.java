abstract class Student {
    public abstract void gradeOfStudent();
}

class Engg_stud extends Student {
    protected int marks;
    Engg_stud(int m) {
        marks = m;
    }
    public void gradeOfStudent() {
        if(marks >=90 && marks <= 100) {
            System.out.println("A Grade for Engg_stud!");
        }
        else if(marks >=80 && marks < 90) {
            System.out.println("B Grade for Engg_stud!");
        }
        else if(marks >=70 && marks < 80) {
            System.out.println("C Grade for Engg_stud!");
        }
        else if(marks >=60 && marks < 70) {
            System.out.println("D Grade for Engg_stud!");
        }
        else {
            System.out.println("Failure for Engg_stud!");
        }
    }
}

class Sc_stud extends Student {
    protected int marks;
    Sc_stud(int m) {
        marks = m;
    }
    public void gradeOfStudent() {
        if(marks >=80 && marks <= 100) {
            System.out.println("Good result for Sc_stud !");
        }
        else if(marks >=60 && marks < 80) {
            System.out.println("Average result for Sc_stud");
        }
        else {
            System.out.println("Poor result for Sc_stud");
        }
    }
}

class Result {
    public static void main(String args[]) {
        Engg_stud eng = new Engg_stud(85);
        eng.gradeOfStudent();
        Sc_stud sc = new Sc_stud(85);
        sc.gradeOfStudent();
    }
}
