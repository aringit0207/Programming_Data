// Inheritance
// 1. It is a property in which the derived class aquires all the properties of base class.
// 2. Constructor can never be inherited.

// Single Inheritance
/*
class Animal {
    void eat() {
        System.out.println("I can eat.");
    }
}

class Dog extends Animal {
    void run() {
        System.out.println("I can run.");
    }
}

public class SP3 {
    public static void main(String[] args) {
        Dog Jad = new Dog();
        Jad.eat();
        Jad.run();
    }
}

// Multiple Inheritance

class Grandfather {
    void showG() {
        System.out.println("I am good looking.");
    }
}

class Father extends Grandfather {
    void showF() {
        System.out.println("My eyesight is weak.");
    }
}

class Son extends Father {
    void showS() {
        System.out.println("I can run fast.");
    }
}

public class SP3 {
    public static void main(String[] args) {
        
        Grandfather Anil = new Grandfather();
        Anil.showG();
        System.out.println("----------------------------");

        Father Manoj = new Father();
        Manoj.showG();
        Manoj.showF();
        System.out.println("----------------------------");
        
        Son Arin = new Son();
        Arin.showG();
        Arin.showF();
        Arin.showS();
    }
} */

// Hierarchical Inheritance

class Teacher {
    void think() {
        System.out.println("I can think fast.");
    }
}

class Student1 extends Teacher {
    void write() {
        System.out.println("I can write fast.");
    }
}

class Student2 extends Teacher {
    void read() {
        System.out.println("I can read fast.");
    }
}

public class SP3 {
    public static void main(String[] args) {

        Student1 Arin = new Student1();
        Arin.think();
        Arin.write();
        System.out.println("----------------------------");
        
        Student2 Akash = new Student2();
        Akash.think();
        Akash.read();
    }
}