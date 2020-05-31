// CSCI1300 Fall 2018
// Author: <Ryan Taylor>
// Recitation: 105 – Ashwin Sankaralingam
// Cloud9 Workspace Editor Link: https://ide.c9.io/ryta4737/recitation
// HW 5

/**
 * Take 2 string inputs
 * If the inputs are not the same length, stop the function there
 * If the letters of the strings are not the same in a position, add 1 to the hamming distance
 * If the letters of the strings are the same, hamming distance does not change
 * Calculate the similarrity score between the two using the length of the strings minus the hamming distance all over the length
 * Return the similarity score
 */

#include <iostream>
#include <string>
using namespace std;

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

// test cases
int main(){
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
}