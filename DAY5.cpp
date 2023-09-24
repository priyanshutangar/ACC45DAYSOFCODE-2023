  //Grading Students
  vector<int> gradingStudent(vector<int> grades){
    vector<int> finalgrades;
      for(int i=0;i<grades.size();i++)
      {
          int a=grades[i]+1;
          int b = grades[i]+2;
          if(grades[i]<38)
          {
              finalgrades.push_back(grades[i]);
          }
          else if(a%5==0)
          {
              
              finalgrades.push_back(a);
          }
          else if(b%5==0)
          {
              finalgrades.push_back(b);
          }
          else
          {
              finalgrades.push_back(grades[i]);
          }
      }
      return finalgrades;
  }
