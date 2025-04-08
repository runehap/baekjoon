import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		String a;
		Scanner sc = new Scanner(System.in);
		a = sc.nextLine();
		sc.close();
		String[] aa = a.split(" ");
		
		int cnt=0;
		for(String i : aa) {
			if(Integer.parseInt(i) > 0) {
				cnt++;
			}
		}
		
		System.out.println(cnt);

	}

}