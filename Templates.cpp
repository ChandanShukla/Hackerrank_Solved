Difference(vector<int> d){
        maximumDifference=d[0]-d[1];
        for(int i=0;i<d.size();i++){
            int difference=0;
            for(int j=1;j<d.size();j++){
                difference=abs(d[i]-d[j]);
                if(maximumDifference<difference){
                    maximumDifference=difference;
                }
            }
        }
    }
    int computeDifference(){
        return maximumDifference;
    }