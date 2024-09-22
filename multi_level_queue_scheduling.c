#include <stdio.h>
#include <stdlib.h>

// Define a structure to represent a process
struct Process {
    int pid;           // Process ID
    int arrivalTime;    // Arrival Time
    int burstTime;      // Burst Time
    int waitingTime;    // Waiting Time
    int turnaroundTime; // Turnaround Time
};

// Function to perform FCFS scheduling for the given queue
void FCFS(struct Process proc[], int n) {
    proc[0].waitingTime = 0;
    for (int i = 1; i < n; i++) {
        proc[i].waitingTime = proc[i - 1].waitingTime + proc[i - 1].burstTime;
    }

    for (int i = 0; i < n; i++) {
        proc[i].turnaroundTime = proc[i].waitingTime + proc[i].burstTime;
    }
}

// Function to display the processes and their respective details
void display(struct Process proc[], int n, const char* queueName) {
    printf("\n%s Queue\n", queueName);
    printf("PID\tArrival Time\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\n", proc[i].pid, proc[i].arrivalTime, proc[i].burstTime, proc[i].waitingTime, proc[i].turnaroundTime);
    }
}

int main() {
    int systemProcesses, userProcesses;

    // Input number of system processes
    printf("Enter the number of system processes: ");
    scanf("%d", &systemProcesses);
    struct Process sysQueue[systemProcesses];

    // Input details of system processes
    for (int i = 0; i < systemProcesses; i++) {
        printf("\nEnter details for System Process %d:\n", i + 1);
        printf("Process ID: ");
        scanf("%d", &sysQueue[i].pid);
        printf("Arrival Time: ");
        scanf("%d", &sysQueue[i].arrivalTime);
        printf("Burst Time: ");
        scanf("%d", &sysQueue[i].burstTime);
    }

    // Input number of user processes
    printf("\nEnter the number of user processes: ");
    scanf("%d", &userProcesses);
    struct Process userQueue[userProcesses];

    // Input details of user processes
    for (int i = 0; i < userProcesses; i++) {
        printf("\nEnter details for User Process %d:\n", i + 1);
        printf("Process ID: ");
        scanf("%d", &userQueue[i].pid);
        printf("Arrival Time: ");
        scanf("%d", &userQueue[i].arrivalTime);
        printf("Burst Time: ");
        scanf("%d", &userQueue[i].burstTime);
    }

    // Apply FCFS scheduling to system processes (higher priority)
    FCFS(sysQueue, systemProcesses);

    // Apply FCFS scheduling to user processes (lower priority)
    FCFS(userQueue, userProcesses);

    // Display the results for system and user processes
    display(sysQueue, systemProcesses, "System");
    display(userQueue, userProcesses, "User");

    return 0;
}
