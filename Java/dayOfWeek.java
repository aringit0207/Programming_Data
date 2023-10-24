/*
// DAY OF WEEK

import java.time.LocalDate;

public class dayOfWeek {
    public static void main(String[] args) {
        // to get current day of week

        LocalDate current = LocalDate.now(); // created LocalDate object
        String currentDayOfWeek = current.getDayOfWeek().toString(); // get day of week
        
        System.out.println(currentDayOfWeek);


        // to get day of week of particular date

        LocalDate particular = LocalDate.of(2023, 9, 22);
        String particularDayOfWeek = particular.getDayOfWeek().toString();

        System.out.println(particularDayOfWeek);
        
    }
}

 // EXTRACTING DAY, MONTH & YEAR FROM DATE

 // Method - 1
 public class dayOfWeek {
    public static void main(String[] args) {
        
        String date = "24/09/2023";

        int index1 = date.indexOf("/"); // sabse pehle '/' milega wo index store ho jayega
        int index2 = date.indexOf("/", index1 + 1); // dusri baar '/' milega wo index store ho jayega
        
        String day = date.substring(0, index1);
        String month = date.substring(index1 + 1, index2);
        String year = date.substring(index2 + 1);

        System.out.println(day + " " + month + " " + year);

    }
 }

 */

 // Method - 2 => Split using Array

public class dayOfWeek {
    public static void main(String[] args) {
        
        String date = "24/09/2023";

        String[] split = date.split("/");
        
        System.out.println(split[0] + " " + split[1] + " " + split[2]);

    }
}