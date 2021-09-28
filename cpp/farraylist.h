//
// Created by Hamlet on 2021/9/22.
//

#ifndef FTL_FARRAYLIST_H
#define FTL_FARRAYLIST_H

#include "flist.h"

namespace fs {
    template<typename T>
    class ArrayList : public List<T> {
    private:
        static const int DEFAULT_SIZE = 20;
        static const int MINIMUM_SIZE = 10;

        int m_currSize;
        int m_size;
        T* m_list;

        void changeSize(int size);
        void expandSize();
        void reduceSize();

    public:
        explicit ArrayList(int size = DEFAULT_SIZE);
        ~ArrayList() override;

        void append(const T &elem) override;
        void insert(int index, const T &elem) override;
        void remove(int index) override;
        void clear() override;

        void set(int index, const T &elem) override;
        [[nodiscard]] const T &get(int index) const override;

        [[nodiscard]] int length() const override;
        [[nodiscard]] bool isEmpty() const override;
    };
}

template class fs::ArrayList<int>;

#endif //FTL_FARRAYLIST_H
