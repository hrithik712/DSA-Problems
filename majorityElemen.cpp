 int majorityElement(int a[], int size)
    {
      map<int, int> map;
      for(int i=0; i<size; i++)
      {
          map[a[i]]++;
      }
      for(auto it: map)
      {
          if(it.second > (size/ 2))
          {
              return it.first;
          }
      }
      return -1;
      
    }
};