// Use in attributes
/*
class Parent {
    int a = 10;
}
class Child extends Parent {
    int a = 20;
    void show(int a) {
        System.out.println(a); // output 30
        System.out.println(this.a); // output 20
        System.out.println(super.a); // output 10
    }
}
public class superKeyword {
    public static void main(String[] args) {
        Child bachha = new Child();
        bachha.show(30);
    }
}

// Calling the method of parent class using super keyword -

class Parent {
    void m1() {
        System.out.println("Method of parent class");
    }
}
class Child extends Parent {
    void m1() {
        System.out.println("Method of child class");
    }
    void show() {
        m1();
        super.m1();
    }
}
public class superKeyword {
    public static void main(String[] args) {
        Child ch = new Child();
        ch.show();
    }
}

// Use in constructor
// Type - 1

class Parent {
    Parent() {
        System.out.println("Parent 0 arg");
    }
}
class Child extends Parent {
    Child() {
        this(10);
        System.out.println("Child 0 arg");
    }
    Child(int num) {
        super();
        System.out.println("Child 1 arg");
    }
}

public class superKeyword {
    public static void main(String[] args) {
        Child ch = new Child();
    }
} 

Output - 
Parent 0 arg
Child 1 arg
Child 0 arg


// Type - 2

class Parent {
    Parent() {
        System.out.println("Parent 0 arg");
    }
}
class Child extends Parent {
    Child() {
        System.out.println("Child 0 arg");
    }
    Child(int num) {
        System.out.println("Child 1 arg");
    }
}

public class superKeyword {
    public static void main(String[] args) {
        Child ch = new Child();
        Child ch1 = new Child(10);
    }
} 

Output - 
Parent 0 arg
Child 0 arg
Parent 0 arg
Child 1 arg


// Type - 3

class Parent {
    Parent(int num) {
        System.out.println("Parent 1 arg");
    }
}
class Child extends Parent {
    Child() {
        // super(); // by default it is always present here
        System.out.println("Child 0 arg");
    }
    Child(int num) {
        // super(); // by default it is always present here
        System.out.println("Child 1 arg");
    }
}

public class superKeyword {
    public static void main(String[] args) {
        Child ch = new Child();
        Child ch1 = new Child(10);
    }
} 

Output -
This will give compile time error because "super()" doesn't match with Parent(int num);

*/