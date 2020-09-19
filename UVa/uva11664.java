// UVa 11664 Langton’s Ant

import java.math.BigInteger;
import java.util.*;

class Main{
    public static void main(String [] args)
    {
        Scanner input = new Scanner(System.in);

        while (input.hasNextInt())
        {
            int n = input.nextInt();
            if (n == 0) break;
            String cfg = (new BigInteger(input.next())).toString(2);
            int x = input.nextInt();
            int y = input.nextInt();
            int d = 1;  // 1: north, 2: east, 3: south, 4: west

            int x_a = n-y+1;
            int y_a = x;

            if (n*n > cfg.length())
            {
                int diff = n*n-cfg.length();
                for (int i=0; i<diff; i++)
                {
                    cfg = "0"+cfg;
                }
            }

            // System.out.println(cfg);

            // construct array
            boolean[][] map = new boolean[17][17];

            for (int i=1; i<=n; i++)
            {
                for (int j=1; j<=n; j++)
                {
                    map[n-i+1][j] = (cfg.charAt((i-1)*n+j-1) == '0') ? false:true;
                }
            }


            // for (int i=1; i<=n; i++)
            // {
            //     for (int j=1; j<=n; j++)
            //     {
            //         System.out.print(map[i][j]+" ");
            //     }
            //     System.out.println();
            // }

            if (check(map, n, x_a, y_a, d))
            {
                System.out.println("Yes");
            }
            else
            {
                System.out.println("Kaputt!");
            }
        }

    }

    public static boolean check(boolean[][] map, int n, int x, int y, int d)
    {
        while (!(x==1 && y==n))
        {
            if (map[x][y] == true) // red
            {
                map[x][y] = false;
                if (d == 1) d = 2;
                else if (d == 2) d=3;
                else if (d == 3) d=4;
                else if (d == 4) d = 1;


            }
            else // blue
            {
                map[x][y] = true;
                if (d == 1) d=4;
                else if (d == 2) d=1;
                else if (d == 3) d=2;
                else if (d == 4) d=3;
            }

            if (d == 1)
            {
                x--;
            }
            else if (d == 2)
            {
                y++;
            }
            else if (d == 3)
            {
                x++;
            }
            else if (d == 4)
            {
                y--;
            }

            // System.out.println(x+" "+y+" "+d);

            if (x < 1 || y < 1 || x > n || y > n)
            {
                return false;
            }
        }

        return true;
    }

}
