package main.mechanicspackage;

import java.util.Scanner;

public class Movement {
    private Obstacles obstacles;
    private int lastmove;                   //ostatni ruch
    private int numberofmoves;          //doliczana do score
    public final int location=15;           // cel
    private int yourlocation;               //między początkiem, a celem
    public int getyourlocation(){
        return yourlocation;
    }
    int getNumberofmoves(){return numberofmoves;}
    public void Moving(){
        System.out.println("Your location:"+getyourlocation());
        int allkorekt=0;
        while(allkorekt==0) {
            System.out.println("Which direction do you choose?");
            System.out.println("1.left 2.straight 3.right");
            Scanner wejscie5 = new Scanner(System.in);
            int move = wejscie5.nextInt();
            numberofmoves++;
            if (lastmove ==2 && move == 2 && obstacles.getnoway() !=move) {
                yourlocation=yourlocation+2;
                lastmove = move;
                allkorekt++;
            }
            else if (lastmove ==2 && move == 1 && obstacles.getnoway() !=move) {
                System.out.println("Now you can only move 2.straight 3.right");
                yourlocation=yourlocation+1;
                lastmove = move;
                allkorekt++;
            }
            else if (lastmove ==2 && move == 3 && obstacles.getnoway() !=move) {
                System.out.println("Now you can only move 1.left 2.straight");
                yourlocation=yourlocation+1;
                lastmove = move;
                allkorekt++;
            }
            else if (lastmove == 1 && move == 2 && obstacles.getnoway() !=move) {
                System.out.println("Now you can only move 2.straight 3.right");
                yourlocation=yourlocation+1;
                lastmove=move;
                allkorekt++;
            }
            else if (lastmove == 1 && move == 3 && obstacles.getnoway() !=move){
                yourlocation=yourlocation+1;
                lastmove=move;
                allkorekt++;
            }
            else if(lastmove ==3 && move==1 && obstacles.getnoway() !=move){
                yourlocation=yourlocation+1;
                lastmove=move;
                allkorekt++;
            }
            else if(lastmove==3 && move==2 && obstacles.getnoway() !=move){
                System.out.println("Now you can only move 1.left 2.straight");
                yourlocation=yourlocation+1;
                lastmove=move;
                allkorekt++;
            }
            else if(move == obstacles.getnoway()){
                System.out.println("You stand in front of Big Rock.");
                System.out.println("You can't go this way.");
            }
            else {
                System.out.println("You would better head forth...");
            }
        }
    }

    public Movement(Obstacles obstacles, int lastmove, int numberofmoves, int yourlocation) {
        this.obstacles = obstacles;
        this.lastmove = lastmove;
        this.numberofmoves = numberofmoves;
        this.yourlocation = yourlocation;
    }
}
