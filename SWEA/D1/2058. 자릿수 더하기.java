/*
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QPRjqA10DFAUq&categoryId=AV5QPRjqA10DFAUq&categoryType=CODE
*/

import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        int result = 0;

        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        while(N != 0) {
            result += N % 10;
            N /= 10;
        }
        System.out.println(result);
    }
}
