//
// Created by Hamlet on 2021/9/22.
//

#ifndef FTL_FLIST_H
#define FTL_FLIST_H

namespace fs {
    template<typename T>
    class List {
    public:
        List() = default;
        virtual ~List() = 0;

        virtual void append(const T &elem) = 0;
        virtual void insert(int index, const T &elem) = 0;
        virtual void remove(int index) = 0;
        virtual void clear() = 0;

        virtual void set(int index, const T &elem) = 0;
        virtual const T &get(int index) const = 0;

        virtual int length() = 0;
        virtual bool isEmpty() = 0;
    };
}

#endif //FTL_FLIST_H
