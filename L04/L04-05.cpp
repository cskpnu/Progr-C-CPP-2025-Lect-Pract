#include "iostream";

int main(){
    int n=10;
    int nums[n];

    for (int i = 0; i < n; i++){
        std::cout << "Enter nums2[" << i << "] = ";
        std::cin >> nums[i];
    }
    for (int i = 0; i < n; i++)
        std::cout << nums[i]  << " ";

    int max = nums[0];
    for (int i = 1; i < n; i++){
        if (nums[i] > max)
            max = nums[i];
    }
    std::cout << "max = " << max << std::endl;

    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += nums[i];
    }
    double avg = (double)sum / n;
    int dob = 1;
    for (int i = 0; i < n; i++){
        dob *= nums[i];
    }

    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            if (nums[i] > nums[j]){
                int tmp = nums[i];
                nums[i] = nums[j];
                nums[j] = tmp;
            }
        }
    }
    for (int i = 0; i < n-1; i++){
        for (int j = 1; j < n-i; j++){
            if (nums[j] < nums[j-1]){
                int tmp = nums[j-1];
                nums[j-1] = nums[j];
                nums[j] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++)
        std::cout << nums[i]  << " ";



    return 0;
}
