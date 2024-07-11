#include<iostream>
using namespace std;
float celsiusToFahrenheit(float celsius){
  float fahrenheit;
  fahrenheit=((celsius*9.0)/5.0)+32.0;
  return fahrenheit;
}

float celsiusToKelvin(float celsius){
  float kelvin;
  kelvin=celsius+273.15;
  return kelvin;
}

float fahrenheitToCelsius(float fahrenheit){
  float celsius;
celsius=((fahrenheit-32.0)/9.0)*5.0;  
return celsius;
}

float fahrenheitToKelvin(float fahrenheit){
  float kelvin;
kelvin=((fahrenheit+459.67)/9.0)*5.0;  
return kelvin;
}

float kelvinToCelsius(float kelvin){
  float celsius;
  celsius=kelvin-273.15;
  return celsius;
}

float kelvinToFahrenheit(float kelvin){
  float fahrenheit;
  fahrenheit=((kelvin*9.0)/5.0)-459.67;
  return fahrenheit;
}

int main(){
    float temperature;
    int choice;
    cout<<"Temperature Converter"<<endl<<"1. Celsius to Fahrenheit"<<endl<<"2. Celsius to Kelvin"<<endl<<"3. Fahrenheit to Celsius"<<endl<<"4. Fahrenheit to Kelvin"<<endl<<"5. Kelvin to Celsius"<<endl<<"6. Kelvin to Fahrenheit";
    cout<<endl<<"Enter your choice (1-6):";
    cin>>choice;
    cout<<endl<<"Enter the temperature:"<<endl;
    cin>>temperature;
    
    switch(choice){
        case 1: 
        cout<<"Temperature in Fahrenheit: "<<celsiusToFahrenheit(temperature);
        break;
        case 2: 
        cout<<"Temperature in Kelvin: "<<celsiusToKelvin(temperature);
        break;
        case 3:
        cout<<"Temperature in Celsius: "<<fahrenheitToCelsius(temperature);
        break;
        case 4: 
        cout<<"Temperature in Kelvin: "<<fahrenheitToKelvin(temperature);
        break;
        case 5: 
        cout<<"Temperature in Celsius: "<<kelvinToCelsius(temperature);
        break;
        case 6:
        cout<<"Temperature in Fahrenheit: "<<kelvinToFahrenheit(temperature);
        break;
        default:
        cout<<"invalid conversion";

    }
    return 0;
    
}
