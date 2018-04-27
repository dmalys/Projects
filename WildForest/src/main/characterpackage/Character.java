package main.characterpackage;

import java.util.Scanner;

public class Character {
    private Classes classes;
    private Races races;
    public void wybierzrase(){
        System.out.println("Choose your race.");
        System.out.println("Elf, Human, Dwarve");
        Scanner wejscie = new Scanner(System.in);
        String raaaaace = wejscie.next();
        if(raaaaace.equals("Elf")||raaaaace.equals("elf")){
            races.Elf();
        }
        else if(raaaaace.equals("Human")||raaaaace.equals("human")){
            races.Human();
        }
        else if(raaaaace.equals("Dwarve")||raaaaace.equals("dwarve")){
            races.Dwarve();
        }
        else {
            System.out.println("Please enter valid Race name.");
            wybierzrase();
        }
    }
    public void wybierzklase(){
        System.out.println("Choose your class.");
        System.out.println("Mage, Barbarian, Rogue, Knight");
        Scanner wejscie1 = new Scanner(System.in);
        String clasasa = wejscie1.next();
        if(clasasa.equals("Mage")||clasasa.equals("mage")){
            classes.Mage();
        }
        else if(clasasa.equals("Barbarian")||clasasa.equals("barbarian")){
            classes.Barbarian();
        }
        else if(clasasa.equals("Rogue")||clasasa.equals("rogue")){
            classes.Rogue();
        }
        else if(clasasa.equals("Knight")||clasasa.equals("knight")){
            classes.Knight();
        }
        else {
            System.out.println("Please enter valid Class name.");
            wybierzklase();
        }
    }
        public void pewny() {
            System.out.println("Your character is:" + races.race +" "+classes.classs);
            System.out.println("Do you wish to change anything?");
            System.out.println("Yes/No");
            Scanner wejscie2 = new Scanner(System.in);
            String pewnys = wejscie2.next();
            if (pewnys.equals("Yes")||pewnys.equals("yes")) {
                wybierzrase();
                wybierzklase();
                pewny();
        } else if (pewnys.equals("No")||pewnys.equals("no")) {
                System.out.println("Let's begin!");
                System.out.println("");
                System.out.println("As you wake up all you can see are: trees, trees and even more trees.");
                System.out.println("When you look up beautiful sky is welcoming you from your long sleep.");
                System.out.println("After waiting a while your ears can hear some strange, unrecognized sounds around you.");
                System.out.println("You have no idea what it could be but some inner voice keeps telling you to keep away from them.");
                System.out.println("When you are looking for something to help you in your situation, you find some old equipment you could make use of.");
                System.out.println("");
                System.out.println("Little glimmer far away is the only bright thing your eyes can see.");
                System.out.println("You decided to follow it, because it is the only hope you have to get out of this place.");
                System.out.println("In your head you keep pumping the same song you were listening last time you remember");
                System.out.println("And it was like this: ");
                System.out.println("");
                System.out.println("SomeBODY once told me...");
                System.out.println("You don't remember how it goes after this.");
                System.out.println("Maybe it was caused by being hit by that big truck on your street...");
                System.out.println("");
            }
        }

    public Character(Classes classes, Races races) {
        this.classes = classes;
        this.races = races;
    }
}

