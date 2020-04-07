#include "and.h"

clAND::clAND(int iXval,int iYval,int iInputCount)
{
    this->setX(iXval);
    this->setY(iYval);
    this->iInputCount = iInputCount;
}

clAND::~clAND()
{

}

QRectF clAND::boundingRect() const
{
    return QRectF(0,0,20,20);
}

void clAND::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawLine(QLine(20,0,50,0));
    painter->drawLine(QLine(20,0,20,50));
    painter->drawLine(QLine(20,50,50,50));
    painter->drawArc(QRect(30,0,40,50),90*16,-180*16);
    painter->drawLine(QLine(70,25,100,25));

    switch (iInputCount)
    {
        case 1:
        {
            painter->drawLine(QLine(0,25,20,25));
        }break;
        case 2:
        {
            painter->drawLine(QLine(0,10,20,10));
            painter->drawLine(QLine(0,40,20,40));
        }break;
        case 3:
        {
            painter->drawLine(QLine(0,10,20,10));
            painter->drawLine(QLine(0,25,20,25));
            painter->drawLine(QLine(0,40,20,40));
        }break;
        case 4:
        {
            painter->drawLine(QLine(0,10,20,10));
            painter->drawLine(QLine(0,20,20,20));
            painter->drawLine(QLine(0,30,20,30));
            painter->drawLine(QLine(0,40,20,40));
        }break;
        case 5:
        {
            painter->drawLine(QLine(0,5,20,5));
            painter->drawLine(QLine(0,15,20,15));
            painter->drawLine(QLine(0,25,20,25));
            painter->drawLine(QLine(0,35,20,35));
            painter->drawLine(QLine(0,45,20,45));
        }break;
    }
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

bool clAND::fDetermineOutput()
{
    bool bReturn = true;

    for(auto b:clGate::bInputs)
    {
        if (b == false)
        {
            bReturn = false ;
        }
    }

    this->bOutput = bReturn;
    return bReturn;
}
