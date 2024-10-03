/*QUESTION-A chols wishes to give a bouquet of flowers for theri birthday.For thsi ,the child asks for hrlp from freind.The friends gives N flowers
 numbered 1 to N and tells to arrange the flowers int he bouquet in a particular order.The firend asks to arrange the first K flowers in order of 
 the increasing length of the stem and the remainng flowers in order  descending order of stem
      Write an algorithim to find the final arrangments of the flowers in the boquet.
 

 INPUT:
 The first line of the input consiits of an integer -flowerStem_size, representing the number of flowers (N).  The second line consits of N space 
 spearted integers-flowerStem1,fleowerStemn.....,representing the length of the flower stems. The last line consits of an integer K


 OUTPUT:
 Print N spaces speprated integers represneting the final arrangments of the flowers in the bouquet.


 CONSTRANITS:
 0<=random<=flowerStem_size  // meaning?

 0<=flowerStem_size<10^6 //meaning?

 */

//SIMPLE CODE WITHOUT ANY EXTRA CONDITIONS(recomended)
/*#include<iostream>
#include<algorithm>
using namespace std;
int flowers(int arr[],int size,int Kth){
   //Sorting in ascending order till kth element
   sort(arr,arr+Kth);
   //Sorting in descending order after kth+1 element;
   sort(arr+Kth,arr+size,[](int a,int b){
      return a>b;
   });
   //return arr;
}


int main(){
   int a[]={4,1};//{1},{4,2,1,6,7}//by default the for loop is from 0 but sort function is from 1
   int K;

   //print the size of the array
   int n= sizeof(a)/sizeof(a[0]);

   cout<<"The size of the array="<< n<<endl;

   //PRINT THE STEM SIZE OF ARRAY
   for(int i=0 ;i<n;i++){
      cout<<a[i]<<" ";
   }
   cout<<endl;

   //ENter the value of k
   cout<<"Enter the value of k"<<endl;
   cin >> K;
   //int boquet=flowers(a,n,K);
   flowers(a,n,K);

   cout<<"The final result is =";
   for(int i=0;i<n;i++){
      //cout<<boquet[i]<<" ";
      cout<<a[i]<<" ";
      
   }
   return 0;
}
*/








// CODE-2 WITH Extra codnitons could be not having on eor zero flower and not having negative length flowers//


   







//CODE-3A little different condept wher different arrays are used(BRAINLY)

   //ALGORITHIM OF BRAINLY
   /*The algorithm to find the final arrangement of the flower sticks in the bouquet can be written as follows:

Take the input N and K, the number of flower sticks and the number of sticks to be arranged in increasing order.

Create two arrays, one for the first K sticks (sorted_inc) and one for the remaining sticks (sorted_dec)

Sort the first K sticks in increasing order and store them in sorted_inc array.

Sort the remaining N-K sticks in decreasing order and store them in sorted_dec array.

Create a final array (final_arr) to store the final arrangement of the flower sticks.

Start a loop from 0 to K-1 and copy the elements from sorted_inc to final_arr.

Start another loop from 0 to N-K-1 and copy the elements from sorted_dec to final_arr.

Finally, print the final_arr which is the final arrangement of the flower sticks.

This algorithm uses two arrays and sorting algorithms to find the final arrangement of the flower sticks as per the requirement.
*/




//USING POINTERS
/*#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cout << "Enter the number of flower sticks (N): ";
    cin >> N;
    cout << "Enter the number of sticks to be arranged in increasing order (K): ";
    cin >> K;

    int* sorted_inc = new int[K];
    int* sorted_dec = new int[N - K];
    int* final_arr = new int[N];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < N; ++i) {
        cin >> final_arr[i];
    }

    // Sort the first K sticks in increasing order and store them in sorted_inc array
    sort(final_arr, final_arr + K);

    // Sort the remaining N-K sticks in decreasing order and store them in sorted_dec array
    sort(final_arr + K, final_arr + N, greater<int>());

    // Copy elements from sorted_inc to final_arr
    for (int i = 0; i < K; ++i) {
        final_arr[i] = sorted_inc[i];
    }

    // Copy elements from sorted_dec to final_arr
    for (int i = 0; i < N - K; ++i) {
        final_arr[K + i] = sorted_dec[i];
    }

    cout << "The final arrangement of the flower sticks is: ";
    for (int i = 0; i < N; ++i) {
        cout << final_arr[i] << " ";
    }
    cout << endl;

    delete[] sorted_inc;
    delete[] sorted_dec;
    delete[] final_arr;

    return 0;
}
*/
      
//NO POINTERS
/*#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cout << "Enter the number of flower sticks (N): ";
    cin >> N;
    cout << "Enter the number of sticks to be arranged in increasing order (K): ";
    cin >> K;

    int sorted_inc[K];
    int sorted_dec[N - K];
    int final_arr[N];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < N; ++i) {
        cin >> final_arr[i];
    }

    // Sort the first K sticks in increasing order and store them in sorted_inc array
    copy(final_arr, final_arr + K, sorted_inc);
    sort(sorted_inc, sorted_inc + K);

    // Sort the remaining N-K sticks in decreasing order and store them in sorted_dec array
    copy(final_arr + K, final_arr + N, sorted_dec);
    sort(sorted_dec, sorted_dec + (N - K), greater<int>());

    // Copy elements from sorted_inc to final_arr
    copy(sorted_inc, sorted_inc + K, final_arr);

    // Copy elements from sorted_dec to final_arr
    copy(sorted_dec, sorted_dec + (N - K), final_arr + K);

    cout << "The final arrangement of the flower sticks is: ";
    for (int i = 0; i < N; ++i) {
        cout << final_ar
*/
