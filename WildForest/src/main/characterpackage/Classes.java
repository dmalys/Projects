package main.characterpackage;

public class Classes {
    private Races races;
    String classs;
    void Mage(){
            races.stamina+=10;
            races.atack+=15;
            races.defence+=10;
            classs="Mage";
            System.out.println("Your class is:"+classs);
    }

    void Rogue(){
        classs="Rogue";
        races.stamina+=20;
        races.atack+=15;
        races.defence+=20;
        System.out.println("Your class is:"+classs);
    }
    void Barbarian(){
        classs="Barbarian";
        races.stamina+=10;
        races.atack+=20;
        System.out.println("Your class is:"+classs);
    }
    void Knight(){
        classs="Knight";
        races.stamina+=10;
        races.atack+=15;
        races.defence+=20;
        System.out.println("Your class is:"+classs);
    }

    public Classes(Races races, String classs) {
        this.races = races;
        this.classs = classs;
    }
}
