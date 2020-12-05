<%@ include file= "header.jsp" %>

<div id="access">Sign up</div>
<c:choose>
	<c:when test="${error != null}">
		<p id="access-error"><c:out value="${error}" /></p>
	</c:when>
</c:choose>
<div id="access-page">
  <div id="form">
    <form action="<%= request.getContextPath() %>/Access/signup" method="POST" id="login-form">

      <input type="text" name="firstName" placeholder="first name" required onkeypress='return ((event.charCode >= 65 && event.charCode <= 90) || (event.charCode >= 97 && event.charCode <= 122) || (event.charCode == 32))'> 
      <input type="text" name="lastName" placeholder="last name" required onkeypress='return ((event.charCode >= 65 && event.charCode <= 90) || (event.charCode >= 97 && event.charCode <= 122) || (event.charCode == 32))'> 
      <input type="text" name="username" placeholder="username" required/>
      <input type="password" name="password" placeholder="password" required/>
      <input type="password" name="passwordConfirmation" placeholder="password confirmation" required/>
      <button class="dash-btn" type="submit">Sign up</button>
      <p id="message">Registered? <a href="<%= request.getContextPath() %>/Access/signinPage">Log in here</a></p>
    </form>
  </div>
</div>

<%@ include file= "footer.jsp" %>