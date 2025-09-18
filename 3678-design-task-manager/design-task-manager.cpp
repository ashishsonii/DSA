


class TaskManager {
public:
   priority_queue<pair<int, int>>  maxihip;
    unordered_map<int,int> taskUser;           // taskId -> userId
    unordered_map<int,int> taskPrio;           // taskId -> priority

    TaskManager(vector<vector<int>>& tasks) {
        for (auto &t : tasks) {
            add(t[0],t[1],t[2]);
            
        }
    }

    void add(int userId, int taskId, int priority) {
        maxihip.push({priority,taskId});
        taskUser[taskId]=userId;
        taskPrio[taskId]=priority;
        
    }

    void edit(int taskId, int newPriority) {
        auto old=taskPrio[taskId];
        taskPrio[taskId]=newPriority;
        maxihip.push({newPriority,taskId});

        

        
    }

    void rmv(int taskId) {
        taskPrio[taskId]=-1;
        
        }
    

    int execTop() {
        while(!maxihip.empty()){
        auto [prio,taskid]=maxihip.top();
        if(taskPrio[taskid]==prio){
            taskPrio[taskid]=-1;
            return taskUser[taskid];


        }
        maxihip.pop();
        }
        return -1;

        

       
    }
};
