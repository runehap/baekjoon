import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.lang.reflect.Parameter;
import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;



public class Main {
        static int  l, k;
        static List<Pair> pos = new ArrayList<>();

        public static void main(String[] args) throws IOException {

            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            StringTokenizer st = new StringTokenizer(br.readLine());
            k = Integer.parseInt(st.nextToken());
            l = Integer.parseInt(st.nextToken());


            for (int i = 1; i <= k; i++) {
                st = new StringTokenizer(br.readLine());
                int a, b,c;
                a = Integer.parseInt(st.nextToken());
                b = Integer.parseInt(st.nextToken());
                c = Integer.parseInt(st.nextToken());
                pos.add(new Pair(a,b,c));
            }
            int cnt =0;
            int min = (int)1e9;

            loopOut :
            for(Pair p : pos) {
                for(Pair q : pos) {
                    for(Pair r : pos) {
                        cnt =0;
                        for(Pair s : pos) {
                            if(p.x >= s.x && q.y>= s.y && r.z >= s.z ) {
                                cnt++;
                            }
                        }
                        if(cnt >= l)min = Math.min(p.x+q.y+r.z,min);

                    }
                }
            }

            System.out.println(min);
        }

    static class Pair {
        int x;
        int y;
        int z;

        public Pair(int x, int y,int z) {
            this.x = x;
            this.y = y;
            this.z = z;
        }
    }
}

