package Leetcode.TicTacToe1275;

import java.util.Arrays;

class Solution {
    public String tictactoe(int[][] moves) {
        int[][] grid = new int[3][3];
        for(int[] row : grid)
            Arrays.fill(row, -1);
        for (int i = 0; i < moves.length; i++) {
            grid[moves[i][0]][moves[i][1]] = i%2;
        }
        for (int i = 0; i < 3; i++) {
            if(grid[i][i] == -1) continue;
            if(grid[i][i] == grid[i][(i+1)%3] && grid[i][i] == grid[i][(i+2)%3])
                return Character.toString('A'+ grid[i][i]);
            if(grid[i][i] == grid[(i+1)%3][i] && grid[i][i] == grid[(i+2)%3][i])
                return Character.toString('A'+ grid[i][i]);
        }
        if((grid[1][1] != -1) && ((grid[0][0] == grid[1][1] && grid[0][0] == grid[2][2])
                || (grid[0][2] == grid[1][1] && grid[0][2] == grid[2][0])) ){
            System.out.println(grid[1][1]);
            return Character.toString('A'+ grid[1][1]);
        }

        if(moves.length == 9) return "Draw";
        return "Pending";

    }
}