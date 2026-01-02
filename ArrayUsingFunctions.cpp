/*
in c++ an array can be passed using a pointr or reference
methods to pass an array to a function in c++

1> As an sized array
2> as an unsized array
3> as a pointer
4> as a reference

*/

/*

passing as a sized array
GENERAL SYNTAX
return type function name (type arr[size],int size)
               OR

 int bubbleSort(int a[20],20)

*/

// SIZED ARRAY
#include <iostream>
using namespace std;

int sum(int a[5])

{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + a[i];
        return sum;
    }
};

int main()
{
    int a[5] = {10, 20, 30, 40, 50};

    cout << "the sum of array is:" << sum(a);

    return 0;
}




// UNSIZED ARRAY
#include <iostream>
using namespace std;

int sum(int a[], int size)

{

    int result = 0;
    for (int i = 0; i < size; i++)
    {

        result = result + a[i];
        return result;
    }
};
int main()
{

    int a[] = {10, 20, 30, 40, 50, 60, 70} ;

    int result = sum(a, 8);
    cout << "the sum of array is:" << result;

    return 0;
}



//to find max element of array
int sum(int arr[],int n)
{
  
    int max  = arr[0];   //first element
    for (int i = 1;i< n;i++)
    {
       if(arr[i]>max)
       max = arr[i];
    }

    return max;


}
int main()
{

    int a[] = {10, 20, 30, 40, 50, 60, 70, 80} ;
    int result;

    result = sum(a, 8);
    cout << "the sum of array is:" << result;

    return 0;
}


// int size = sizeof(arr) or sizeof)arr[0]


/*  POINT WITH REFERENCE
IN THis method we pass an arrray to a funciton as a reference 
return type function_name(type &array[size])

pOINT WITH pOINTER
return type function name(type *array)


*/

