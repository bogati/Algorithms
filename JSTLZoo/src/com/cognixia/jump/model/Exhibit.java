package com.cognixia.jump.model;

public class Exhibit {
	
	
	
	private int id; 
	private String name; 
	private String picture; 
	private short open;
	public int getId() {
		return id;
	}
	
	public Exhibit(int id, String name, String picture, short open) {
		super();
		this.id = id;
		this.name = name;
		this.picture = picture;
		this.open = open;
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
	public String getPicture() {
		return picture;
	}
	public void setPicture(String picture) {
		this.picture = picture;
	}
	public short getOpen() {
		return open;
	}
	public void setOpen(short open) {
		this.open = open;
	} 

}
