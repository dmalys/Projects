package main.mechanicspackage;

import main.characterpackage.Races;

import java.util.Random;
import java.util.Scanner;

public class Counting {
    private Movement movement;
    private Races races;
    private int gold;
    private int score;
    private int getGold(){ return gold; }
    public int countingScore(){
        score=10*getGold()+5*races.getHealth()+races.getAtack()+races.getDefence()+movement.getNumberofmoves();
        return score;
    }
    void makeitrain(){
        Random golds = new Random();
        gold=getGold()+golds.nextInt(11);     // zarabiamy w tym momencie
    }
    private void upgradeability(){
        if(getGold()>=5){
            races.atack=races.getAtack()+5;
            gold=getGold()-5;
            System.out.println("Your atack is boosted +5.");
        }
        else
        {System.out.println("You don't have enought gold.");
        }
    }
    public void seeingstats(){
        System.out.println("Your health:"+races.getHealth());
        System.out.println("Your stamina:"+races.getStamina());
        System.out.println("Your atack:"+races.getAtack());
        System.out.println("Your defence:"+races.getDefence());
        System.out.println("Your gold:"+getGold());
    }
    public void youwantupgrade(){
        System.out.println("Do you want to upgrade your damage? (5 gold) ");
        System.out.println("You have: "+getGold()+" gold, right now.");
        Scanner wejsciegold=new Scanner(System.in);
        String youwantsome = wejsciegold.next();
        if(youwantsome.equals("Yes")||youwantsome.equals("yes")){
            upgradeability();
        }
        else if(youwantsome.equals("No")||youwantsome.equals("no")){
            System.out.println("You have "+getGold()+" gold.");
        }
        else {
            System.out.println("Wrong. yes/no.");
            youwantupgrade();
        }
    }

    public Counting(Movement movement, Races races, int gold, int score) {
        this.movement = movement;
        this.races = races;
        this.gold = gold;
        this.score = score;
    }
}
