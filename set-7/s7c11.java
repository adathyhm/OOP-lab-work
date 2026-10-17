import java.util.Random;
import java.util.Scanner;

public class s7c11 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    Random rand = new Random();
    System.out.print("Welcome to number guessing game,\nEnter a number: ");
    int num = sc.nextInt();
    int randomInt = rand.nextInt(101);
    boolean active = true;
    int count = 0;

    while (active) {
      count++;
      if (randomInt > num) {
        System.out.println("too low, guess attempt: " + count);
      } else if (randomInt < num) {
        System.out.println("too high, guess attempt: " + count);
      } else {
        System.out.println("correct, guess attempt: " + count);
        System.out.print("Do you wanna play again(Y/n): ");
        String replay = sc.next();
        if (replay.equals("n")) {
          active = false;
        } else {
          randomInt = rand.nextInt(101);
          System.out.print("Welcome to number guessing game,\nEnter a number: ");
          num = sc.nextInt();
        }
      }

      System.out.print("Enter another guess: ");
      num = sc.nextInt();
    }

    sc.close();
  }
}
