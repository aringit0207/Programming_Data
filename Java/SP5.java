// Polymorphism
// Poly - many | morphism - form
// Two types -
// 1. Compile time polymorphism (Static/Early Binding) -> achieve through "method overloading"
// 2. Run time polymorphism (Dynamic/Late Binding) -> achieve through "method overriding"





// Method overloading -

// Same name, Same class, Different arguments
// Method overloading depends only on parameters of the method not on its return type 
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
    void show(double a, double b) {
        System.out.println("sir");
    }
    public static void main(String[] args) {
        SP5 t = new SP5();
        t.show();
        t.show(10);
        t.show(10, 20);
        t.show(10.5, 20.5);
    }
} */


// Imp points :-
// 1. Method overloading is possible when the methods of same name have different number of parameters 
//    and if it have same number of parameters then there datatypes should be different.
// 2. If methods of same name have same number of parameters and same data type but different return type
//    then method overloading is not possible.
// 3. In method overloading only method's signature is checked (i.e. data type of parameters not variable name).
// 4. It is not possible to prevent overloading.
// 5. The order of arguments passed to any method is important.
//    eg:- (int a, String b) and (String a, int b) both are differents
// 6. It is possible to overload any type of methods (static, final, abstract).
// 7. It is possible to overload methods in parent child relationship (inheritance).
//    eg:-
      // class Parent {
      //     void method(int a) {
      //         System.out.println("Parent Method");
      //     }
      // }
      // class Child extends Parent {
      //     void method(int a, int b) {
      //         System.out.println("Child Method");
      //     }
      //     public static void main(String[] args) {
      //         Child c = new Child();
      //         c.method(10);
      //         c.method(10, 20);
      //     }
      // }






// SP6
// Method overriding -

// Same name, Different class, Same arguments and inheritance

class A {
    void meth1() { // overridden method
        System.out.println("I am method 1 of class A");
    }
}

class B extends A {
    @Override
    void meth1() { // overriding method
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

/*
 Imp points :-
 1. Both overridden and overriding methods should have same signature.
 2. If the method is final, it cannot be overridden.
 3. The return type of the methods must be same at primitive level.
 4. It is possible to change the return type at object level using covariant return type concept.
    Covariant return type :-
    Overridden method's return type is sub-type of overridden method's return type.
    eg:-
     
    class Animal {}
    class Dog extends Animal {}
    class Parent {
        Animal msg() {
            System.out.println("Animal");
            return new Animal();
        }
    }
    class Child extends Parent {
        Dog msg() {
            System.out.println("Dog");
            return new Dog();
        }
    }

5. It is not possible to override private data because it is specific to a class.
6. While overriding it is possible to maintain -
   
                                    Parent      Child
   same level permission            public      public (valid)
   increasing level permission      protected   public (valid)
   decreasing level permission      public      protected (invalid)
*/