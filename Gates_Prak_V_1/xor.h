#ifndef XOR_H
#define XOR_H

#include "gate.h"

class clXOR: public clGate
{
    public:
        clXOR(int iXval,int iYval,int iInputCount);
        virtual ~clXOR();
        QRectF boundingRect() const;
    private:
    protected:
        bool    fDetermineOutput();
        void    paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);
};

#endif // XOR_H
