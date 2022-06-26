# include <iostream>
using namespace std;

// function f(x) = x^2 + 2;
int sum(int a,int b)
{
    int c;
    c = a + b;
    return c;
}

int main(){
    // cout<<"hello world harry"<<endl;
    // cout<<"Next line"<<endl;


    // Enter Number
    /*
    int a,b;
    cout<<"Enter first number"<<endl;
    cin>>a;

    cout<<"Enter Second number"<<endl;
    cin>>b;

    cout<<"a + b is "<<a + b<<endl;
    cout<<"a - b is "<<a - b<<endl;
    cout<<"a * b is "<<a * b<<endl;
    cout<<"a / b is "<<(float) a / b<<endl;
    */

   // if else condition
   /* int age;
   cout<<"Enter your age"<<endl;
   cin>>age;

   if ( age>150 || age<1 ){
    cout<<"Invalid age";
   }

   else if( age>=18 ){
    cout<<"you are vote";
   }

   else{
    cout<<"you cannot vote";
   }
   */

    //   Switch Case
    /*
        int age;
        cout<<"Enter your age"<<endl;
        cin>>age;

        switch (age)
        {
        case 12:
            cout<<"Your are 12 years old"<<endl;
            break;
        case 18:
            cout<<"You are 18 years old"<<endl;
            break; 
        default:
            cout<<"You are nither 12 nor 18 years old"<<endl;
            break;
        }
    */

    // Loops

    // While Loop
    /*
        int index = 0;
        while( index<34 )
        {
            cout<<"We are at index number "<<index<<endl;
            index = index + 1;
        }
    */

    //    Do While loop
    /*
        int index = 0;
        do {
            cout<<"We are at index number "<<index<<endl;
            index = index + 1;
        }while( index > 3453 );
    */

    // for loop
    /*
        for (int i = 0; i < 34; i++)
        {
            cout<<"We are at index number "<<i<<endl;
        }
    */
    
    // Function
    /*
        int a,b;
        cout<<"Enter first number"<<endl;
        cin>>a;

        cout<<"Enter Second number"<<endl;
        cin>>b;

        cout<<"The function returned "<<sum(a,b)<<endl;
    */

    // array
    /* 
        int arr[] = {1,3,6};
        // cout<<arr[2];

        int marks[6];
        for( int i = 0; i< 6; i++){
            cout<<"Enter the mark of "<<i<<"th student"<<endl;
            cin>>marks[i];
        }

        for ( int i =0;i < 6;i++ )
        {
            cout<<"Mark of "<<i<<"th student is "<<marks[i]<<endl;
        }
    */


    return 0;
}