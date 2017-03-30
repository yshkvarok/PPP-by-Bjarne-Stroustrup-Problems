#ifndef VECTOR_H
#define VECTOR_H


class Vector
{
    public:
        Vector(int s);

        int size() const {return sz;}

        virtual ~Vector();

    protected:

    private:
        int sz;
        double* elem;
};

#endif // VECTOR_H
