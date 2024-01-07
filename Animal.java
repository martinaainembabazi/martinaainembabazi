package oopp;


public class Animal {
	 String name;
    String color;
    int legs;
    static int no_of_ears;
	

	public static void main(String[] args) {
		 Animal.no_of_ears = 2;
		 Animal dog = new Animal();
		 dog.name="Dalmatian";
		 dog.color="white";
		 dog.legs=4;
		 
		 Animal cat = new Animal();
		 cat.name   = "Kitty";
		 cat.color ="black";
		 cat.legs=4;
		 
		 Animal person = new Animal();
		 person.name ="Martina";
		 person.color="lightskinned";
		 person.legs=2;
				 
				 
		 
	
	        System.out.println("Dog Name: " + dog.name + " color: " + dog.color + " legs: " + dog.legs+"number of ears:"+no_of_ears);
	        System.out.println("Cat Name: " + cat.name + " color " + cat.color + " legs " + cat.legs+"number of ears:"+no_of_ears);
	        System.out.println("Person Name: " + person.name + " color " + person.color + " legs " + person.legs+"number of ears:"+no_of_ears);
	    

	}

}
