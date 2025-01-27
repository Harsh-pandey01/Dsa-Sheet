// We are given an array and we have to find if the array is sorted or not

// Approch is :- WE TRY TO SEARCH FOR THE ELEMENTS AND IF THE ELEMENTS ARE SORTED WE RETURN TRUE

// TAKE A POINTER AND TRY TO SEARCH IF THE ELEMENT IS SORTED IF YES

#include <iostream>
#include <vector>
using namespace std;

bool checkSorted(vector<int>&nums,int index){
if(index == nums.size()-1) return true ;

if(nums[index] > nums[index+1]) return false ;

return checkSorted(nums,index+1);

}

int main()
{

    vector<int> nums = {1, 22, 3, 4, 5};

    if (checkSorted(nums,0))
    {
        cout << "Array is Sorted";
    }else{
        cout <<"Array is Not Sorted" ;
    }

    return 0;
}
