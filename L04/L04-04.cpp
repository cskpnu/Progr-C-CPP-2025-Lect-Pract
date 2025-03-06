#include "iostream";

int main(){
    int nums[10];
    for (int i = 0; i < 10; i++)
        nums[i] = i * i;
    for (int i = 0; i<10; i++){
        std::cout << "nums[" << i << "] = " << nums[i] << std::endl;
    }

    int nums1[10] = {0, 1, 4, 9, 16, 25, 36, 49, 64, 81};
    int nums2[10];
    for (int i = 0; i < 10; i++)
        std::cin >> nums2[i];
    for (int i = 0; i < 10; i++)
        std::cout << "nums2[" << i << "] = " << nums2[i] << std::endl;
    return 0;
}
