
#ifndef Job_HPP_
#define Job_HPP_

class Job {
	friend class SLL;
	int jobNum;
        int arrTime;
        int m;
        int dev;
        int runtime;
        int priority;
	Job *next;
        int state;
        int devHold;
        int devTemp;
        int finishTime;
        int waitQ;
        
public:
	Job(int n, int a, int w, int d, int r, int p);
	~Job();
        void printJob();
        
        int getM();
        void setM(int s);
        
        int getDev();
        void setDev(int d);
        
        int getNum();
        void setNum(int n);
        
        int getPriority();
        void setPriority(int p);
        
        void setState(int s);
        int getState();
       
        void setRuntime(int r);
        int getRuntime();
        
        Job *getNext();
        
        int getNeed();
         
        int getFinishTime();
        void setfinishTime(int i);
        
        int getRequest();
        void setRequest(int r);
        
        int getWaitQ();
        void setWaitQ(int q);
    

};



#endif /* Job_HPP_ */
