// <Nana Boateng> <Amoah> && <Bhavesh> <Bhagtani>
// <04/22/23>
// <Course Code: CS-475W-1>
// <Lab Module # : 7>
// License: Copyright <2023> <Nana Boateng Amoah> && <Bhavesh> <Bhagtani>
// Resources used: <Lecture 7 and 8 from Class slides>
// Worked with <Bhavesh Bhagtani>
// <Contains object models to abstract entities for our simulation>

#include <string> // standard string class
#include <vector> // standard template vector
#include <queue>  // standard queue data structure.
#include "../headers/Event.h"

int Event::getid() const{
    return id;
}
int Event::getType() const{
    return  type;
}
int Event::getJob() const{
    return jobId;
}

Event::Event(int id, int type, int prio){
    
}