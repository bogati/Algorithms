<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
	<%@ taglib prefix = "c" uri = "http://java.sun.com/jsp/jstl/core"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Zoo</title>
<link rel="stylesheet"
	href="https://stackpath.bootstrapcdn.com/bootstrap/4.4.1/css/bootstrap.min.css"
	integrity="sha384-Vkoo8x4CGsO3+Hhxv8T/Q5PaXtkKtu6ug5TOeNV6gBiFeWPGFN9MuhOf23Q9Ifjh"
	crossorigin="anonymous">


</head>
<body>

	<div class="container">

		<div class="jumbotron jumbotron-fluid">
			<div class="container">
				<h1 class="display-4">Zoom Home Page</h1>
				<p class="lead">Welcome please check the links below to get info on our 
				zoo animals and exhibits.
				</p>
			</div>
		</div>
		
		<form action="AnimalServlet" method="post"> 
			<input type="submit"  value="Zoo Animals" class="btn btn-primary btn-lg btn-block">
		
		
		</form>
		<br>
		
		<!-- Create a Exhibit Servlet to process the request for the form below !! -->
		<!-- List all the exhibit info from the table in the db as a table (the html table) -->
		<!-- Create <img> for each of the exhibits and display those images  -->
		
		<form action="ExhibitServlet" method="post">
			<input type="submit"  value="Exhibits" class="btn btn-secondary btn-lg btn-block">
		
		
		</form>





	</div>

</body>
</html>