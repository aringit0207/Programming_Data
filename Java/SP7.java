// Abstraction - Hiding the internal details and showing only essential information to the outside world.
// Abstraction can be achieved through -
// Abstract classes (0-100%) & interfaces (100%)

// koi bhi class agar abstract class ko inherit krta hai to to abstract class ke sabhi abstract methods ko define 
// krna compulsory hai otherwise class will throw an error

// we can't create an object of abstract class

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
