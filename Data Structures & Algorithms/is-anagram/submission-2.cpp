class Solution {
public:
      bool isAnagram(string s, string t) {
        
          if(s.size() != t.size()){
            return false;
          }
          for(char i : s){
              int index = t.find(i); // ==> return index(1, 2 ..)
              // case don't find the index
              if(index == string::npos){ // ==> npos mean 
              // index not found
                return false;
              }

              t.erase(index, 1);
          }

          return true;
      };  
};
