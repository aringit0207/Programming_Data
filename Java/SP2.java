// Constructors
// 1. It is a block having same name as that of class.
// 2. It doesn't have any return type not even void.
// 3. Modifiers which are applicable for constructors are " public, private, protected & default ".
// 4. Executes automatically when we create an object.

// Default Constructor
/*
class Test {
    Test() {
        System.out.println("Hello World");
    }
}

public class SP2 {
    public static void main(String[] args) {
        Test t = new Test();
    }
}

// Parameterized Constructor

class Test {
    String name;
    String rollNo;
    Test(String name, String rollNo) {
        this.name = name;
        this.rollNo = rollNo;
    }
}

public class SP2 {
    public static void main(String[] args) {
        Test t = new Test("Arin", "0801CS221034");
        System.out.println(t.name + ", " + t.rollNo);
    }
}  */

// Copy Constructor

class Test {
    String name;
    int id;
    Test(String name, int id) {
        this.name = name;
        this.id = id;
    }
    Test(Test T) {
        this.name = T.name;
        this.id = T.id;
    }
}

public class SP2 {
    public static void main(String[] args) {
        Test T1 = new Test("Arin", 34);
        System.out.println(T1.name + " " + T1.id);

        Test T2 =  new Test(T1);
        System.out.println(T2.name + " " + T2.id);
    }
}