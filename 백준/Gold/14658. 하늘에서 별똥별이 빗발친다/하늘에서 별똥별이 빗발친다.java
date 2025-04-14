import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;



public class Main {
        static int n, m, l, k;
        static List<Pair> pos = new ArrayList<>();

        public static void main(String[] args) throws IOException {

            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            StringTokenizer st = new StringTokenizer(br.readLine());
            n = Integer.parseInt(st.nextToken());
            m = Integer.parseInt(st.nextToken());
            l = Integer.parseInt(st.nextToken());
            k = Integer.parseInt(st.nextToken());


            for (int i = 1; i <= k; i++) {
                st = new StringTokenizer(br.readLine());
                int a, b;
                a = Integer.parseInt(st.nextToken());
                b = Integer.parseInt(st.nextToken());
                pos.add(new Pair(a, b));
            }

            int max = 0;

            for(Pair i : pos){
                for(Pair j : pos){
                    int cnt = 0;
                    for(Pair k : pos){
                        if(k.x >= i.x && k.y >= j.y && k.x <= i.x+l && k.y <= j.y+l){
                            cnt++;
                        }
                    }
                    max = Math.max(max, cnt);
                }
            }

            System.out.print(k - max);

        }

    static class Pair {
        int x;
        int y;

        public Pair(int x, int y) {
            this.x = x;
            this.y = y;
        }
    }
}

