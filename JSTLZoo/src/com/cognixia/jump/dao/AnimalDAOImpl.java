package com.cognixia.jump.dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

import com.cognixia.jump.connection.ConnectionManager;
import com.cognixia.jump.model.Animal;



public class AnimalDAOImpl implements AnimalDAO{
	private Connection conn = ConnectionManager.getConnection();

	@Override
	public List<Animal> getAllAnimals() {
		// TODO Auto-generated method stub
		
		List<Animal> animalList = new ArrayList<Animal>();
		try(PreparedStatement pstmt = conn.prepareStatement("select * from animals");
			ResultSet rs = pstmt.executeQuery();
				){
			
			
			while(rs.next()) {
				
				int id = rs.getInt("id");
			    String name = rs.getString("name");
			    int population = rs.getInt("population");
			    
			    Animal animal = new Animal(id,name,population);
			    animalList.add(animal);
			}
					
				} catch (SQLException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
		return animalList;
	}
	

}
