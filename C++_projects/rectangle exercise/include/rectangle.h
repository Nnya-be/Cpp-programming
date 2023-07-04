#ifndef RECTANGLE_H
#define RECTANGLE_H


class rectangle
{
    public:
        rectangle( );

    void setCoordinates();

    void setLength();
    void setWidth();
    float setArea();
    float setPerimeter();

    float getLength()const;
    float getWidth()const;

    void square();

    void displayCalculation()const;

    private:
        //declaring the coordinates variables
        float x1;
        float x2;
        float x3;
        float x4;
        float y1;
        float y2;
        float y3;
        float y4;

        //declaring manipulation variables
        float length;
        float width;
        float area;
        float perimeter;
};

#endif // RECTANGLE_H
