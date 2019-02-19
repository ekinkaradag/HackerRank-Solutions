/* Define the exception here */
class BadLengthException 
{
    private:
        int n;
    public:
        BadLengthException(int len): n(len) {}
        int what() const{ return n; }

};