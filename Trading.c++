#include <iostream>
#include <ctime>
using namespace std;


// Refrigerator class
class Refrigerator{
    public:
        int Whirpool_amt=100; 
        int Samsung_amt=100;
        int Haier_amt=100;
        int Voltas_amt=100;
        int Godrej_amt=100;
        int Panasonic_amt=100;

        // adding refrigerators according to their brands
        void add(int id,int amt){
            if(id==1)Whirpool_amt+=amt;
            if(id==2)Samsung_amt+=amt;
            if(id==3)Haier_amt+=amt;
            if(id==4)Voltas_amt+=amt;
            if(id==5)Godrej_amt+=amt;
            if(id==6)Panasonic_amt+=amt;
        }

        // Subtracting tha amount of refrigerator brand from stock
        void sub(int id,int amt){
            if(id==1)Whirpool_amt-=amt;
            if(id==2)Samsung_amt-=amt;
            if(id==3)Haier_amt-=amt;
            if(id==4)Voltas_amt-=amt;
            if(id==5)Godrej_amt-=amt;
            if(id==6)Panasonic_amt-=amt;
        }

        // checking if the asked quantity is present in stocks of specific brand
        bool check(int id,int amt){
            if(id==1 && Whirpool_amt>=amt)
                return true;
            if(id==2 && Samsung_amt>=amt)
                return true;
            if(id==3 && Haier_amt>=amt)
                return true;
            if(id==4 && Voltas_amt>=amt)
                return true;
            if(id==5 && Godrej_amt>=amt)
                return true;
            if(id==6 && Panasonic_amt>=amt)
                return true;
            return false;
        }
};

class Washing_Machine{
    public:
        int LG_amt=100;
        int Samsung_amt=100;
        int Haier_amt=100;
        int Voltas_amt=100;
        int Bosch_amt=100;
        int Panasonic_amt=100;

        void add(int id,int amt){
            if(id==1)LG_amt+=amt;
            if(id==2)Samsung_amt+=amt;
            if(id==3)Haier_amt+=amt;
            if(id==4)Voltas_amt+=amt;
            if(id==5)Bosch_amt+=amt;
            if(id==6)Panasonic_amt+=amt;
        }
        void sub(int id,int amt){
            if(id==1)LG_amt-=amt;
            if(id==2)Samsung_amt-=amt;
            if(id==3)Haier_amt-=amt;
            if(id==4)Voltas_amt-=amt;
            if(id==5)Bosch_amt-=amt;
            if(id==6)Panasonic_amt-=amt;
        }
        bool check(int id,int amt){
            if(id==1 && LG_amt>=amt)
                return true;
            if(id==2 && Samsung_amt>=amt)
                return true;
            if(id==3 && Haier_amt>=amt)
                return true;
            if(id==4 && Voltas_amt>=amt)
                return true;
            if(id==5 && Bosch_amt>=amt)
                return true;
            if(id==6 && Panasonic_amt>=amt)
                return true;
            return false;
        }
};


class Television{
    public:
        int Onida_amt=100;
        int Samsung_amt=100;
        int LG_amt=100;
        int Haier_amt=100;
        int Croma_amt=100;
        int Panasonic_amt=100;
        void add(int id,int amt){
            if(id==1)Onida_amt+=amt;
            if(id==2)Samsung_amt+=amt;
            if(id==3)LG_amt+=amt;
            if(id==4)Haier_amt+=amt;
            if(id==5)Croma_amt+=amt;
            if(id==6)Panasonic_amt+=amt;
        }
        void sub(int id,int amt){
            if(id==1)Onida_amt-=amt;
            if(id==2)Samsung_amt-=amt;
            if(id==3)LG_amt-=amt;
            if(id==4)Haier_amt-=amt;
            if(id==5)Croma_amt-=amt;
            if(id==6)Panasonic_amt-=amt;
        }
        bool check(int id,int amt){
            if(id==1 && Onida_amt>=amt)
                return true;
            if(id==2 && Samsung_amt>=amt)
                return true;
            if(id==3 && LG_amt>=amt)
                return true;
            if(id==4 && Haier_amt>=amt)
                return true;
            if(id==5 && Croma_amt>=amt)
                return true;
            if(id==6 && Panasonic_amt>=amt)
                return true;
            return false;
        }
};

class microwave{
    public:
        int LG_amt=100;
        int Samsung_amt=100;
        int Haier_amt=100;
        int Croma_amt=100;
        int IFB_amt=100;
        int Elica_amt=100;
        void add(int id,int amt){
            if(id==1)LG_amt+=amt;
            if(id==2)Samsung_amt+=amt;
            if(id==3)Haier_amt+=amt;
            if(id==4)Croma_amt+=amt;
            if(id==5)IFB_amt+=amt;
            if(id==6)Elica_amt+=amt;
        }
        void sub(int id,int amt){
            if(id==1)LG_amt-=amt;
            if(id==2)Samsung_amt-=amt;
            if(id==3)Haier_amt-=amt;
            if(id==4)Croma_amt-=amt;
            if(id==5)IFB_amt-=amt;
            if(id==6)Elica_amt-=amt;
        }
        bool check(int id,int amt){
            if(id==1 && LG_amt>=amt)
                return true;
            if(id==2 && Samsung_amt>=amt)
                return true;
            if(id==3 && Haier_amt>=amt)
                return true;
            if(id==4 && Croma_amt>=amt)
                return true;
            if(id==5 && IFB_amt>=amt)
                return true;
            if(id==6 && Elica_amt>=amt)
                return true;
            return false;
        }
};

class Air_Conditioner{
    public:
        int LG_amt=100;
        int Lloyd_amt=100;
        int Daikin_amt=100;
        int Rittal_amt=100;
        int Hisene_amt=100;
        int Voltas_amt=100;
        void add(int id,int amt){
            if(id==1)LG_amt+=amt;
            if(id==2)Lloyd_amt+=amt;
            if(id==3)Daikin_amt+=amt;
            if(id==4)Rittal_amt+=amt;
            if(id==5)Hisene_amt+=amt;
            if(id==6)Voltas_amt+=amt;
        }
        void sub(int id,int amt){
            if(id==1)LG_amt-=amt;
            if(id==2)Lloyd_amt-=amt;
            if(id==3)Daikin_amt-=amt;
            if(id==4)Rittal_amt-=amt;
            if(id==5)Hisene_amt-=amt;
            if(id==6)Voltas_amt-=amt;
        }
        bool check(int id,int amt){
            if(id==1 && LG_amt>=amt)
                return true;
            if(id==2 && Lloyd_amt>=amt)
                return true;
            if(id==3 && Daikin_amt>=amt)
                return true;
            if(id==4 && Rittal_amt>=amt)
                return true;
            if(id==5 && Hisene_amt>=amt)
                return true;
            if(id==6 && Voltas_amt>=amt)
                return true;
            return false;
        }
};

// Product class manages all the products details available for sales
class Products{
    private:
        // instances of products
        Refrigerator ref;
        microwave mic;
        Television tel;
        Washing_Machine was;
        Air_Conditioner air;
        string password;
    public:
        int lock=0; // to check whether admin is accessing for first time or not

        // Setting the password for admin use only
        void set_password(){
            cout<<"Enter the password"<<endl;
            cin>>password;
            cout<<endl<<endl;
            lock=1;
        }

        // checking for unauthenitcation access to the inventory
        bool check_password(string s){
            return s==password;
        }

        // Adding the new products in inventory
        void add_products(){
            char product;
            int quantity;
            int id=10;
            char choice;
            choose:
                cout<<"Which product you want to add?"<<endl<<endl;

                cout<<"Press r to order refrigerator"<<endl;
                cout<<"Press w to order washing machine"<<endl;
                cout<<"Press t to order Television"<<endl;
                cout<<"Press m to order microwave"<<endl;
                cout<<"Press a to order Air Conditioner"<<endl;

                cin>>product;
                cout<<endl<<endl;
                if(product=='r' || product=='R'){ 
                    while(id>6 && id<1){
                        cout<<"Press 1 to add Whirpool refigerators"<<endl;
                        cout<<"Press 2 to add Samsung refigerators"<<endl;
                        cout<<"Press 3 to add Haier refigerators"<<endl;
                        cout<<"Press 4 to add Voltas refigerators"<<endl;
                        cout<<"Press 5 to add Godrej refigerators"<<endl;
                        cout<<"Press 6 to add Panasonic refigerators"<<endl;
                        cin>>id;
                        cout<<endl;
                        if(id>6 && id<1)cout<<"Id not valid"<<endl;
                    }

                    cout<<"Enter the number of refrigerators to add"<<endl;
                    cin>>quantity;
                    
                    ref.add(id,quantity);
                }else if(product=='w' || product=='W'){
                    while(id>6 && id<1){
                        cout<<"Press 1 to add LG Washing Machine"<<endl;
                        cout<<"Press 2 to add Samsung Washing Machine"<<endl;
                        cout<<"Press 3 to add Haier Washing Machine"<<endl;
                        cout<<"Press 4 to add Voltas Washing Machine"<<endl;
                        cout<<"Press 5 to add Bosch Washing Machine"<<endl;
                        cout<<"Press 6 to add Panasonic Washing Machine"<<endl;
                        cin>>id;
                        cout<<endl;
                        if(id>6 && id<1)cout<<"Id not valid"<<endl;
                    }

                    cout<<"Enter the number of washing machine to add"<<endl;
                    cin>>quantity;

                    was.add(id,quantity);
                }else if(product=='t' || product=='T'){
                    while(id>6 && id<1){
                        cout<<"Press 1 to add Onida Television"<<endl;
                        cout<<"Press 2 to add Samsung Television"<<endl;
                        cout<<"Press 3 to add LG Television"<<endl;
                        cout<<"Press 4 to add Haier Television"<<endl;
                        cout<<"Press 5 to add Croma Television"<<endl;
                        cout<<"Press 6 to add Panasonic Television"<<endl;
                        cin>>id;
                        cout<<endl;
                        if(id>6 && id<1)cout<<"Id not valid"<<endl;
                    }

                    cout<<"Enter the number of Television to add"<<endl;
                    cin>>quantity;

                    tel.add(id,quantity);
                }else if(product=='m' || product=='M'){
                    while(id>6 && id<1){
                        cout<<"Press 1 to add LG Microwave"<<endl;
                        cout<<"Press 2 to add Samsung Microwave"<<endl;
                        cout<<"Press 3 to add Haier Microwave"<<endl;
                        cout<<"Press 4 to add Croma Microwave"<<endl;
                        cout<<"Press 5 to add IFB Microwave"<<endl;
                        cout<<"Press 6 to add Elica Microwave"<<endl;
                        cin>>id;
                        cout<<endl;
                        if(id>6 && id<1)cout<<"Id not valid"<<endl;
                    }
                    
                    cout<<"Enter the number of microwave to add"<<endl;
                    cin>>quantity;

                    mic.add(id,quantity);
                }else if(product=='a' || product=='A'){
                    while(id>6 && id<1){
                        cout<<"Press 1 to add LG Air Conditioner"<<endl;
                        cout<<"Press 2 to add Lloyd Air Conditioner"<<endl;
                        cout<<"Press 3 to add Daikin Air Conditioner"<<endl;
                        cout<<"Press 4 to add Rittal Air Conditioner"<<endl;
                        cout<<"Press 5 to add Hisene Air Conditioner"<<endl;
                        cout<<"Press 6 to add Voltas Air Conditioner"<<endl;
                        cin>>id;
                        cout<<endl;
                        if(id>6 && id<1)cout<<"Id not valid"<<endl;
                    }

                    cout<<"Enter the number of Air condiioner to add"<<endl;
                    cin>>quantity;

                    air.add(id,quantity);
                }else{
                    cout<<"You have entered wrong choice"<<endl;
                    goto choose;
                }
                cout<<"Product added successfully to inventory"<<endl;
                cout<<endl<<"Do you want to enter another product? Y for yes and any other key for no"<<endl;
                cin>>choice;
                if(choice=='y' || choice=='Y'){
                    goto choose;
                }
        }
        float shop(){
            char choice;
            int product;
            int quantity;
            float bill=0; // contains total amount customer spend on products

            cout<<"********** WELCOME **********"<<endl;
            cout<<"Please follow below instructions"<<endl;
            
            item:
                cout<<"Press r to order refrigerator"<<endl;
                cout<<"Press w to order washing machine"<<endl;
                cout<<"Press t to order Television"<<endl;
                cout<<"Press m to order microwave"<<endl;
                cout<<"Press a to order Air Conditioner"<<endl;
                cout<<"Press any other key to exit"<<endl;
                cin>>choice;
                
                if(choice=='r' || choice=='R' || choice=='w' || choice=='W' || choice=='t' || choice=='T' || choice=='m' || choice=='M' || choice=='a' || choice=='A'){
                    if(choice=='r' || choice=='R'){
                        
                        refrigerator:
                            cout<<"********* Refrigerator Details **********"<<endl;
                            cout<<"1) Whirpool - 40000"<<endl;
                            cout<<"2) Samsung - 35000"<<endl;
                            cout<<"3) Haier - 50000"<<endl;
                            cout<<"4) VOltas - 45000"<<endl;
                            cout<<"5) Godrej - 43000"<<endl;
                            cout<<"6) Panasonic - 39000"<<endl;

                            cout<<"Please enter your choice"<<endl;
                            cin>>product;
                            if(product<1 || product>6){
                                cout<<"You have entered wrong choice"<<endl<<endl;
                                goto refrigerator;
                            }else{
                                cout<<"Enter the amount of product"<<endl;
                                cin>>quantity;
                                if(product==1){
                                    if(ref.check(1,quantity)==false){
                                        cout<<"Sorry Whirpool refrigerator is out of stock"<<endl;
                                        goto item;
                                    }else{
                                        ref.sub(1,quantity);
                                    }
                                    bill+=(quantity*40000);
                                }else if(product==2){
                                    if(ref.check(2,quantity)==false){
                                        cout<<"Sorry Samsung refrigerator is out of stock"<<endl;
                                        goto item;
                                    }else{
                                        ref.sub(2,quantity);
                                    }
                                    bill+=(quantity*35000);
                                }else if(product==3){
                                    if(ref.check(3,quantity)==false){
                                        cout<<"Sorry Haier refrigerator is out of stock"<<endl;
                                        goto item;
                                    }else{
                                        ref.sub(3,quantity);
                                    }
                                    bill+=(quantity*50000);
                                }else if(product==4){
                                    if(ref.check(4,quantity)==false){
                                        cout<<"Sorry Voltas refrigerator is out of stock"<<endl;
                                        goto item;
                                    }else{
                                        ref.sub(4,quantity);
                                    }
                                    bill+=(quantity*45000);
                                }else if(product==5){
                                    if(ref.check(5,quantity)==false){
                                        cout<<"Sorry Godrej refrigerator is out of stock"<<endl;
                                        goto item;
                                    }else{
                                        ref.sub(5,quantity);
                                    }
                                    bill+=(quantity*43000);
                                }else if(product==6){
                                    if(ref.check(6,quantity)==false){
                                        cout<<"Sorry Panasonic refrigerator is out of stock"<<endl;
                                        goto item;
                                    }else{
                                        ref.sub(6,quantity);
                                    }
                                    bill+=(quantity*39000);
                                }
                            }
                    }else if(choice=='w' || choice=='W'){
                            
                        washing:
                            cout<<"********* Washing Machine Details **********"<<endl;
                            cout<<"1) LG - 40000"<<endl;
                            cout<<"2) Samsung - 35000"<<endl;
                            cout<<"3) Haier - 50000"<<endl;
                            cout<<"4) VOltas - 45000"<<endl;
                            cout<<"5) Bosch - 43000"<<endl;
                            cout<<"6) Panasonic - 39000"<<endl;

                            cout<<"Please enter your choice"<<endl;
                            cin>>product;
                            if(product<1 || product>6){
                                cout<<"You have entered wrong choice"<<endl<<endl;
                                goto washing;
                            }else{
                                cout<<"Enter the amount of product"<<endl;
                                cin>>quantity;
                                if(product==1){
                                    if(was.check(1,quantity)==false){
                                        cout<<"Sorry LG Washing Machine is out of stock"<<endl;
                                        goto item;
                                    }else{
                                        was.sub(1,quantity);
                                    }
                                    bill+=(quantity*40000);
                                }else if(product==2){
                                    if(was.check(2,quantity)==false){
                                        cout<<"Sorry Samsung Washing Machine is out of stock"<<endl;
                                        goto item;
                                    }else{
                                        was.sub(2,quantity);
                                    }
                                    bill+=(quantity*35000);
                                }else if(product==3){
                                    if(was.check(3,quantity)==false){
                                        cout<<"Sorry Haier Washing Machine is out of stock"<<endl;
                                        goto item;
                                    }else{
                                        was.sub(3,quantity);
                                    }
                                    bill+=(quantity*50000);
                                }else if(product==4){
                                    if(was.check(4,quantity)==false){
                                        cout<<"Sorry Voltas Washing Machine is out of stock"<<endl;
                                        goto item;
                                    }else{
                                        was.sub(4,quantity);
                                    }
                                    bill+=(quantity*45000);
                                }else if(product==5){
                                    if(was.check(5,quantity)==false){
                                        cout<<"Sorry Bosch Washing Machine is out of stock"<<endl;
                                        goto item;
                                    }else{
                                        was.sub(5,quantity);
                                    }
                                    bill+=(quantity*43000);
                                }else if(product==6){
                                    if(was.check(6,quantity)==false){
                                        cout<<"Sorry Panasonic Washing Machine is out of stock"<<endl;
                                        goto item;
                                    }else{
                                        was.sub(6,quantity);
                                    }
                                    bill+=(quantity*39000);
                                }
                            }
                    }else if(choice=='t' || choice=='T'){
                            
                        Television:
                            cout<<"********* Television Details **********"<<endl;
                            cout<<"1) Onida - 40000"<<endl;
                            cout<<"2) Samsung - 35000"<<endl;
                            cout<<"3) LG - 50000"<<endl;
                            cout<<"4) Haier - 45000"<<endl;
                            cout<<"5) Croma - 43000"<<endl;
                            cout<<"6) Panasonic - 39000"<<endl;

                            cout<<"Please enter your choice"<<endl;
                            cin>>product;
                            if(product<1 || product>6){
                                cout<<"You have entered wrong choice"<<endl<<endl;
                                goto Television;
                            }else{
                                cout<<"Enter the amount of product"<<endl;
                                cin>>quantity;
                                if(product==1){
                                    if(tel.check(1,quantity)==false){
                                        cout<<"Sorry Onida Television is out of stock"<<endl;
                                        goto item;
                                    }else{
                                        tel.sub(1,quantity);
                                    }
                                    bill+=(quantity*40000);
                                }else if(product==2){
                                    if(tel.check(2,quantity)==false){
                                        cout<<"Sorry Samsung Television is out of stock"<<endl;
                                        goto item;
                                    }else{
                                        tel.sub(2,quantity);
                                    }
                                    bill+=(quantity*35000);
                                }else if(product==3){
                                    if(tel.check(3,quantity)==false){
                                        cout<<"Sorry LG Television is out of stock"<<endl;
                                        goto item;
                                    }else{
                                        tel.sub(3,quantity);
                                    }
                                    
                                    bill+=(quantity*50000);
                                }else if(product==4){
                                    if(tel.check(4,quantity)==false){
                                        cout<<"Sorry Haier Television is out of stock"<<endl;
                                        goto item;
                                    }else{
                                        tel.sub(4,quantity);
                                    }
                                    
                                    bill+=(quantity*45000);
                                }else if(product==5){
                                    if(tel.check(5,quantity)==false){
                                        cout<<"Sorry Croma Television is out of stock"<<endl;
                                        goto item;
                                    }else{
                                        tel.sub(5,quantity);
                                    }
                                    bill+=(quantity*43000);
                                }else if(product==6){
                                    if(tel.check(6,quantity)==false){
                                        cout<<"Sorry Panasonic Television is out of stock"<<endl;
                                        goto item;
                                    }else{
                                        tel.sub(6,quantity);
                                    }

                                    bill+=(quantity*39000);
                                }
                            }
                    }else if(choice=='m' || choice=='M'){
                            
                        microwave:
                            cout<<"********* Microwave Details **********"<<endl;
                            cout<<"1) LG - 40000"<<endl;
                            cout<<"2) Samsung - 35000"<<endl;
                            cout<<"3) Haier - 50000"<<endl;
                            cout<<"4) Croma - 45000"<<endl;
                            cout<<"5) IFB - 43000"<<endl;
                            cout<<"6) Elica - 39000"<<endl;

                            cout<<"Please enter your choice"<<endl;
                            cin>>product;
                            if(product<1 || product>6){
                                cout<<"You have entered wrong choice"<<endl<<endl;
                                goto microwave;
                            }else{
                                cout<<"Enter the amount of product"<<endl;
                                cin>>quantity;
                                if(product==1){
                                    if(mic.check(1,quantity)==false){
                                        cout<<"Sorry LG Microwave is out of stock"<<endl;
                                        goto item;
                                    }else{
                                        mic.sub(1,quantity);
                                    }
                                    bill+=(quantity*40000);
                                }else if(product==2){
                                    if(mic.check(2,quantity)==false){
                                        cout<<"Sorry Samsung Microwave is out of stock"<<endl;
                                        goto item;
                                    }else{
                                        mic.sub(2,quantity);
                                    }

                                    bill+=(quantity*35000);
                                }else if(product==3){
                                    if(mic.check(3,quantity)==false){
                                        cout<<"Sorry Haier Microwave is out of stock"<<endl;
                                        goto item;
                                    }else{
                                        mic.sub(3,quantity);
                                    }
                                    
                                    bill+=(quantity*50000);
                                }else if(product==4){
                                    if(mic.check(4,quantity)==false){
                                        cout<<"Sorry Croma Microwave is out of stock"<<endl;
                                        goto item;
                                    }else{
                                        mic.sub(4,quantity);
                                    }
                                    bill+=(quantity*45000);
                                }else if(product==5){
                                    if(mic.check(5,quantity)==false){
                                        cout<<"Sorry IFB Microwave is out of stock"<<endl;
                                        goto item;
                                    }else{
                                        mic.sub(5,quantity);
                                    }
                                    bill+=(quantity*43000);
                                }else if(product==6){
                                    if(mic.check(6,quantity)==false){
                                        cout<<"Sorry Elica Microwave is out of stock"<<endl;
                                        goto item;
                                    }else{
                                        mic.sub(6,quantity);
                                    }

                                    bill+=(quantity*39000);
                                }
                            }
                    }else if(choice=='a' || choice=='A'){
                            
                        air:
                            cout<<"********* Air Conditioner Details **********"<<endl;
                            cout<<"1) LG - ₹40000"<<endl;
                            cout<<"2) Lloyd - 35000"<<endl;
                            cout<<"3) Daikin - 50000"<<endl;
                            cout<<"4) Rittal - 45000"<<endl;
                            cout<<"5) Hisene - 43000"<<endl;
                            cout<<"6) Voltas - 39000"<<endl;

                            cout<<"Please enter your choice"<<endl;
                            cin>>product;
                            if(product<1 || product>6){
                                cout<<"You have entered wrong choice"<<endl<<endl;
                                goto air;
                            }else{
                                cout<<"Enter the amount of product"<<endl;
                                cin>>quantity;
                                if(product==1){
                                    if(air.check(1,quantity)==false){
                                        cout<<"Sorry LG Air Conditioner is out of stock"<<endl;
                                        goto item;
                                    }else{
                                        air.sub(1,quantity);
                                    }

                                    bill+=(quantity*40000);
                                }else if(product==2){
                                    if(air.check(2,quantity)==false){
                                        cout<<"Sorry Lloyd Air Conditioner is out of stock"<<endl;
                                        goto item;
                                    }else{
                                        air.sub(2,quantity);
                                    }

                                    bill+=(quantity*35000);
                                }else if(product==3){
                                    if(air.check(3,quantity)==false){
                                        cout<<"Sorry Daikin Air Conditioner is out of stock"<<endl;
                                        goto item;
                                    }else{
                                        air.sub(3,quantity);
                                    }

                                    bill+=(quantity*50000);
                                }else if(product==4){
                                    if(air.check(4,quantity)==false){
                                        cout<<"Sorry Rittel Air Conditioner is out of stock"<<endl;
                                        goto item;
                                    }else{
                                        air.sub(4,quantity);
                                    }

                                    bill+=(quantity*45000);
                                }else if(product==5){
                                    if(air.check(5,quantity)==false){
                                        cout<<"Sorry Hisene Air Conditioner is out of stock"<<endl;
                                        goto item;
                                    }else{
                                        air.sub(5,quantity);
                                    }
                                    bill+=(quantity*43000);
                                }else if(product==6){
                                    if(air.check(6,quantity)==false){
                                        cout<<"Sorry Voltas Air Conditioner is out of stock"<<endl;
                                        goto item;
                                    }else{
                                        air.sub(6,quantity);
                                    }

                                    bill+=(quantity*39000);
                                }
                            }
                    }
                    cout<<endl<<"Total Bill - "<<bill<<endl<<endl;;
                    Again:
                        cout<<"Do you want to shop again y or n"<<endl;
                        cin>>choice;
                        cout<<endl<<endl;
                        if(choice=='y' || choice=='Y')
                            goto item;
                        else if(choice=='n' || choice=='N')
                            cout<<"Thank you for trading with us, Have a Great Day!!"<<endl<<endl;
                        else{
                            cout<<"You have entered wrong choice"<<endl<<endl;
                            goto Again;
                        }
                }
            return bill;
        }
};

int main(){

    Products product;
    char user;
    login:
        cout<<"Start trading as admin or customer"<<endl;
        cout<<"A for admin"<<endl;
        cout<<"C for customer"<<endl;
        cout<<"Any other key to stop software"<<endl;
        
        cin>>user;
        cout<<endl;
        if(user=='A' || user=='a'){
            string password;
            char choice;
            if(product.lock==0){
                cout<<"Set password"<<endl;
                product.set_password();
                cout<<"Password set successfully"<<endl<<endl;
            }
            cout<<"Enter the password"<<endl;
            cin>>password;

            if(product.check_password(password)==true){
                
                adminActivity:
                    cout<<"What do you want to do?"<<endl;
                    cout<<"P for change password"<<endl;
                    cout<<"A to add products in inventory"<<endl;

                    cin>>choice;
                    if(choice=='p' || choice=='P'){
                        product.set_password();
                        cout<<"Password changed successfully"<<endl;
                        goto login;
                    }else if(choice=='a' || choice=='A'){
                        product.add_products();
                        goto login;
                    }else{
                        goto adminActivity;
                    }
            }else{
                cout<<"Wrong password"<<endl;
                goto login;
            }
        }else if(user=='c' || user=='C'){
            char start;
            char choice;

            startL:
                cout<<"Please enter S to start shopping for home appliance"<<endl;
                start:
                    cin>>start;
                    if(start=='S' || start=='s'){
                        float total=product.shop();
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
                        cout<<"Total Bill Amount : "<<total<<endl<<endl;
                        goto login;
                    }else{
                        cout<<"You have entered wrong choice"<<endl<<endl;
                        goto start;
                    }
        }else{
            char last;
            cout<<"You sure want to exit? Y or N"<<endl;
            cin>>last;
            while(true){
                if(last=='y' || last=='Y')
                    return 0;
                else if(last=='n' || last=='N')
                    goto login;
                else
                    cout<<"You have entered wrong choice"<<endl;
            }
        }
}

