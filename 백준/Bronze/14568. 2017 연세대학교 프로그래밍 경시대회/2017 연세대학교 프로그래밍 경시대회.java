import java.util.Scanner;

public class Main {
	
	public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	
	int cnt=0;
	int a = sc.nextInt();
	for(int i=2;i<=a-3;i+=2) {
		for(int j=1;j<=a-i;j++) {
			if(j+2>a-i-j)continue;
			cnt++;
		}
	}
	System.out.println(cnt);
	}

}