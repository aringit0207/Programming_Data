// Association - "IS-A" relationship
/*
class Bus {
    private String name;
    Bus(String name) {
        this.name = name;
    }
    String getBusName() {
        return name;
    }
}

class Passenger {
    String name;
    int seatNo;
    Passenger(String name, int seatNo) {
        this.name = name;
        this.seatNo = seatNo;
    }
    String getName() {
        return name;
    }
    int getSeatNo() {
        return seatNo;
    }
}

public class SP4 {
    public static void main(String[] args) {
        Bus bus = new Bus("SGSITS Travels");
        Passenger psg = new Passenger("Arin", 101);
        
        System.out.println("Passenger Name = " + psg.getName());
        System.out.println("Seat No = " + psg.getSeatNo());
        System.out.println("Bus Name = " + bus.getBusName());
    }
} */

// Aggregation - "HAS-A" relationship | It's a weak association

class Address {
    String city, state, country;
    Address(String city, String state, String country) {
        this.city = city;
        this.state = state;
        this.country = country;
    }
}

class Employee {
    String name;
    int id;
    Address address;
    Employee(String name, int id, Address address) {
        this.name = name;
        this.id = id;
        this.address = address;
    }
    void display() {
        System.out.println("Name = " + name + "\nId = " + id);
        System.out.println(address.city + ", " + address.state + ", " + address.country);
    }
}

public class SP4 {
    public static void main(String[] args) {
        Address adds = new Address("Morena", "MP", "India");
        Employee emp = new Employee("Arin Jain", 101, adds);
        emp.display();
    }
}