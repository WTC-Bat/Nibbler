#ifndef SIZE_HPP
# define SIZE_HPP

class Size
{
    private:
        /* Fields */
        int                 _width;
        int                 _height;

        /* Private Functions */

    public:
        /* Constructors */
        Size(void);
        Size(int width, int height);
        Size(const Size& size);

        /* Destructors */
        ~Size(void);

        /* Operator Overloads */
        Size&               operator=(const Size& size);

        /* Member Functions */
        int                 getWidth(void) const;
        int                 getHeight(void) const;
        void                setWidth(const int width);
        void                setHeight(const int height);        
};

#endif