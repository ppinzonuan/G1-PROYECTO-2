#include <iostream>
using namespace std;

int main()
{
    
    int option,x=4,y=1;
    
    
    
    string libros[x]={"El Principito","50 sombras de gray", "Sherlock homes","El susurro de la mujer ballena"};
    
    //informacion que se sabe de cada libro
    
    float isbn[x]={1,2,3,4};
    float precioAdquicion[x]={1,2,3,4};
    float precioVenta[x] = {1,2,3,4};
    float ejemplaresE[x] = {1,2,3,4};
    // primer bucle
   
   do{
    cout<<"\n(1) Ver libros\n";
    cout<<"(2) Elegir libros\n";
    cout<<"(3) Ingresar libros\n";
    cout<<"(4) Eliminar libros\n";
    
    cin>>option;
    
    // opcion 1 del bucle general
    if (option==1){
    for(int i=0;i<x;i++){
        cout<<i<<" "<<libros[i]<<"\n";
    }
        
    };
    
    //opcion 2 del bucle general
    if (option==2){
     do{
  cout<<"\ningrese la opcion: ";
  cin>>option;
  
  switch(option) {
  case 1:
    cout<<libros[option]<<endl;
    cout<<"isbn: "<<isbn[option]<<endl;
    cout<<"aquicision: "<<precioAdquicion[option]<<endl;
    cout<<"venta: "<<precioVenta[option]<<endl;
    cout<<"ejemplares: "<<ejemplaresE[option]<<endl;
    
    break;
  case 2:
    cout<<libros[option]<<endl;
    cout<<"isbn: "<<isbn[option]<<endl;
    cout<<"aquicision: "<<precioAdquicion[option]<<endl;
    cout<<"venta: "<<precioVenta[option]<<endl;
    cout<<"ejemplares: "<<ejemplaresE[option]<<endl;
    
    break;
    case 3:
    cout<<libros[option]<<endl;
    cout<<"isbn: "<<isbn[option]<<endl;
    cout<<"aquicision: "<<precioAdquicion[option]<<endl;
    cout<<"venta: "<<precioVenta[option]<<endl;
    cout<<"ejemplares: "<<ejemplaresE[option]<<endl;
    break;
    case 4:
    cout<<libros[option]<<endl;
    cout<<"isbn: "<<isbn[option]<<endl;
    cout<<"aquicision: "<<precioAdquicion[option]<<endl;
    cout<<"venta: "<<precioVenta[option]<<endl;
    cout<<"ejemplares: "<<ejemplaresE[option]<<endl;
    break;
  default:
    cout<<"nada";
}
      
  }
  while  (option != 0);
  
 

    };
    
    // opcion 3 del bucle general
    if (option==3){
        
    };
    
    //opcion 4 del bucle general
    if (option==4){
        
    }
    
   }
   
    while(y == 1);
    
    
    return 0;
}