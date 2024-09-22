#include<stdio.h>

typedef struct process{
    int id;
    int arrival_time;
    int burst_time;
    int priority;
    int completion_time;
    int turn_around_time;
    int waiting_time;
}Process;

void findFirstProcess(Process processes[], int size){
    int selected_process = 0;
    for(int i=0; i<size; i++){
        if(processes[i].arrival_time < processes[selected_process].arrival_time){
            selected_process = i;
        }else if(processes[i].arrival_time == processes[selected_process].arrival_time){
            if(processes[i].priority < processes[selected_process].priority){
                selected_process = i;
            }
        }
    }
}

void sortByProcess(Process processes[], int size){
    for(int i=1; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(processes[i].priority > processes[j].priority){
                Process temp = processes[i];
                processes[i] = processes[j];
                processes[j] = temp;
            }
        }
    }
}

void findCompletionTime(Process processes[], int size){
    processes[0].completion_time = processes[0].arrival_time + processes[0].burst_time;
    sortByProcess(processes, size);

    for(int i=1; i<size; i++){
        if(processes[i].arrival_time > processes[i-1].completion_time){
            processes[i].completion_time = processes[i].arrival_time + processes[i].burst_time;
        }else{
            processes[i].completion_time = processes[i-1].completion_time + processes[i].burst_time;
        }
    }
}

void findWaitingTime(Process processes[], int size){
    for(int i=0; i<size; i++){
        processes[i].waiting_time = processes[i].turn_around_time - processes[i].burst_time;
    }
}

void findTurnAroundTime(Process processes[], int size){
    for (int i=0; i<size; i++){
        processes[i].turn_around_time = processes[i].completion_time - processes[i].arrival_time;
    }
}


int main(){
    Process processes[]={{1, 0, 5, 2}, {2, 0, 4, 3}, {3, 1, 3, 1}, {4, 3, 6, 1}, {5, 4, 2, 2}};
    int size = sizeof(processes) / sizeof(processes[0]);
    findCompletionTime(processes, size);
    findTurnAroundTime(processes, size);
    findWaitingTime(processes, size);

    for(int i=0; i<size; i++){
        printf("Process Id: %d\n",processes[i].id);
        printf("Completion time %d:\n",processes[i].completion_time);
        printf("Turn Around time: %d\n", processes[i].turn_around_time);
        printf("Waiting time: %d\n\n", processes[i].waiting_time);
    }

    return 0;
}