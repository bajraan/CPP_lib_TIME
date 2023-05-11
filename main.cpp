/*
 * 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
 * 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {

    string stat;          // AM / PM Status
    stringstream output;  // 
    int hh, mm, ss;       // 
    
    hh = stoi(s.substr(0,2));
    mm = stoi(s.substr(3,2));
    ss = stoi(s.substr(6,2));
    stat = s.substr(8,2);
 
    if( stat == "AM" ){
        if( hh==12) hh=0;
        output
        << setw(2) 
        << setfill('0')   
        << hh 
        << ":" 
        << setw(2) 
        << setfill('0')
        << mm
        << ":"
        << setw(2) 
        << setfill('0')
        << ss;      
    }
    else{
        if( hh!=12) hh+=12;
        output
        << setw(2) 
        << setfill('0')   
        << hh 
        << ":" 
        << setw(2) 
        << setfill('0')
        << mm
        << ":"
        << setw(2) 
        << setfill('0')
        << ss;
    }
    
    return output.str();
}
