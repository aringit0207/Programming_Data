class Animal { 

    String color;
    int age;

    public void eat() {
        System.out.println("I am eating.");
    }

    public void run() {
        System.out.println("I am running.");
    }
}

class Human { 
    String name;
    int hands;
    int legs;

    void setName(String n) {
        name = n;
    }
    void setHands(int h) {
        hands = h;
    }
    void setLegs(int l) {
        legs = l;
    }
    void display() {
        System.out.println("My name is " + name + ". I have " + hands + " hands and " + legs + " legs.");
    }
}

class Bird { 
    String name;
    int eyes;

    Bird(String name, int eyes) {
        this.name = name;
        this.eyes = eyes;
    }

    void getData() {
        System.out.println("My name is " + name + " and I have " + eyes + " eyes.");
    }
}


public class SP1 {
    public static void main(String[] args) {

        // using reference variable
        Animal dog = new Animal();

        dog.color = "black";
        dog.age = 12;

        System.out.print("I have a dog of " + dog.color + " color" + " of age " + dog.age);
        System.out.println(" which says");

        dog.eat();
        dog.run();

        // using method (function)
        Human person = new Human();
        person.name = "Arin Jain";
        person.hands = 2;
        person.legs = 2;
        person.display();

        // using constructor
        Bird parrot = new Bird("Jad", 2);
        parrot.getData();

    }
}