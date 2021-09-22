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
        int m_size;
        T* m_list;

    public:
        explicit ArrayList(int size = 0);
        ~ArrayList() override;

        void append(const T &elem) override;
        void insert(int index, const T &elem) override;
        void remove(int index) override;
        void clear() override;

        void set(int index, const T &elem) override;
        const T &get(int index) override;

        int length() override;
        bool isEmpty() override;
    };
}

#endif //FTL_FARRAYLIST_H
