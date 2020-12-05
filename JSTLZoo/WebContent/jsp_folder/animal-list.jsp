<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%> 
	
<%@ taglib prefix = "c" uri = "http://java.sun.com/jsp/jstl/core"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Animal Exhibit</title>
<link rel="stylesheet"
	href="https://stackpath.bootstrapcdn.com/bootstrap/4.4.1/css/bootstrap.min.css"
	integrity="sha384-Vkoo8x4CGsO3+Hhxv8T/Q5PaXtkKtu6ug5TOeNV6gBiFeWPGFN9MuhOf23Q9Ifjh"
	crossorigin="anonymous">
</head>
<body>
	<div class="conatainer">
		<div class="jumbotron jumbotron-fluid">
			<div class="container">
				<h1 class="display-4">Animal list</h1>
				<p class="lead">Animals listed below !
					</p>
			</div>
		</div>
		
		
	
		
		<c:forEach var="animal" items="${allAnimals }">
		
			<p> <c:out value="${ animal }"/> </p>
			<p> <c:out value="${ animal.id}"/> </p> 
		
		</c:forEach>
		
		





		</div>
</body>
</html>