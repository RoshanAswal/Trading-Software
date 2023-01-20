#include <iostream>
#include <ctime>
using namespace std;

int main(){
    char start;
    float shop(void);
    char choice;

    startL:
        cout<<"Please enter S to start shopping for home appliance"<<endl;
        start:
            cin>>start;
            if(start=='S' || start=='s'){
                float total=shop();
                time_t t=time(NULL); // returns current time
                tm* tptr=localtime(&t); // tm is structure and localtime function is returning a pointer
            
                cout<<"Billing Date : ";
                cout<<tptr->tm_mday<<"/"<<1+tptr->tm_mon<<"/"<<1900+tptr->tm_year<<endl;
                cout<<"Billing Time : ";
                cout<<tptr->tm_hour<<":"<<tptr->tm_min<<":"<<tptr->tm_sec<<endl;
            
                if(total>50000 && total>100000){
                    total-=(0.05*total);
                    cout<<"Applying discount 5% ..."<<endl;
                }else if(total>100000 && total<150000){
                    total-=(0.1*total);
                    cout<<"Applying discount 10% ..."<<endl;
                }else if(total>150000){
                    total-=(0.2*total);
                    cout<<"Applying discount 20% ..."<<endl;
                }
                cout<<"Total Bill Amount : "<<total<<endl;
                Again:
                    cout<<"Do you want to shop again y or n"<<endl<<endl;
                    cin>>choice;
                    if(choice=='y' || choice=='Y')
                        goto startL;
                    else if(choice=='n' || choice=='N')
                        cout<<"Thanks for shoping"<<endl;
                    else{
                        cout<<"You have entered wrong choice"<<endl<<endl;
                        goto Again;
                    }
            }else{
                cout<<"You have entered wrong choice"<<endl<<endl;
                goto start;
            }

}

float shop(){
    shop:
        char choice;
        int product;
        int quantity;
        float bill=0;
        item:
            cout<<"********** WELCOME **********"<<endl;
            cout<<"Please follow below instructions"<<endl;
            cout<<"Press r to order refrigerator"<<endl;
            cout<<"Press w to order washing machine"<<endl;
            cout<<"Press t to order Television"<<endl;
            cout<<"Press m to order microwave"<<endl;
            cout<<"Press a to order Air Conditioner"<<endl;
            cin>>choice;
            
            if(choice=='r' || choice=='R' || choice=='w' || choice=='W' || choice=='t' || choice=='T' || choice=='m' || choice=='M' || choice=='a' || choice=='A'){
                if(choice=='r' || choice=='R'){
                    
                    refrigerator:
                        cout<<"********* Refrigerator Details **********"<<endl;
                        cout<<"1) Whirpool - ₹40000"<<endl;
                        cout<<"2) Samsung - ₹35000"<<endl;
                        cout<<"3) Haier - ₹50000"<<endl;
                        cout<<"4) VOltas - ₹45000"<<endl;
                        cout<<"5) Godrej - ₹43000"<<endl;
                        cout<<"6) Panasonic - ₹39000"<<endl;

                        cout<<"Please enter your choice"<<endl;
                        cin>>product;
                        if(product<1 || product>6){
                            cout<<"You have entered wrong choice"<<endl<<endl;
                            goto refrigerator;
                        }else{
                            cout<<"Enter the amount of product"<<endl;
                            cin>>quantity;
                            if(product==1){
                                bill+=(quantity*40000);
                            }else if(product==2){
                                bill+=(quantity*35000);
                            }else if(product==3){
                                bill+=(quantity*50000);
                            }else if(product==2){
                                bill+=(quantity*45000);
                            }else if(product==2){
                                bill+=(quantity*43000);
                            }else if(product==2){
                                bill+=(quantity*39000);
                            }
                        }
                }else if(choice=='w' || choice=='W'){
                        
                    washing:
                        cout<<"********* Wahsing Machine Details **********"<<endl;
                        cout<<"1) LG - ₹40000"<<endl;
                        cout<<"2) Samsung - ₹35000"<<endl;
                        cout<<"3) Haier - ₹50000"<<endl;
                        cout<<"4) VOltas - ₹45000"<<endl;
                        cout<<"5) Bosch - ₹43000"<<endl;
                        cout<<"6) Panasonic - ₹39000"<<endl;

                        cout<<"Please enter your choice"<<endl;
                        cin>>product;
                        if(product<1 || product>6){
                            cout<<"You have entered wrong choice"<<endl<<endl;
                            goto washing;
                        }else{
                            cout<<"Enter the amount of product"<<endl;
                            cin>>quantity;
                            if(product==1){
                                bill+=(quantity*40000);
                            }else if(product==2){
                                bill+=(quantity*35000);
                            }else if(product==3){
                                bill+=(quantity*50000);
                            }else if(product==2){
                                bill+=(quantity*45000);
                            }else if(product==2){
                                bill+=(quantity*43000);
                            }else if(product==2){
                                bill+=(quantity*39000);
                            }
                        }
                }else if(choice=='t' || choice=='T'){
                        
                    Television:
                        cout<<"********* Television Details **********"<<endl;
                        cout<<"1) Onida - ₹40000"<<endl;
                        cout<<"2) Samsung - ₹35000"<<endl;
                        cout<<"3) LG - ₹50000"<<endl;
                        cout<<"4) Haier - ₹45000"<<endl;
                        cout<<"5) Croma - ₹43000"<<endl;
                        cout<<"6) Panasonic - ₹39000"<<endl;

                        cout<<"Please enter your choice"<<endl;
                        cin>>product;
                        if(product<1 || product>6){
                            cout<<"You have entered wrong choice"<<endl<<endl;
                            goto Television;
                        }else{
                            cout<<"Enter the amount of product"<<endl;
                            cin>>quantity;
                            if(product==1){
                                bill+=(quantity*40000);
                            }else if(product==2){
                                bill+=(quantity*35000);
                            }else if(product==3){
                                bill+=(quantity*50000);
                            }else if(product==2){
                                bill+=(quantity*45000);
                            }else if(product==2){
                                bill+=(quantity*43000);
                            }else if(product==2){
                                bill+=(quantity*39000);
                            }
                        }
                }else if(choice=='m' || choice=='M'){
                        
                    microwave:
                        cout<<"********* Microwave Details **********"<<endl;
                        cout<<"1) LG - ₹40000"<<endl;
                        cout<<"2) Samsung - ₹35000"<<endl;
                        cout<<"3) Haier - ₹50000"<<endl;
                        cout<<"4) Croma - ₹45000"<<endl;
                        cout<<"5) IFB - ₹43000"<<endl;
                        cout<<"6) Elica - ₹39000"<<endl;

                        cout<<"Please enter your choice"<<endl;
                        cin>>product;
                        if(product<1 || product>6){
                            cout<<"You have entered wrong choice"<<endl<<endl;
                            goto microwave;
                        }else{
                            cout<<"Enter the amount of product"<<endl;
                            cin>>quantity;
                            if(product==1){
                                bill+=(quantity*40000);
                            }else if(product==2){
                                bill+=(quantity*35000);
                            }else if(product==3){
                                bill+=(quantity*50000);
                            }else if(product==2){
                                bill+=(quantity*45000);
                            }else if(product==2){
                                bill+=(quantity*43000);
                            }else if(product==2){
                                bill+=(quantity*39000);
                            }
                        }
                }else if(choice=='a' || choice=='A'){
                        
                    air:
                        cout<<"********* Air Conditioner Details **********"<<endl;
                        cout<<"1) LG - ₹40000"<<endl;
                        cout<<"2) Lloyd - ₹35000"<<endl;
                        cout<<"3) Daikin - ₹50000"<<endl;
                        cout<<"4) Rittal - ₹45000"<<endl;
                        cout<<"5) Hisene - ₹43000"<<endl;
                        cout<<"6) Voltas - ₹39000"<<endl;

                        cout<<"Please enter your choice"<<endl;
                        cin>>product;
                        if(product<1 || product>6){
                            cout<<"You have entered wrong choice"<<endl<<endl;
                            goto air;
                        }else{
                            cout<<"Enter the amount of product"<<endl;
                            cin>>quantity;
                            if(product==1){
                                bill+=(quantity*40000);
                            }else if(product==2){
                                bill+=(quantity*35000);
                            }else if(product==3){
                                bill+=(quantity*50000);
                            }else if(product==2){
                                bill+=(quantity*45000);
                            }else if(product==2){
                                bill+=(quantity*43000);
                            }else if(product==2){
                                bill+=(quantity*39000);
                            }
                        }
                }
            }
            else{
                cout<<"You have entered wrong choice"<<endl<<endl;
                goto item;
            }
    return bill;
}