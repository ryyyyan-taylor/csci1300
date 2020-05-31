// CSCI1300 Fall 2018
// Author: <Ryan Taylor>
// Recitation: 105 – Ashwin Sankaralingam
// Cloud9 Workspace Editor Link: https://ide.c9.io/ryta4737/recitation
// HW 5, #2

/**
 * Take four string inputs, three of the same length and one shorter
 * If any of the strings are empty, print an error and return 0
 * If any of the first three strings are not the same length, print an error and return 0
 * If the last string is longer than the first three, print an error and return 0
 * Starting with the first position, calculate the similarity score for each of the first three strings and the last string
 * Move to the next letter, and calculate the similarity score from that position
 * Assign the lowest of the 2 scores and assign that as the hamming distance for each string
 * Repeat lines 13 and 14 until the end of the strings
 * Calculate the similarity score for each using the lowest hamming distance for each of the three strings
 * Print which string is the best match based on which has the highest similairty score
 * If multiple have the same score, print multiple
 * Return nothing
 */

#include <iostream>
#include <string>
using namespace std;

int analyzer(string g1, string g2, string g3, string seq){
    
    
    // edge case for any empty strings
    if(g1.empty() || g2.empty() || g2.empty() || seq.empty()){
        cout<<"Genome and sequence cannot be empty.";
        return 0;
    }
    
    // edge case for abnormal lengths
    if(g1.length() != g2.length() || g1.length() != g3.length()){
        cout<<"Genome length does not match.";
        return 0;
    }
    
    // edge case for a sequence that is longer than the genome
    if(seq.length() > g1.length()){
        cout<<"Sequence length must be smaller than genome length.";
        return 0;
    }
    
    int length = (g1.length() + g2.length() + g3.length()) / 3;
    
    float hamdist1 = seq.length();
    float hamdist2 = seq.length();
    float hamdist3 = seq.length();
    

    for(int i=0; i<=length; i++){
        
        // reset the individual hamming distances each time
        float hamd1 = 0;
        float hamd2 = 0;
        float hamd3 = 0;
        int j = i;
        
        for(int x=0; x<seq.length(); x++){
            
            // if the letters are the same, hamming distance does not change
            if(g1[j] == seq[x]){
                hamd1 == hamd1;
            }
            
            // if the letters are different, +1 to hamming distance
            else if(g1[j] != seq[x]){
                hamd1++;
            }
            
            // if the letters are the same, hamming distance does not change
            if(g2[j] == seq[x]){
                hamd2 == hamd2;
            }
            
            // if the letters are different, +1 to hamming distance
            else if(g2[j] != seq[x]){
                hamd2++;
            }
            
            // if the letters are the same, hamming distance does not change
            if(g3[j] == seq[x]){
                hamd3 == hamd3;
            }
            
            // if the letters are different, +1 to hamming distance
            else if(g3[j] != seq[x]){
                hamd3++;
            }
            
            // increment the letter of the sequence that the function is on each time
            j++;
        }
        
        // reassign the global hamming distance for each string to be the lowest hamming distance achieved so far
        if(hamdist1 > hamd1){
            hamdist1 = hamd1;
        }
        else if(hamdist1 < hamd1){
            hamdist1 = hamdist1;
        }
        
        if(hamdist2 > hamd2){
            hamdist2 = hamd2;
        }
        else if(hamdist2 < hamd2){
            hamdist2 = hamdist2;
        }
        
        if(hamdist3 > hamd3){
            hamdist3 = hamd3;
        }
        else if(hamdist3 < hamd3){
            hamdist3 = hamdist3;
        }
    }

    float sim1, sim2, sim3;
    
    // calculate the similarity score for each genome
    sim1 = (seq.length() - hamdist1) / seq.length();
    sim2 = (seq.length() - hamdist2) / seq.length();
    sim3 = (seq.length() - hamdist3) / seq.length();
    
    
    // output one or multiple genomes being matched best depending on the similarity scores achieved
    if(sim1 >= sim2 && sim1 >= sim3){
        cout<<"Genome 1 is the best match." << endl;
    }
    if(sim2 >= sim1 && sim2 >= sim3){
        cout<<"Genome 2 is the best match." << endl;
    }
    if(sim3 >= sim1 && sim3 >= sim2){
        cout<<"Genome 3 is the best match." << endl;
    }
}

int main(){
    string test1 = "ACATC";
    string test2 = "ACTTA";
    string test3 = "TACAT";
    string testseq = "AACT";
    analyzer(test1, test2, test3, testseq); // expected 1, 2, 3
    
    cout << "\n";
    
    test1 = "AATGTTTCAC";
    test2 = "GACCGACTAA";
    test3 = "AAGGTGCTCC";
    testseq = "TACTA";
    analyzer(test1, test2, test3, testseq); // expected 2
    
    cout << "\n";
    
    test1 = "AACT";
    test2 = "AACT";
    test3 = "AATG";
    testseq = "AACT";
    analyzer(test1, test2, test3, testseq); // expected 1, 2
    
    cout << "\n";
    
    test1 = "";
    test2 = "CATTA";
    test3 = "TAATC";
    testseq = "ACTA";
    analyzer(test1, test2, test3, testseq); // expected genome and sequeance cannot be empty
    
    cout << "\n";
    cout << "\n";
    
    test1 = "AGTCTAGC";
    test2 = "CATTA";
    test3 = "TAATC";
    testseq = "ACTA";
    analyzer(test1, test2, test3, testseq); // expected genome length does not match
    
    cout << "\n";
    cout << "\n";
    
    test1 = "AGTCA";
    test2 = "CATTA";
    test3 = "TAATC";
    testseq = "ACTAGTATC";
    analyzer(test1, test2, test3, testseq); // expected sequence must be smaller than genome
}