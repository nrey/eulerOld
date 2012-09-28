#include "infinite_precition.h"

// ################################################################################################################# //

infinite_precition :: infinite_precition( unsigned long long size_in ){
	// Recorda que en cada variable voy a guardar hasta 9 digitos, es decir 999 999 999 es el maximo numero, asi que size
	// debo dividirlo en 9, pues se espera que el usuario simplemente diga cuantos digitos tendra su numero, no q sepa como
	// esta implementado internamente
	
	size = size_in;
	if( size==0 ){
		cout<<endl<<"Hay un error el tamano no puede ser sero";
		abort();
	}
	if( size%9==0 ){
		size_div9 = size/9;
	}
	else{
		size_div9 = size/9+1;
	}
// 	cout<<endl<<"size_div9: "<<size_div9;
	data_ = new unsigned long long [size_div9];
	for( unsigned long long i=0; i<size_div9; i++ ){
		data_[i] = 0;
	}
// 	data_[0] = 3;
// 	data_[1] = 4;
}

// ################################################################################################################# //

void infinite_precition :: copyto( infinite_precition *rhs ){
	
	rhs->size_div9 = size_div9;
	for( unsigned long long i=0; i<size_div9; i++ ){
		rhs->data_[i] = data_[i];
	}
	
}

// ################################################################################################################# //

infinite_precition :: ~infinite_precition( ){
	// Todo lo que se escriba aca tambien debo colocarlo en la sobrecarga del operador =, pues nose como hacer un 
	// dlete this que sea legal, es decir algo que borrara todo lo que contiene el objeto sin borrarse a si mismo
	// en este momento esto esta en la linea 51.
	delete [] data_; // Nose si es delete [] data_ o solo delete data_
}

// ################################################################################################################# //

void infinite_precition :: setvalue( unsigned long long position, unsigned long long value ) {
	data_[position-1] = value;
}

// ################################################################################################################# //

void infinite_precition :: setvalue( unsigned long long value ) {
	for( unsigned long long i=0; i<size_div9; i++ ){
		data_[i] = 0;
	}
	data_[0] = value;
}

// ################################################################################################################# //

unsigned long long infinite_precition :: getvalue( unsigned long long position ) {
	return data_[position-1];
}

// ################################################################################################################# //

void infinite_precition :: show() {
	cout<<endl;
	for( int i=size_div9-1; i>=0; i-- ){
		cout<<data_[i]<<" ";
	}
}

// ################################################################################################################# //

void infinite_precition :: add( infinite_precition *rhs, infinite_precition *lhs ){
	temp_1_ = 0; // Esta es lo que llevo de cada suma
	for( unsigned long long i=0; i<size_div9; i++ ){
		data_[i] = temp_1_+rhs->data_[i]+lhs->data_[i];
		temp_1_ = 0;
		if( data_[i] > 999999999 ){
			if( size_div9 == i+1 ){
				cout<<endl<<"Tamano muy pequeno";
				abort();
			}
			else{
				temp_1_ = data_[i]/1000000000;
				data_[i] = data_[i]%1000000000;
			}
		}
	}
}

// ################################################################################################################# //

void infinite_precition :: sub( infinite_precition *rhs, infinite_precition *lhs ){
	temp_sub_1_ = 0; // Esta es lo que llevo de cada suma
	for( unsigned long long i=0; i<size_div9; i++ ){
		temp_sub_1_ = rhs->data_[i] - lhs->data_[i] + temp_sub_1_;
		if( temp_sub_1_ < 0 ){
			data_[i] = 1000000000 + temp_sub_1_;
			temp_sub_1_ = -1;
			if( size_div9 == i+1 ){
				cout<<endl<<"Resultado da negativo";
				abort();
			}
		}
		else{
			data_[i] = temp_sub_1_;
			temp_sub_1_ = 0;
		}
	}
}

// ################################################################################################################# //

void infinite_precition :: mul( infinite_precition *rhs, unsigned long long lhs ){
	// lhs debe tener hasta 9 digitios (999999999).
	temp_1_ = 0; // Esta es lo que llevo de cada suma
	for( unsigned long long i=0; i<size_div9; i++ ){
		data_[i] = temp_1_+rhs->data_[i]*lhs;
		temp_1_ = 0;
		if( data_[i] > 999999999 ){
			if( size_div9 == i+1 ){
				cout<<endl<<"Tamano muy pequeno";
				abort();
			}
			else{
				temp_1_ = data_[i]/1000000000;
				data_[i] = data_[i]%1000000000;
			}
		}
	}
}

// ################################################################################################################# //

unsigned long long infinite_precition :: sumdig( ){
	temp_1_ = 0;
	for( unsigned long long i=0; i<size_div9; i++ ){
		temp_2_ = data_[i];
		// suma de los 9 digitos guardado en temp_1_
		for( unsigned long long j=0; j<9; j++ ){
			temp_3_ = pow( 10, 8-j );
			temp_1_ = temp_1_+temp_2_/temp_3_;
			temp_2_ = temp_2_%temp_3_;
		}
	}
	return temp_1_;
}

// ################################################################################################################# //

unsigned long long infinite_precition :: numdig( ){
	
	for( long i=size_div9-1; i>=0; i-- ){
		temp_1_ = (i)*9;
		if( data_[i] >= 1000000000 ){
			cout<<endl<<"Hay algun error, ningun puede ser mayor q 1000000000";
			abort();
		}
		else if( data_[i] >= 100000000 ){
			temp_1_ = temp_1_ + 9;
			break;
		}
		else if( data_[i] >= 10000000 ){
			temp_1_ = temp_1_ + 8;
			break;
		}
		else if( data_[i] >= 1000000 ){
			temp_1_ = temp_1_ + 7;
			break;
		}
		else if( data_[i] >= 100000 ){
			temp_1_ = temp_1_ + 6;
			break;
		}
		else if( data_[i] >= 10000 ){
			temp_1_ = temp_1_ + 5;
			break;
		}
		else if( data_[i] >= 1000 ){
			temp_1_ = temp_1_ + 4;
			break;
		}
		else if( data_[i] >= 100 ){
			temp_1_ = temp_1_ + 3;
			break;
		}
		else if( data_[i] >= 10 ){
			temp_1_ = temp_1_ + 2;
			break;
		}
		else if( data_[i] >= 1 ){
			temp_1_ = temp_1_ + 1;
			break;
		}
// 		else{
// 			
// 		}
// 		return temp_1_;
	}
	return temp_1_;
}

// ################################################################################################################# //

bool infinite_precition :: ispalind( ){
	
	temp_5_ = numdig(); // Analiza la cantidad de digitos del numero
	if( temp_5_%9==0 ){
		temp_6_ = temp_5_/9;
	}
	else{
		temp_6_ = temp_5_/9+1;
	}
	ostvar_1_.str(std::string()); // Vaciamos
	for( long i=temp_6_-1; i>=0; i-- ){
		ostvar_1_<<data_[i];
	}
	strvar_1_ = ostvar_1_.str();
	temp_2_ = strvar_1_.length();
	for( unsigned int i=0; i<temp_2_; i++ ){
		if( strvar_1_[i]!=strvar_1_[temp_2_-1-i] ){
			return false;
		}
	}
	return true;
}

// ################################################################################################################# //

void infinite_precition :: reverse( infinite_precition* lhs ){
	
	temp_5_ = numdig(); // Analiza la cantidad de digitos del numero
	if( temp_5_%9==0 ){
		temp_6_ = temp_5_/9;
	}
	else{
		temp_6_ = temp_5_/9+1;
	}
	// Borrar lhs
	lhs->setvalue(0);
	
	ostvar_1_.str(std::string()); // Vaciamos
	temp_7_ = 0; // Para agregarle ceros
	for( long i=temp_6_-1; i>=0; i-- ){
// // 		ostvar_1_.str(std::string()); // Vaciamos
		temp_1_ = 0;
		if( i!=temp_6_-1 ){
			if( data_[i] >= 1000000000 ){
				cout<<endl<<"Hay algun error, ningun puede ser mayor q 1000000000";
				abort();
			}
			else if( data_[i] >= 100000000 ){
				temp_1_ = 0;
			}
			else if( data_[i] >= 10000000 ){
				temp_1_ = 1;
// 				break;
			}
			else if( data_[i] >= 1000000 ){
				temp_1_ = 2;
// 				break;
			}
			else if( data_[i] >= 100000 ){
				temp_1_ = 3;
// 				break;
			}
			else if( data_[i] >= 10000 ){
				temp_1_ = 4;
// 				break;
			}
			else if( data_[i] >= 1000 ){
				temp_1_ = 5;
// 				break;
			}
			else if( data_[i] >= 100 ){
				temp_1_ = 6;
// 				break;
			}
			else if( data_[i] >= 10 ){
				temp_1_ = 7;
// 				break;
			}
			else if( data_[i] >= 1 ){
				temp_1_ = 8;
			}
			else if( data_[i] == 0 ){
				temp_1_ = 0;
			}
			for( unsigned long long j=0; j<temp_1_; j++ ){
				ostvar_1_<<temp_7_;
			}
		}
		ostvar_1_<<data_[i];
	}
	temp_2_ = temp_5_%9;
	temp_1_ = 0;
	if( temp_2_!=0 ){
		for( unsigned long long i=0; i<9-temp_2_; i++ ){
			ostvar_1_<<temp_1_;
// 			cout<<endl<<"YY: ";
		}
	}
	strvar_1_ = ostvar_1_.str(); // NUNCA JAMAS SUPE COMO HACER EL CAMBIO DE STRING A NUMERO, NO SE SI USANDO LA VARIABLE NICO, O COMO CARAJOS UTILIZAR LA FUNCION ATOI, CUANDO TENEMOS UN STRING LARGO Y YO QUIERO HACER LA CONVERSION CARACTER A CARACTER,
// 	const char* nico = ostvar_1_.str().c_str();
	
	for( unsigned long long i=0; i<temp_6_; i++ ){
		temp_1_ = 0;
		temp_5_ = 0;
		for( unsigned long long j=i*9; j<(i+1)*9; j++ ){
// 			temp_2_ = nico[j]-48;
			temp_2_ = strvar_1_[j]-48;
// 			temp_2_ = atoi(&strvar_1_[j]);
			temp_1_ = temp_1_ + temp_2_*pow(10,temp_5_);
			temp_5_++;
		}
		lhs->setvalue(i+1,temp_1_);
	}
}

// ################################################################################################################# //


// infinite_precition infinite_precition :: operator+( const infinite_precition& rhs ) const {
// 	
// 	// Chequear que los tamanos son iguales
// // 	if( rhs.getsize() != size ){
// // 		cout<< " Los tamanos son diferentes\n";
// // 	}
// 	infinite_precition temp_1_sal(size_div9);
// 	
// 	temp_1_sal.data_[0] = data_[0] + rhs.data_[0]+1;
// // cout<<endl<<"			"<<temp_1_sal.data_[0];
// 	return temp_1_sal;
// 	
// }
// 
// infinite_precition infinite_precition :: operator=( const infinite_precition& rhs ) {
// 	
// 	// Chequear que los tamanos son iguales
// // 	if( rhs.getsize() != size ){
// // 		cout<< " Los tamanos son diferentes\n";
// // 	}
// 	if( this ==  &rhs )
// 		return *this;
// // Tengo la duda de si un delte this, se podria hacer, es decir para que no me toque siempre copiar aca todo lo q contenga el destructor
// // 	delete &this;
// 
// 		cout<<endl<<"	antes: data_: "<<data_[0]<<", rhs.data_: "<<rhs.data_[0];
// 	delete [] data_;
// 	data_ = new unsigned long long [size_div9];
// 		cout<<endl<<"	antes: data_: "<<data_[0]<<", rhs.data_: "<<rhs.data_[0];	
// 	for( unsigned long long i=0; i<size_div9; i++ ){
// 		data_[i] = rhs.data_[i];
// 		cout<<endl<<"	data_: "<<data_[i]<<", rhs.data_: "<<rhs.data_[i];
// 	}
// 		cout<<endl<<"	despues: data_: "<<data_[0]<<", rhs.data_: "<<rhs.data_[0];
// 		data_[0] = 9;
// 				data_[1] = 8;
// 				data_[2] = 18;
// // data_ = new unsigned long long [0];
// // data_[1] = 9;
// 		
// 	return *this;
// // 	infinite_precition temp_1_sal(size);
// 	
// // 	temp_1_sal.data_[1] = data_[1] + rhs.data_[1];
// 
// // 	return temp_1_sal;
// 	
// }

