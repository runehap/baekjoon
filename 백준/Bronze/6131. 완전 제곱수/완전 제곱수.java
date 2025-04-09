import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int n;
        int cnt=0;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        for(int i=1;i<=n;i++) {
            if(Math.sqrt((i*i)+n)%1==0){
                cnt++;
            }
        }

        System.out.println(cnt);

    }
}