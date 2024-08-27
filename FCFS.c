#include<stdio.h>
#include<stdlib.h>

typedef struct process{
    int id;
    int arrival_time;
    int burst_time;
    int completion_time;
    int waiting_time;
    int turn_around_time;
}Process;

void sortByArrivalTime(Process processes[], int size){
    Process temp;
    for (int i=0; i<size; i++){
        for (int j=i; j<size; j++){
            if(processes[i].arrival_time > processes[j].arrival_time){
                temp = processes[i];
                processes[i] = processes[j];
                processes[j] = temp;
            }
        }
    }
}

void findCompletionTime(Process processes[], int size){
    processes[0].completion_time= processes[0].burst_time;
    for (int i=1; i<size; i++){
        if(processes[i].arrival_time > processes[i-1].completion_time){
            processes[i].completion_time = processes[i].arrival_time + processes[i].burst_time;
        }else{
        processes[i].completion_time = processes[i-1].completion_time + processes[i].burst_time;
        }
    }
}

void findTurnAroundTime(Process processes[], int size){
    for(int i=0; i<size; i++){
        processes[i].turn_around_time = processes[i].completion_time - processes[i].arrival_time;
    }
}

void findWaitingTime(Process processes[], int size){
    for (int i=0; i<size; i++){
        processes[i].waiting_time = processes[i].turn_around_time - processes[i].burst_time;
    }
}

int main(){
    int n;
    Process processes[] = {{1, 2, 2}, {2, 0, 1}, {3, 2, 3}, {4, 3, 5}, {5, 4, 4}};
    int size = sizeof(processes) / sizeof(processes[0]);
    sortByArrivalTime(processes, size);
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
