import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		double pre,cur;
		cur = sc.nextDouble();
		while(true) {
			pre = cur;
			cur = sc.nextDouble();
			if(cur == 999||pre == 999)break;
			
			System.out.printf("%.2f\n",cur-pre);
		}
	}

}