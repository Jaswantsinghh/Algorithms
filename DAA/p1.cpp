#include<bits/stdc++.h>
using namespace std;
bool binary_search_util(int input_crn, int crn_array[], int mid, int left, int right)
{
    while(left<right)
    {
        mid = (left+right)/2;
        if(crn_array[mid]==input_crn)
        {
            return true;
        }
        else if(crn_array[mid]>input_crn)
        {
            right = mid;
        }
        else if(crn_array[mid]<input_crn)
        {
            left = mid+1;
        }
    }
    return false;
}

int main(){
    int crn_array[5]={1915040, 1915041, 1915042, 1915043, 1915044};
    int input_crn;
    cout <<"Enter your roll number\n";
    cin >> input_crn;
    int left = 0, right = 4;
    int mid = (left+right) / 2;
    bool res = binary_search_util(input_crn, crn_array, mid, left, right);
    if(res) cout << "CRN "<<input_crn<<" found!";
    else cout<<"CRN "<<input_crn<<" not found!";
    return 0;
}
