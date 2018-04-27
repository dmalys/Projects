package main;

import main.characterpackage.*;
import main.characterpackage.Character;
import main.enemiespackage.*;
import main.mechanicspackage.*;
import java.util.*;

public class WildForest extends  Thread{
    private Character character;
    private Movement movement;
    private Obstacles obstacles;
    private Combat combat;
    private Counting counting;
    private int i;

    private void Game(){
        while (i==1){
            System.out.println("WELCOME TO MY GAME:");
            System.out.println("WILD FOREST");
            System.out.println("Have fun!");
            System.out.println("");
            character.wybierzrase();
            character.wybierzklase();
            character.pewny();
            i++;
        }
        counting.seeingstats();
        System.out.println("");
        obstacles.BigRock();
        movement.Moving();
        System.out.println("");
        Random r= new Random();             // losujemy czy spotkamy przeciwników
        if(r.nextInt(5)>2){
        combat.Whowithwho();
            System.out.println("");
        combat.ThatsHowWeFight();
            System.out.println("");
        counting.youwantupgrade();
            System.out.println("");
        }
    }
    public void run(){
        while (true) {
            try {
                if (movement.getyourlocation() <= movement.location) {
                    Game();
                    System.out.println("Let's go further...");
                    System.out.println("");
                Thread.sleep(500);}
                else{
                    System.out.println("Congratulations you have met the Hermit!!!");
                    System.out.println("Now you need to listen to his marvelous story and maybe, MAYBE he will help you.");
                    System.out.println("");
                    System.out.println("Congratulations you have finished the game!");
                    System.out.println("Your score is "+ counting.countingScore()+".");
                    System.out.println("Thank you for playing.");
                    System.exit(0);
            }
            }
            catch (InterruptedException e) {
                System.out.println("Problem in run.");
            }
            }
        }
     private WildForest(Character character, Movement movement, Obstacles obstacles, Combat combat, Counting counting, int i) {
        this.character = character;
        this.movement = movement;
        this.obstacles = obstacles;
        this.combat = combat;
        this.counting = counting;
        this.i = i;
    }
    public static void main(String[] args) {
        Races races=new Races(0,0,0,0,"none");
        Classes classes = new Classes(races,"none");
        Character character = new Character(classes,races);
        Obstacles obstacles= new Obstacles(0);
        Movement movement=new Movement(obstacles,2,0,0);
        RacesEnem racesEnem=new RacesEnem(0,0,0,0,"none");
        ClassesEnem classesEnem=new ClassesEnem(racesEnem,"none");
        Abilities abilities=new Abilities(races,racesEnem,classes,0);
        AbilitiesEnem abilitiesEnem= new AbilitiesEnem(racesEnem,races,0);
        Counting counting=new Counting(movement,races,0,0);
        Combat combat=new Combat(abilitiesEnem,classesEnem,racesEnem,abilities,races,counting);
        WildForest wildForest=new WildForest(character,movement,obstacles,combat,counting,1);
        wildForest.start();
    }
}
