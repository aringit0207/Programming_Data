// Abstraction

// 1. Hiding the internal details and showing only essential information to the outside world.
// 2. Abstraction can be achieved through - Abstract classes (0-100%) & interfaces (100%)

// 3. koi bhi class agar abstract class ko inherit krta hai to to abstract class ke sabhi  
// abstract methods ko define krna compulsory hai otherwise class will throw an error

// 4. It may or may not contain abstract methods
// 5. Abstract class can contains both abstract and non-abstract methods
// 6. To use abstract class, you have to inherit it to the sub classes

/*
// example 1

abstract class Vehicle {
    abstract void start();
}

class Car {
    void start() {
        System.out.println("car starts with key");
    }
}

class Scooter {
    void start() {
        System.out.println("scooter starts with kick");
    }
}

public class SP7 {
    public static void main(String[] args) {
        // Vehicle v = new Vehicle(); // can't create an object of abstract class

        Car c = new Car();
        c.start();
        Scooter s = new Scooter();
        s.start();
    }
}



// example 2

abstract class animal {
    abstract void eat();
}
class dog extends animal {
    void eat() {
        System.out.println("Dog eats rat.");
    }
}
class tiger extends animal {
    void eat() {
        System.out.println("Tiger eats deer.");
    }
}
public class SP7 {
    public static void main(String[] args) {

        // we can't create an object of abstract class but we can create its reference
        // animal reference = new animal(); // throws an error as we can't create an object of abstract class but we can create its reference
        // animal reference = new dog(); // here we created the reference

        dog d = new dog();
        d.eat();
        tiger t = new tiger();
        t.eat();

    }
} */

// Chaining in abstraction

abstract class calculator {
    abstract void add();
    abstract void mul();
}

// if all the abstract methods are not implemented in the child class then that child class should be made abstract

abstract class Dev1 extends calculator {
    int num1 = 5;
    int num2 = 2;
    void add() {
        System.out.println("Addition of 5 and 2 : " + (num1 + num2));
    }
}
class Dev2 extends Dev1 {
    void mul() {
        System.out.println("Multiplication of 5 and 2 : " + num1 * num2);
    }
}

class SP7 {
    public static void main(String[] args) {
        Dev2 obj = new Dev2();
        obj.add();
        obj.mul();
    }
}

// SOME IMP POINTS

//  1. We can have main method in abstract class
//  2. We can create a constructor of abstract class
//  3. Overloading and overriding of abstract class are possible
//  4. private, final, static keywords cannot be used with abstract class