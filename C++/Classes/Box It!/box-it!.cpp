class Box{
private:
    int l=0,b=0,h=0;
public:
    Box(){}
    Box(int x, int y, int z){
        l=x;b=y;h=z;

    }
    Box(const Box& a){
        l=a.getLength();b=a.getBreadth();h=a.getHeight();
    }

    int getLength()const{ return l; }
    int getBreadth ()const{ return b;} // Return box's breadth
    int getHeight ()const{ return h;}  //Return box's height
    long long CalculateVolume(){ return (long long)((long long)(l)*(long long)(b)*(long long)(h)); } // Return the volume of the box
    bool operator<(Box &B) {
        if(l < B.getLength()){
            return true;
        }else if( b < B.getBreadth() && l == B.getLength()){
            return true;
        }else if( h < B.getHeight() && b == B.getBreadth() && l == B.getLength()){
            return true;
        }else{
            return false;
        }
        
    }
    
};

ostream& operator<<(ostream& out, Box B){
        int x=B.getLength();
        int y=B.getBreadth();
        int z=B.getHeight();
        return out<<x<<' '<<y<<' '<<z;
    }
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

