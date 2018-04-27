package main.enemiespackage;

import java.util.Random;
import main.characterpackage.Races;

public class AbilitiesEnem  {
    private RacesEnem racesEnem;
    private Races races;
    public int damageEnem;
    private void AtackEnem(){
        if(15+racesEnem.getEatack()>races.getDefence()){
    damageEnem=15+racesEnem.getEatack()-races.getDefence();
    racesEnem.estamina=racesEnem.getEstamina()-10;
    }
    else{
            damageEnem=0;
        }
    }
    private void BiteEnem(){
        if(10+racesEnem.getEatack()>races.getDefence()){
    damageEnem=10+racesEnem.getEatack()-races.getDefence();
    racesEnem.estamina=racesEnem.getEstamina()-5;
    }
    else{
            damageEnem=0;
        }
    }
    private void Scratch(){
        if(5+racesEnem.getEatack()>races.getDefence()){
        damageEnem=5+racesEnem.eatack-races.getDefence();
    }
    else{
            damageEnem=0;
        }
    }
    public void AbilityEnemtouse(){
        Random generatorEnem = new Random();
        int number = generatorEnem.nextInt(3);
        switch (number){
            case 0:
                if(racesEnem.getEstamina()>=10){
                    AtackEnem();
                    System.out.println("Enemy dealt to you:"+damageEnem+"damage.");
                }
                else{
                    AbilityEnemtouse();
                }
                break;
            case 1:
                if(racesEnem.getEstamina()>=5){
                    BiteEnem();
                    System.out.println("Enemy dealt to you:"+damageEnem+"damage.");
                }
                else{
                    AbilityEnemtouse();
                }
                break;
            case 2:
                Scratch();
                System.out.println("Enemy dealt to you:"+damageEnem+"damage.");
                break;
        }
    }

    public AbilitiesEnem(RacesEnem racesEnem, Races races, int damageEnem) {
        this.racesEnem = racesEnem;
        this.races = races;
        this.damageEnem = damageEnem;
    }
}
