//
// Created by Hamlet on 2021/9/22.
//

#include "farraylist.h"
#include <malloc.h>

template<typename T>
fs::ArrayList<T>::ArrayList(int size) : m_size(size) {
    if (size)
        m_list = (T *) malloc(size * sizeof(T));
    else
        m_list = nullptr;
}

template<typename T>
fs::ArrayList<T>::~ArrayList() {
    delete[] m_list;
}

template<typename T>
void fs::ArrayList<T>::append(const T &elem) {

}
