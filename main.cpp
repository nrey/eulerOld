#include"main.h"


int main()
{

	euler* implement;
	implement = new eu0100();
	implement->solucion(); // time out
	implement->printsolution();
	delete implement;

	cout<<endl<< "Porcentaje terminado: " << (double) 18/328*100;
	
	
// 	implement = new eu_write_table();
// 	implement->solucion(); // time out
// 	implement->printsolution();
// 	delete implement;

	
// // 	infinite_precition* var1(18), var2(18),var3(18);
	
// 	infinite_precition * var1 = new infinite_precition(19);
// 	infinite_precition * var2 = new infinite_precition(18);
// 	infinite_precition * var3 = new infinite_precition(18);
	
// 	var1->setvalue(1,999);
// 	var1->setvalue(2,1);
// 	var1->setvalue(3,0);
// 	var1->show();
// 	cout<<endl<<"Size:	"<<var1->numdig( );
	
	
// // 	var3 = var1+var2;
// 	var1->setvalue(2,999999999);
// 	var2->setvalue(1,4);
// // 	var1->setvalue(2,999999999);
// // 	var3->add(var1,var1);
// 	var3->sub(var1,var2);
// 	
// 	cout<<endl<<"Ahora: \n";
// 	var1->show();
// 	cout<<endl<<"Suma: "<<var1->sumdig();
// 	cout<<endl<<"Ahora: \n";
// 	var2->show();
// 	cout<<endl<<"Suma: "<<var2->sumdig();
// 	cout<<endl<<"Ahora: \n";
// 	var3->show();
// 	cout<<endl<<"Suma: "<<var3->sumdig();
	
// 	var3->add(var3,var2);
// 	cout<<endl<<"Ahora: \n";
// 	var1->show();
// 	cout<<endl<<"Ahora: \n";
// 	var2->show();
// 	cout<<endl<<"Ahora: \n";
// 	var3->show();
// 	
// 	var3->mul(var2,999999999);
// 	cout<<endl<<"Ahora: \n";
// 	var1->show();
// 	cout<<endl<<"Ahora: \n";
// 	var2->show();
// 	cout<<endl<<"Ahora: \n";
// 	var3->show();
	
// 	infinite_precition * var10 = new infinite_precition(301);
// // 	infinite_precition * var2 = new infinite_precition(18);
// 	
// 	var10->setvalue(1,1);
// 	
// 	for( unsigned long long i=1; i<=1000; i++ ){
// 		var10->mul(var10,2);
// 	}
// 	
// 	cout<<endl<<"Ahora: \n";
// 	var10->show();
// 	cout<<endl<<"Suma: "<<var10->sumdig();
	
	
	cout<<endl<<endl;
	return 0;
}