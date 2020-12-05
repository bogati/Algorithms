package com.cognixia.jump.dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

import com.cognixia.jump.connection.ConnectionManager;
import com.cognixia.jump.model.Exhibit;

public class ExhibitDAOImpl implements ExhibitDAO{
	private Connection conn = ConnectionManager.getConnection();

	@Override
	public List<Exhibit> getAllExhibits() {
		// TODO Auto-generated method stub
		
		List<Exhibit> exhibitList = new ArrayList<Exhibit>();
		try(PreparedStatement pstmt = conn.prepareStatement("select * from Exhibit");
			ResultSet rs = pstmt.executeQuery();
				){
			
			
			while(rs.next()) {
				
				int id = rs.getInt("id");
			    String name = rs.getString("name");
			    String picture = rs.getString("picture");
			    short open =rs.getShort("open");
			    /*
			    System.out.println(id);
			    System.out.println(name);
			    System.out.println(picture);
			    System.out.println(open);
			    */
			    
			    Exhibit exhibit = new Exhibit(id,name,picture,open);
			    exhibitList.add(exhibit);
			}
			//System.out.println(exhibitList.get(1).getId());
			
				
				} catch (SQLException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
		return exhibitList;
	}
	
	
	public static void main (String[] args) {
		ExhibitDAO exb = new ExhibitDAOImpl();
		exb.getAllExhibits();
	}

}
