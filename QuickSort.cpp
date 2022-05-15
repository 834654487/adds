#include "QuickSort.h"


std::vector<int> QuickSort::sort(std::vector<int> list) {
    quick_sort(list, 0, list.size() - 1);
    return list;
}


void QuickSort::quick_sort(std::vector<int>& list, int left, int right){

    int i, j, pivot;
    int temp;
    if (left < right) {
        pivot = left;
        i = left;
        j = right;
        while (i < j) {
            while (list[i] <= list[pivot] && i < right)
                i++;
            while (list[j] > list[pivot])
                j--;
            if (i < j) {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
        temp = list[pivot];
        list[pivot] = list[j];
        list[j] = temp;
        quick_sort(list, left, j - 1);
        quick_sort(list, j + 1, right);
    }
}