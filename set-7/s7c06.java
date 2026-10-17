import java.util.Scanner;

public class s7c6 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter a number: ");
    int num = sc.nextInt();
    int count = 0;

    for (int i = 2; i * i <= num; i++) {
      if (num % i == 0) {
        count++;
      }
    }

    if (count > 0) {
      System.out.println("Number is not prime.");
    } else {

      System.out.println("Number is prime.");
    }
    sc.close();
  }
}
