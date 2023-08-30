 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     string bucky[10];
     int a = 5;
     double b;
     float c;
     cout<<"int = "<<sizeof(a)<<endl;
     cout<<"double = "<<sizeof(b)<<endl;
     cout<<"float = "<<sizeof(c)<<endl;
     cout<<sizeof(bucky)<<endl;
     cout<<sizeof(bucky)/sizeof(bucky[0])<<endl;

     int number=3;
     cout<<"number="<<sizeof(number)<<endl;



     int A=0;
     double d=12.21;
     printf("====%d\n",sizeof(a+b));
     cout<<"Size of a+b="<<sizeof(a+b);
 }
