import java.util.Scanner;

class Himanshu {
    String name;
    void setName(String name) {
    this.name = name;
    }
    void getName() {
    System.out.println("Fuck you " + name);
    }
}

public class a {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        sc.close();

        Himanshu name = new Himanshu();
        name.setName(str);
        name.getName();
    }
}