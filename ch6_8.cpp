//
//  Program Name:                      Star Search
//  Program Description:               This program allows user to input the 5 judges scores and then calculate the
//                                     average between the 3 remaining scores after the highest and lowest scores are
//                                     dropped.
//
//  Programmer Name:                   John Mai
//  Date:                              April 12, 2016
//

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getJudgeData(double &score);
double calcScore(double s1, double s2, double s3, double s4, double s5);
double findLowest(double s1, double s2, double s3, double s4, double s5);
double findHighest(double s1, double s2, double s3, double s4, double s5);

int main ()
{
    double scores,           //input of scores
           avgScore,         //average score
           judge1,           //score of judge 1
           judge2,           //score of judge 2
           judge3,           //score of judge 3
           judge4,           //score of judge 4
           judge5;           //score of judge 5
    
    // Ask for the score of each judge
    getJudgeData(scores);
    judge1 = scores;
    cout << judge1 << endl;
    
    getJudgeData(scores);
    judge2 = scores;
    cout << judge2 << endl;
    
    getJudgeData(scores);
    judge3 = scores;
    cout << judge3 << endl;
    
    getJudgeData(scores);
    judge4 = scores;
    cout << judge4 << endl;
    
    getJudgeData(scores);
    judge5 = scores;
    cout << judge5 << endl;
    
    //Outputs the average score from the judges 
    avgScore = calcScore(judge1, judge2, judge3, judge4, judge5);
    cout << "Judges' Average Score= " << setprecision(2) << avgScore << fixed <<endl;
    
    return 0;
}


//getJudgeData stores in a reference value and validates it
void getJudgeData(double &score)
{   cout << "Enter input of your score from 0-10";
    cin >> score;
    if (score < 0 || score > 10)
    { cout << "Please enter a valid score from 0-10";
        cin >> score;
    }
    else {
        
    }
}

// calcScore calculates and return the average of 3 remaining scores
double calcScore(double s1, double s2, double s3, double s4, double s5)
{   double dropScore;
    double totalScore;
    double avgScore;
    double lowScore = findLowest(s1, s2, s3, s4, s5);
    double highScore = findHighest(s1, s2, s3, s4, s5);

    totalScore= s1 + s2 + s3 + s4 + s5;
    dropScore = totalScore - (lowScore + highScore);
    avgScore= dropScore/3;
    
    return avgScore;
}



//finds and return the lowest score
double findLowest(double s1,double s2,double s3,double s4,double s5)
{
    if((s1<s2)&&(s1<s3) && (s1<s4) && (s1<s5))
    {
        return s1;
    }
    else if((s2<s1)&& (s2<s3) && (s2<s4)&&(s2<s5))
    {
        return s2;
    }
    else if((s3<s1)&&(s3<s2)&&(s3<s4)&&(s3<s5))
    {
        return s3;
    }
    else if((s4<s1)&&(s4<s2)&&(s4<s3)&& (s4<s5))
    {
        return s4;
    }
    else
    {
        return s5;
    }
}


//finds and return the highest score
double findHighest(double s1,double s2,double s3,double s4,double s5)
{
    if((s1>s2)&&(s1>s3) && (s1>s4) && (s1>s5))
    {
        return s1;
    }
    else if((s2>s1)&& (s2>s3) && (s2>s4)&&(s2>s5))
    {
        return s2;
    }
    else if((s3>s1)&&(s3>s2)&&(s3>s4)&&(s3>s5))
    {
        return s3;
    }
    else if((s4>s1)&&(s4>s2)&&(s4>s3)&& (s4>s5))
    {
        return s4;
    }
    else
    {
        return s5;
    }
}
