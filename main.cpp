#include <iostream>

int main() {
   int costProduct;
  int costDelivery;
  int discount;
  std::cout << "Приветствуем Вас в калькуляторе!\n";
  std::cout<<"Он поможет рассчитать полную стоимость товара\n";
  std::cout<<"с учетом скидок и доставки!\n";
  std::cout<<"============================\n";
  
  std::cout<<"Ввести стоимость товара :\n";
  std::cin>>costProduct;
  std::cout<<" Стоимость доставки :\n";
  std::cin>>costDelivery;
  std::cout<<" Размер скидки :\n";
  std::cin>>discount;
   int total= 0;
   total=(costProduct+costDelivery)-discount;
   std::cout<<"Стоимость покупки составляет : "<<total<<" руб.\n";


  std::cout<<"Ввести стоимость товара :\n";
  std::cin>>costProduct;
  std::cout<<" Стоимость доставки :\n";
  std::cin>>costDelivery;
  std::cout<<" Размер скидки :\n";
  std::cin>>discount;
  total=total+(costProduct+costDelivery)-discount;
  std::cout<<"Стоимость покупки составляет : "<<total<<" руб.\n";

  std::cout<<"Ввести стоимость товара :\n";
  std::cin>>costProduct;
  std::cout<<" Стоимость доставки :\n";
  std::cin>>costDelivery;
  std::cout<<" Размер скидки :\n";
  std::cin>>discount;
   total= total+((costProduct+costDelivery)-discount);
   std::cout<<"Общая стоимость покупки составляет : "<<total<<" руб.\n";
    if (total>10000){
      total=(total*90)/100 ;
      std::cout<<"Ваша покупка превышает 10000руб.\n";
      std::cout<<"Вы получаете скидку 10%.\n";
      std::cout<<"Итоговая стоимость покупки составляет: "<<total<<"руб.\n";
    }
   

  

  

  
}
