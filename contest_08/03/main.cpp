#include <iostream>
//1
int* new_array(int len, int value);
//2
int set_new_length(int** array, int old_len, int new_len);
//3
int merge(int** dest_array, int len_dest_array, const int* src_array, int len_src_array);
//4
int dot(const int* a, const int* b, int len);
//5
int* find(int* array, int len, int value);
//6
void delete_array(int** array);

int main(){
    int len_first, len_second,
        first_init_val, second_init_val;
    std::cin >> len_first >> first_init_val >> len_second >> second_init_val;
    int* first  = new_array(len_first, first_init_val);
    int* second = new_array(len_second, second_init_val);
    
    int new_len_first;
    std::cin >> new_len_first;
    len_first = set_new_length(&first, len_first, new_len_first);
    for(int i=0; i < new_len_first; i++){
        int value;
        std::cin >> value;
        first[i] = value;
    }
    
    len_second = merge(&second, len_second, first, len_first);
    
    len_second = set_new_length(&second, len_second, len_first);
    
    int value = dot(first, second, len_first);
    
    int* value_ptr;
    while( (value_ptr = find(second, len_second, value)) != nullptr ){
        *value_ptr = 0;
    }
    
    for (int i=0; i < len_second; i++) std::cout << second[i] << ' ';

    delete_array(&first);
    delete_array(&first);  // Так и задумано
    delete_array(&second);
    delete_array(&second); // Так и задумано
}
//

//1
int* new_array(int len, int value){
    int* arr_new = new int[len];
    for(int i = 0; i < len; i++){
        arr_new[i] = value;
    }
    return arr_new;
}
//2
int set_new_length(int** array, int old_len, int new_len){
    int* arr_new = new int[new_len];
    if(old_len > new_len){
        for(int i = 0; i < new_len; i++){
            arr_new[i] = (*array)[i];
        }
    } else {
        for(int i = 0; i < old_len; i++){
            arr_new[i] = (*array)[i];
        }
    }
    delete[] *array;
    *array = arr_new;
    return new_len;
}
//3
int merge(int** dest_array, int len_dest_array, const int* src_array, int len_src_array) {
    int* arr_new = new int[len_dest_array + len_src_array];
    int i;
    for (i = 0; i < len_dest_array; i++) {
        arr_new[i] = (*dest_array)[i];
    }
    for (int k = 0; i < len_dest_array + len_src_array; i++) {
        arr_new[i] = src_array[k];
        k++;
    }
    delete[] *dest_array;
    *dest_array = arr_new;
    return len_dest_array + len_src_array;
}
//4
int dot(const int* a, const int* b, int len) {
    int result = 0;
    for (int i = 0; i < len; i++) {
        result += a[i] * b[i];
    }
    return result;
}
//5
int* find(int* array, int len, int value) {
    for (int i = 0; i < len; i++) {
        if (array[i] == value) {
            return &array[i];
        }
    }
    return nullptr;
}
//6
void delete_array(int** array) {
    if (*array == nullptr) {
        return;
    }
    delete[] *array;
    *array = nullptr;
}

//
