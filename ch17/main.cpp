#include "../std_lib_facilities.h"

int print_array10(ostream& os, int* a){ //4. feladat
    for (int i=0; i<10; i++)
        cout << a[i] << ' ';
    cout << '\n';
}

int print_array(ostream& os, int* a, int n){
    for (int i=0; i<n; i++)
        cout << a[i] << ' ';
    cout << '\n';                   //7. feladat
}

int print_vector(ostream& os, vector<int> v){
    for (int i=0; i<v.size(); i++)
        cout << v[i] << ' ';
    cout << '\n';
}

int main()
{
    int* a = new int[10];           //1. feladat

    for(int i = 0; i<10; i++)
        cout << a[i] << ' ';        //2. feladat
    cout << '\n';

    cout << "\narrays\n";
    print_array10(cout,a);

    delete[] a;                     //3. feladat

    int* b = new int[10] {100,101,102,103,104,105,106,107,108,109};
    print_array10(cout,b);          //5. feladat

    int* c = new int[11] {100,101,102,103,104,105,106,107,108,109,110};
    for (int i=0; i<11; i++)        //6. feladat
        cout << c[i] << ' ';
    cout << '\n';

    int* d = new int[20] {100,101,102,103,104,105,106,107,108,109
                         ,110,111,112,113,114,115,116,117,118,119};
    print_array(cout,d,20);         //8. feladat

    delete[] b;
    delete[] c;
    delete[] d;                     //9. feladat

    vector<int> vect_b {100,101,102,103,104,105,106,107,108,109};
    cout << "\nvect_b: ";
    print_vector(cout,vect_b);      //10. feladat

    vector<int> vect_c {100,101,102,103,104,105,106,107,108,109,110};
    cout << "\nvect_c: ";
    print_vector(cout,vect_c);

    vector<int> vect_d {100,101,102,103,104,105,106,107,108,109,
                        110,111,112,113,114,115,116,117,118,119};
    cout << "\nvect_d: ";
    print_vector(cout,vect_d);

    cout << "\n2. resz:\n";         //2. rész

    int a2 = 7;                     //1. feladat
    int* p1 = &a2;

    cout << "p1==" << p1 << " *p1==" << *p1 << '\n';    //2. feladat

    int* b2 = new int[7] {1,2,4,8,16,32,64};            //3. feladat
    int* p2 = b2;

    cout << "p2==" << p2 << " *p2==" << *p2 << '\n';    //4. feladat

    int* p3 = p2;                                       //5. feladat
    p2=p1;                                              //6. feladat
    p3=p2;                                              //7. feladat

    cout << "p1==" << p1 << " *p1==" << *p1 << '\n';
    cout << "p2==" << p2 << " *p2==" << *p2 << '\n';    //8. feladat

    delete[] b2;                    //9. feladat
    delete[] p1;
    delete[] p2;
    delete[] p3;

    int* exp = new int[10] {1,2,4,8,16,32,64,128,256,512};
    int* s1 = exp;                  //10. feladat

    int* emp = new int[10];
    int* s2 = emp;                  //11. feladat

    for(int i=0;i<10;i++)           //12. feladat
    {
        s2[i] = s1 [i];
    }
    for(int i=0;i<10;i++)
    {
        cout << s2[i] << ' ';
    }

    delete[] s1;
    delete[] s2;

    vector<int> vect_s1 {1,2,4,8,16,32,64,128,256,512};     //13/10. feladat

    vector<int> vect_s2(10);        //13/11. feladat

    for(int i=0;i<10;i++)           //13/12. feladat
    {
        vect_s2 [i] = vect_s1 [i];
    }

    cout << '\n';
    for(int i=0;i<10;i++)
    {
        cout << vect_s2[i] << ' ';
    }

    return 0;
}
