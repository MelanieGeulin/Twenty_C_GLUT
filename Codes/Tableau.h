#ifndef DEF_TABLEAU
#define DEF_TABLEAU

class Tableau
{
    private:
    int m_nbline = 9;
    int m_nbcolumn = 7;
    int m_tab[9][7];

    public:
    void init_tab();
    void lines_up();
    bool game_over();
};

#endif
