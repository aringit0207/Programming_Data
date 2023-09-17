// Polymorphism
// Poly - many | morphism - form
// Two types -
// 1. Compile time polymorphism (Static polymorphism) -> achieve through "method overloading"
// 2. Run time polymorphism (Dynamic polymorphism) -> achieve through "method overriding"

// Method overloading -
// Same name, Same class, Different arguments

// Method overriding -
// Same name, Different class, Same arguments and inheritance

// Method overloading
/*
public class SP5 {
    void show() {
        System.out.println("hello");
    }
    void show(int a) {
        System.out.println("good");
    }
    void show(int a, int b) {
        System.out.println("morning");
    }
    public static void main(String[] args) {
        SP5 t = new SP5();
        t.show();
        t.show(10);
        t.show(10, 20);
    }
} */

// SP6

// Method overriding

class A {
    void meth1() {
        System.out.println("I am method 1 of class A");
    }
}

class B extends A {
    @Override
    void meth1() {
        System.out.println("I am method 1 of class B");
    }
    void meth2() {
        System.out.println("I am method 2 of class B");
    }
}

public class SP5 {
    public static void main(String[] args) {
        A a = new A();
        a.meth1();

        B b = new B();
        b.meth1();
    }
}