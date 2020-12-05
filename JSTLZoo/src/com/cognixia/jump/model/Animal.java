package com.cognixia.jump.model;

public class Animal {

	private int id;
	private String name;
	private int population;

	public Animal(int id, String name, int population) {
		super();
		this.id = id;
		this.name = name;
		this.population = population;
	}

	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getPopulation() {
		return population;
	}

	public void setPopulation(int population) {
		this.population = population;
	}

	@Override
	public String toString() {
		return "Animal [id=" + id + ", name=" + name + ", population=" + population + "]";
	}

}
