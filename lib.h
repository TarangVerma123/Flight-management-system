  class master_file
  {
    private:
    char flno[10];
    char flnm[20];
    char flar[15];
    char fldst[15];
    char flstp[20];
    int flnst;
    char fltm[11];
    float flprc;
    void td();
    public:
    char* retsfldst();
    char* retsflar();
    char* retsflno();
    void input();
    void display();
  };



  char * master_file::retsfldst()
  {
    return fldst;
    }

  char * master_file::retsflar()
  {
    return flar;
    }


 char * master_file::retsflno()
  {
    return flno;
    }



 void master_file::input()
  {    cout<<" ############    AIR INDIA   ############# "<<endl;
       cout<<"Enter the flight number                    : ";
       gets(flno);
       cout<<"Enter the flight name                      : ";
       gets(flnm);
       cout<<"Enter the flight arrival                   : ";
       gets(flar);
       cout<<"Enter the destiny                          : ";
       gets(fldst);
       cout<<"Enter the name of the flight stops         : ";
       gets(flstp);
       cout<<"Enter the number of the flight stops       : ";
       cin>>flnst;
       cout<<"Enter the flight time                      : ";
       gets(fltm);
       cout<<"Enter the flight price for a single person : ";
       cin>>flprc;

	}






 void master_file::display()
  {    cout<<" Flight no.           : ";
       cout<<flno<<endl;
       cout<<" Flight name          : ";
       cout<<flnm<<endl;
       cout<<" Arrival location     : ";
       cout<<flar<<endl;
       cout<<" Destination location : ";
       cout<<fldst<<endl;
       cout<<" Flight stops 	    : ";
       cout<<flstp<<endl;
       cout<<" Number of stops      : ";
       cout<<flnst<<endl;
       cout<<" Flight time 	    : ";
       cout<<fltm<<endl;
       cout<<" Price per person     : ";
       cout<<flprc<<endl;

    getch();
  }



    class customer_file
  {
  private:
  char date[11];
  char cid[25];
  char  cnm[30];
  char cage[3];
  char cadd[50];
  char cdst[20];
  char car[20];
  char mop[10];
  public:
  char* retscdst();
  char* retscar();
  char* retscid();
  void Input();
  void Display();
  };

  char * customer_file::retscdst()
  {
    return cdst;
    }

  char * customer_file::retscar()
  {
    return car;
    }


  char * customer_file::retscid()
  {
    return cid;
    }



    void customer_file::Input()
  {    cout<<" ############    AIR INDIA   ############# "<<endl;
       cout<<"Enter the date                             : ";
       gets(date);
       cout<<"Enter the customer ID                      : ";
       gets(cid);
       cout<<"Enter the customer name                    : ";
       gets(cnm);
       cout<<"Enter the customer age                     : ";
       gets(cage);
       cout<<"Enter the customer address                 : ";
       gets(cadd);
       cout<<"Enter the customer destination location    : ";
       gets(cdst);
       cout<<"Enter the customer arriving location       : ";
       gets(car);
       cout<<"Enter the mode of payment                  : ";
       gets(mop);

	}






 void customer_file::Display()
  {    cout<<" Date                 : ";
       cout<<date<<endl;
       cout<<" ID                   : ";
       cout<<cid<<endl;
       cout<<" Name                 : ";
       cout<<cnm<<endl;
       cout<<" Age                  : ";
       cout<<cage<<endl;
       cout<<" Address    	    : ";
       cout<<cadd<<endl;
       cout<<" Destination          : ";
       cout<<cdst<<endl;
       cout<<" arriving location    : ";
       cout<<car<<endl;
       cout<<" Mode of payment      : ";
       cout<<mop<<endl;

    getch();
  }




  class transaction_file
  {
  private:
  int bkno;
  char cstid[10];
  char fltno[10];
  int mop;
  int price;

  public:
  int retsbkno();
  void input(int);
  void display();
  };



  int transaction_file::retsbkno()
  {
    return bkno;
    }


  void transaction_file::input(int b)
  {
  bkno=b;
  cout<<"Booking Number    : "<<b<<endl;
  cout<<"Customer id       : ";
  gets(cstid);cout<<endl;
  cout<<"Flight number     : ";
  gets(fltno);cout<<endl;
  cout<<"Mode of payments are \n";
  cout<<"1. Cash \n"<<"2. Online \n"<<"3. Credit card \n"<<"4. Debit card\n";
  cout<<"Payment Mode      : ";
  cin>>mop; cout<<endl;
  cout<<"Price             : ";
  cin>>price;cout<<endl;
  }


  void transaction_file::display()
  {
  cout<<" booking number  : ";
  cout<<bkno<<endl;
  cout<<" Customer id     : ";
  cout<<cstid<<endl;
  cout<<" Flight number   : ";
  cout<<fltno<<endl;
  cout<<" Mode of payment : ";
  cout<<mop<<endl;
  cout<<" Price           :";
  cout<<price<<endl;
  }
