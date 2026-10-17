import java.util.Scanner;

public class s7c10 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter a number: ");
    int num1 = sc.nextInt();
    System.out.print("Enter another number: ");
    int num2 = sc.nextInt();
    int rem;

    do {
      rem = num1 % num2;
      num1 = num2;
      num2 = rem;

    } while (rem != 0);

    System.out.println(num1);
    sc.close();
  }
}
