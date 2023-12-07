const d = document;

var sesion = d.getElementById('form_l');

sesion.addEventListener('submit', function(e) {
    e.preventDefault();
     console.log("me has dado click");
     alert("Sus Datos fueron enviados");
     let data = new FormData(sesion);
     console.log(data.get("email"));
     console.log(data.get("password"));
});
   
    
