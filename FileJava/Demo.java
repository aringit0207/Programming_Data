import java.io.File; // For creating a file
import java.io.FileWriter; // For writing in a file
import java.io.FileReader; // For reading in a file
import java.io.IOException; // For error handling
// import java.util.Scanner;

public class Demo {
    public static void main(String[] args) {
        
        File myFile = new File("hello.txt");
		try {
            // Creating a File

			myFile.createNewFile();

            // Writing to a File

            String data = "Arin_Jain, Morena, Computer Engineering";
            FileWriter output = new FileWriter("hello.txt");
            output.write(data);
            output.close();

            // Reading a File
            
            char[] line = new char[100];
            FileReader input = new FileReader("hello.txt");
            input.read(line);
            System.out.println(line);
            input.close();

            // Another method of reading a file

            // Scanner sc = new Scanner(myFile);
            // while(sc.hasNextLine()) {
            //     String line = sc.nextLine();
            //     System.out.println(line);
            // }
            // sc.close();

            // Appending the data

            String  data2 = "\nFile Handling";
            String  data3 = "\nHELOOOOO";
            FileWriter input2 = new FileWriter("hello.txt", true);
            input2.write(data2);
            input2.write(data3);
            input2.close();

            // Deleting a File

            File myFile2 = new File("h1.txt");
            myFile2.delete();
         
		} catch (IOException e) {
			System.out.println("File error..");
		}
       
    }
}