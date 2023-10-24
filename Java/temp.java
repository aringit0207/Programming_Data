import java.time.DayOfWeek;
import java.time.LocalDate;

class flight {

    String sFromI, sDestinationI, sDepDateI, sDayI;

    flight(String sFromI, String sDestinationI, String sDepDateI) {
        this.sFromI = sFromI;
        this.sDestinationI = sDestinationI;
        this.sDepDateI = sDepDateI;
    }
}

    

class hello extends flight {

    hello(String sFromI, String sDestinationI, String sDepDateI) {
        super(sFromI, sDestinationI, sDepDateI);
    }
    // void print() {
    //     System.out.println(sDayI);
    // }

    void dateToDay() {
        String[] split = sDepDateI.split("/");
        
        int iDayL = Integer.parseInt(split[0]);        
        int iMonthL = Integer.parseInt(split[1]);        
        int iYearL = Integer.parseInt(split[2]); 
        
        LocalDate ld = LocalDate.of(iYearL, iMonthL, iDayL);
        DayOfWeek getDay = ld.getDayOfWeek();
        sDayI = getDay.toString();
        // System.out.println(iDayL);
        // System.out.println(iMonthL);
        // System.out.println(iYearL);
    }
    void print() {
        System.out.println(sDayI);

    }
}

class hi extends hello {

    hi(String sFromI, String sDestinationI, String sDepDateI) {
        super(sFromI, sDestinationI, sDepDateI);
        
    }
    void show() {
        System.out.println(sDayI);
    }

}
public class temp {
    public static void main(String[] args) {
        // flight f = new flight("indore", "mumbai", "24/09/2023");
        // String day = f.sDayI;
        // System.out.println(day);
        // f.show();
        // f.dateToDay();

        hello h = new hello("indore", "mumbai", "24/09/2023");
        h.print();
        h.dateToDay();
        
        hi hii = new hi("indore", "mumbai", "24/09/2023");
        hii.show();
        // System.out.println(hii.sDayI);
    }
}
