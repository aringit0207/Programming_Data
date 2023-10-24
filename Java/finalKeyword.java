// Use is variable -> variable becomes constant
/*
public class finalKeyword {
    public static void main(String[] args) {
        final int a = 10;
        // a += 10; // error because a cannot be reinitialized due to final keyword
        System.out.println(a);
    }
}

// Use in method -> method cannot be overriden

class Parent {
    final void show() { 
        System.out.println("Parent class");
    }
}
class Child extends Parent {
    void show() { // throws an error because final method cannot be overridden
        System.out.println("Child class");
    }
}

public class finalKeyword {
    public static void main(String[] args) {
        Child ch = new Child();
        ch.show();
    }
}

// Use in class -> class cannot be inherited

final class Parent {
    void parent() { 
        System.out.println("Parent class");
    }
}
class Child extends Parent { // throws an error because final class cannot be inherited
    void child() {
        System.out.println("Child class");
    }
}

public class finalKeyword {
    public static void main(String[] args) {
        Child ch = new Child();
        ch.child();
    }
} */