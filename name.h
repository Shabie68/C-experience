
void name();
class Library{
  public:
    int number;
    char letter;
  Library(int mnumber);
  char getLetter();
  char nameof();
  ~Library();
  bool operator==(const Library & other);
  private:

    char na;
};
