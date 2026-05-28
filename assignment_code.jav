import java.util.Scanner;

public class SumNaturalNumbers {
    public static long sumFirstNNaturalNumbers(int n) {
        if (n < 1) {
            return 0;
        }

        return (long) n * (n + 1) / 2;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter N: ");
        int n = scanner.nextInt();

        long total = sumFirstNNaturalNumbers(n);
        System.out.println("Sum of first " + n + " natural numbers is " + total);

        scanner.close();
    }
}
