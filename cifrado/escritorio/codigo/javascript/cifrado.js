

function cifrar(texto,cifrado,despl){
 	var  alfabeto = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','ñ','o','p','q','r','s','t','u','v','w','x','y','z'];
     for(var i=0; i<texto.length; i++) {
     	var res="";
      for(var j=0;j<alfabeto.length;j++){
      	if(alfabeto[j] == texto.charAt(i)){
          var des= j+ parseInt(despl);
          if (alfabeto.length-1<des) {des=des-alfabeto.length;}
           res =alfabeto[des];          
       }
   }
   cifrado+= res; 
}      
  return cifrado;
 
}

function descifrar(texto,cifrado,despl){
 	var  alfabeto = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','ñ','o','p','q','r','s','t','u','v','w','x','y','z'];
     for(var i=0; i<texto.length; i++) {
     	var res="";
      for(var j=0;j<alfabeto.length;j++){
      	if(alfabeto[j] == texto.charAt(i)){
          var des= j- parseInt(despl);
          if (des<0) {des=alfabeto.length+des;}
           res =alfabeto[des];          
       }
   }
   cifrado+= res; 
}      
  return cifrado;
 
}


function transposicion(texto,trans)
{
  for(var i=texto.length-1; i!=0; i--) {
    trans +=texto[i];
  }
  return trans;
}

/*function transposicionInvGr(textog,grupo,tctig)
{
  if( textog.length >= grupo){
    var texto="";
    var tra="";
    var c=1;
  for(var i=0; i<textog.length; i++) {
    texto += textog[i];
    if(c==grupo){
      for(var i=texto.length-1; i!=0; i--) {
      tctig +=texto[i];
       }
      c=0;
      texto=" ";
  }
  c++;
  }
}
  return tctig;
}*/

function cifrarInverso(result,palabra){
             for(v=palabra.length-1;v>=0;v--){
                  result+=palabra[v];
             }
 			return result;
		}

		function concatenar2Cadenas(palabra1,palabra2){
			return palabra1+""+palabra2;
		}

		function cifrarGrupal(grupo,indice,resultado,palabra){
 			if(indice<palabra.length){

 			return cifrarGrupal(grupo,indice+grupo,cifrarInverso(resultado,palabra.substring(indice,indice+grupo)),palabra);
 			}

              return concatenar2Cadenas(resultado,palabra.substring(indice,palabra.length));

		}