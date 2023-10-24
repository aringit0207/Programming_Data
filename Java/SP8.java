// Interface
// It is similar to class which consists of variables and methods. Use keyword "interface".

// Imp points :-
// 1. We cannot create an object of interface.
// 2. We cannot create a normal variable (local, instance).
// 3. We cannot create methods (static, instance).
// 4. We cannot create constructor.
// 5. We cannot create main method.

// If your program requires -
// No changes in methods and attributes --> make interface
// Rare changes in methods and attributes --> make abstract
// Frequently changes in methods and attributes --> make normal class

// If final keyword is ahead of -
// 1. variable(attribute) - variable is a constant
// 2. method - method cannot override
// 3. class - class cannot inherit

// Inheritance in interface -
// all 5 types of inheritance is possible in interface
// (single, multilevel, hierarchical, multiple, hybrid)
// 1. class --- class => use extends keyword
// 2. interface --- interface => use extends keyword
// 3. class --- interface => use implements keyword

// Interface example -
/*
interface Bank { // By default, interface is an abstract class
    int limit = 40000; // By default, variables are "public static final"
    // To access static attributes, here we use "Bank.limit"
    void interest(); // By default, method is "public abstract"
}

class SBI implements Bank {
    public void interest() {
        System.out.println("Interest rate is 9.99 and withdraw limit is " + Bank.limit);
    }
}

public class SP8 {
    public static void main(String[] args) {
        SBI sbi = new SBI();
        sbi.interest();
    }
}

// Nested interface
// Type 1 - If an interface exists inside an another interface -

interface CS1 {
    void m1();
    interface CS2 {
        void m2();
    }
}
class Test implements CS1, CS1.CS2 {
    public void m1() {
        System.out.println("M1");
    }
    public void m2() {
        System.out.println("M2");
    }
}

// Type 2 - If an inteface exists inside an abstract -

abstract class CS1 {
    abstract void m1();
    interface CS2 {
        void m2();
    }
}
class Test extends CS1 implements CS1.CS2 {
    public void m1() {
        System.out.println("M1");
    }
    public void m2() {
        System.out.println("M2");
    }
}

// Type 3 - If an inteface exists inside a class -
class CS1 {
    interface CS2 {
        void m1();
    }
}
class Test implements CS1.CS2 {
    public void m1() {
        System.out.println("M2");
    }
} */

// Adapter class - 

interface CS {
    void m1();
    void m2();
    void m3();
}
class Test implements CS { // Adapter class
    public void m1() {}
    public void m2() {}
    public void m3() {}
}