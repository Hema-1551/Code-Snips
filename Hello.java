/**
 * GIven a n*m matrix, i want to find whetherit is teoplitz matrix or not
 * toepolitizMatrix
 */
public class Hello {

    public boolean toepolitizMatrix(int matrix[][]) {
        // System.out.println("matrix.length :"+matrix.length);

        for (int row = 0; row < matrix.length - 1; row++) {
            for (int col = 0; col < matrix[row].length - 1; col++) {
                // System.out.println(row+" "+col);

                if (matrix[row][col] != matrix[row + 1][col + 1]) {
                    return false;
                }
            }
        }
        return true;

    }

    public void print2D(int m[][]) {
        System.out.println("\nmatrix :");
        for (int[] row : m) {
            for (int v : row) {
                System.out.print(v + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {

        int m1[][] = { { 1, 2, 3 }, { 2, 1, 2 }, { 3, 2, 1 } };

        Hello obj = new Hello();
        obj.print2D(m1);

        System.out.println("Is toepolitz matrix:" + obj.toepolitizMatrix(m1));
    }
}
/*
 * 1 2 3 2 1 2 3 2 1
 */