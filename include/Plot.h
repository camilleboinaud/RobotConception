#ifndef PLOT_H
#define PLOT_H


class Plot
{
    public:
        Plot(int h = 0) : _hauteur(h) {};

        int hauteur(){return _hauteur;}
        void hauteur(int h){_hauteur = h;}

    private:
        int _hauteur;
};

#endif // PLOT_H