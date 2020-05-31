// CSCI1300 Fall 2018
// Author: <Ryan Taylor>
// Recitation: 105 – Ashwin Sankaralingam
// Cloud9 Workspace Editor Link: https://ide.c9.io/ryta4737/recitation
// HW 5

#include <iostream>
#include <string>
using namespace std;

/**
 * Take 2 string inputs
 * If the inputs are not the same length, stop the function there
 * If the letters of the strings are not the same in a position, add 1 to the hamming distance
 * If the letters of the strings are the same, hamming distance does not change
 * Calculate the similarrity score between the two using the length of the strings minus the hamming distance all over the length
 * Return the similarity score
 */

double simScore(string seq1, string seq2){
    
    // define hamming distance and the length of each string as variables
    int hamdist = 0;
    float length1 = seq1.length();
    float length2 = seq2.length();
    
    // if the genomes are not the same length, return 0
    if(length1 != length2 || seq1.empty() || seq2.empty()){
        return 0;
    }
    
    // if the genomes are the same length, continue
    else if(length1 == length2){
        
        // for each letter in the genomes
        for(int i=0; i < length1; i++){
            // if the letters are the same, hamming distance does not change
            if(seq1[i] == seq2[i]){
                hamdist = hamdist;
            }
            
            //if the letters are different, +1 to hamming distance
            else if(seq1[i] != seq2[i]){
                hamdist++;
            }
        }
    }
    
    // calculate the similarity between the two strings
    double similarity = (length1 - hamdist) / length2;
    return similarity;
}


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
    
    // test cases for simScore
    string test1 = "CATTATGCATTATATACAT";
    string test2 = "CATCACCACCCTCCTCCTC";
    cout<< simScore(test1, test2) << endl; // expected 0.315789
    
    test1 = "ATGC";
    test2 = "ATGA";
    cout << simScore(test1, test2) << endl; // expected 0.75
    
    test1 = "CCDCCD";
    test2 = "CCDCCD";
    cout << simScore(test1, test2) << endl; // expected 1
    
    test1 = "ATG";
    test2 = "GAT";
    cout << simScore(test1, test2) << endl; // expected 0
    
    test1 = "AATGTCGAT";
    test2 = "AGCATGCTA";
    cout << simScore(test1, test2) << endl; // expected 0.222222
    
    test1 = "CATTA";
    test2 = "TAATC";
    cout << simScore(test1, test2) << endl; // expected 0.4
    
    cout << "\n\n";
    
    
    // test cases for analyzer
    test1 = "ACATC";
    test2 = "ACTTA";
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
    
    cout << "\n\n";
    
    test1 = "AGTCTAGC";
    test2 = "CATTA";
    test3 = "TAATC";
    testseq = "ACTA";
    analyzer(test1, test2, test3, testseq); // expected genome length does not match
    
    cout << "\n\n";
    
    test1 = "AGTCA";
    test2 = "CATTA";
    test3 = "TAATC";
    testseq = "ACTAGTATC";
    analyzer(test1, test2, test3, testseq); // expected sequence must be smaller than genome
}