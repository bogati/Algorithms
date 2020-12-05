<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ taglib prefix = "c" uri = "http://java.sun.com/jsp/jstl/core"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>list Exhibit</title>
<link rel="stylesheet"
	href="https://stackpath.bootstrapcdn.com/bootstrap/4.4.1/css/bootstrap.min.css"
	integrity="sha384-Vkoo8x4CGsO3+Hhxv8T/Q5PaXtkKtu6ug5TOeNV6gBiFeWPGFN9MuhOf23Q9Ifjh"
	crossorigin="anonymous">
</head>
<body>
	<div class="container">
		<div class="jumbotron jumbotron-fluid">
			<div align="center" class="container">
				<h1 class="display-4">Exhibit list</h1>
				<p class="lead">Exhibits listed below !
					</p>
			</div>
			
				
			<table style="width: 500px" , "height: 800px", "margin-bottom: 50px"  align="center" border="4"> 
			
			<%-- <tr ><th> Displaying exhibits </th></tr> --%>
			<br>
			<tr>
			<th> Id </th>
			<th> Name </th>
			<th> Picture </th>
			<th> Open </th>
			</tr>
			
			<c:forEach var="exhibit" items="${allExhibits }">
				
				<tr>
				    <td> <c:out value="${ exhibit.id}"/> </td>
				    <td><c:out value="${ exhibit.name}"/> </td>
				    <td> <img alt="${exhibit.name}" src="${exhibit.picture}" width='50' height='50'/></td> 
				   <%-- <td><c:out value="${ exhibit.picture}"/> </td> --%> 
				    <td><c:out value="${ exhibit.open}"/> </td>
				</tr>
				<br>
				
				<%-- For testing purpose 
				
				<p> <c:out value="${ exhibit }"/> </p>
				<p> <c:out value="${ exhibit.id}"/> </p>
				<p> <c:out value="${ exhibit.name}"/> </p>
				<p> <c:out value="${ exhibit.picture}"/> </p>
				<p> <c:out value="${ exhibit.open}"/> </p>   
				
				--%>
			
			</c:forEach>
			
			</table>
		
		
		</div>
		
		
	
	
		
	</div>
	
</body>
</html>


