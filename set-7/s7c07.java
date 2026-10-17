import java.util.Scanner;

public class s7c7 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter a number: ");
    int num = sc.nextInt();
    int sum = 0;
    int rem = 0;

    while (num > 0) {
      rem = num % 10;
      sum += rem;
      num = num / 10;
    }

    System.out.println(sum);
    sc.close();
  }
}
