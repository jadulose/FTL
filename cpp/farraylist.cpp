//
// Created by Hamlet on 2021/9/22.
//

#include "farraylist.h"

template<typename T>
fs::ArrayList<T>::ArrayList(int size) : m_size(size), m_currSize(0) {
    m_list = size > 0 ? new T[size] : nullptr;
}

template<typename T>
fs::ArrayList<T>::~ArrayList() {
    delete[] m_list;
}

template<typename T>
void fs::ArrayList<T>::changeSize(int size) {
    m_size = size;
    T *new_list = new T[m_size];
    for (int i = 0; i < m_currSize; ++i) {
        new_list[i] = m_list[i];
    }
    delete[] m_list;
    m_list = new_list;
}

template<typename T>
void fs::ArrayList<T>::expandSize() {
    int new_size = m_size + m_size / 2 + 1;
    if (MINIMUM_SIZE > new_size)
        new_size = MINIMUM_SIZE;
    changeSize(new_size);
}

template<typename T>
void fs::ArrayList<T>::reduceSize() {
    if (MINIMUM_SIZE >= m_size)
        return;
    int new_size = m_size * 2 / 3;
    if (m_currSize >= new_size)
        return;
    if (MINIMUM_SIZE > new_size)
        new_size = MINIMUM_SIZE;
    changeSize(new_size);
}

template<typename T>
void fs::ArrayList<T>::append(const T &elem) {
    if (m_currSize == m_size)
        expandSize();
    m_list[m_currSize++] = elem;
}

template<typename T>
void fs::ArrayList<T>::insert(int index, const T &elem) {
    if (m_currSize == m_size)
        expandSize();
    for (int i = m_currSize; i > index; --i) {
        m_list[i] = m_list[i - 1];
    }
    ++m_currSize;
    m_list[index] = elem;
}

template<typename T>
void fs::ArrayList<T>::remove(int index) {
    for (int i = index + 1; i < m_currSize; ++i) {
        m_list[i - 1] = m_list[i];
    }
    --m_currSize;
    reduceSize();
}

template<typename T>
void fs::ArrayList<T>::clear() {
    m_currSize = 0;
    changeSize(MINIMUM_SIZE);
}

template<typename T>
int fs::ArrayList<T>::length() {
    return m_currSize;
}

template<typename T>
bool fs::ArrayList<T>::isEmpty() {
    return m_currSize == 0;
}

template<typename T>
void fs::ArrayList<T>::set(int index, const T &elem) {
    m_list[index] = elem;
}

template<typename T>
const T &fs::ArrayList<T>::get(int index) const {
    return m_list[index];
}
