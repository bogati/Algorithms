package com.cognixia.jump.web;

import java.io.IOException;
import java.sql.SQLException;
import java.util.List;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.cognixia.jump.connection.ConnectionManager;
import com.cognixia.jump.dao.ExhibitDAO;
import com.cognixia.jump.dao.ExhibitDAOImpl;
import com.cognixia.jump.model.Exhibit;


/**
 * Servlet implementation class ExhibitServlet
 */

public class ExhibitServlet extends HttpServlet {
private static final long serialVersionUID = 1L;
	
	private ExhibitDAO exhibitDAO;
	
	@Override
	public void init() {
		
		//will create a connection 
		exhibitDAO = new ExhibitDAOImpl();
		
	}
	

	@Override
	public void destroy() {
		
		//close connection, connectionmanager is using singleton design so closing same connection
		try {
			ConnectionManager.getConnection().close();
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}
       

	@Override
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
	
		//pull data from database 
		List<Exhibit> allExhibits = exhibitDAO.getAllExhibits();
		
		//put the data into the request object
		request.setAttribute("allExhibits", allExhibits);
		
		//give the data stored in the request object to jsp 
		//ad we find the jsp for our list of animals 
		RequestDispatcher dispatcher = request.getRequestDispatcher("jsp_folder/exhibit-list.jsp");
		
		//... and redirect there and pass along our request and response objects
		dispatcher.forward(request, response);
	}
	
	@Override
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
	
		doGet(request, response);
	}

}
