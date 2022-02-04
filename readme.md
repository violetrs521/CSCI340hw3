# Homework 3
### CSCI 340
### Violet Smith
### Feb 3rd, 2022


#### 1. Fork and Exec
<p> Wrote a C program that accepts the commands the user would like to run as parameters. It then places the commands in a new array and sets the last value to null. The code then creates a parent and a child process to run the execvp command in. </p>

#### 2. Simple Scheduling 

a. First in First Out Scheduler:

| Jobname  | Execution time (sec) | Start time | End Time | Turnaround time | Response time |
| :---| :---| :---| :---| :---| :---|
| Job 1 | 10 | 0  | 10 | 10 | 0  |
| Job 2 | 15 | 10 | 25 | 25 | 10 |
| Job 3 | 5  | 25 | 30 | 30 | 25 |
| Job 4 | 22 | 30 | 52 | 52 | 30 |

Avg turnaround time: 29.25 sec
Avg response time: 16.25 sec   



b. Shortest Job First Scheduler:

| Jobname  | Execution time (sec) | Start time | End Time | Turnaround time | Response time |
| :---| :---| :---| :---| :---| :---|
| Job 1 | 25 | 30 | 55 | 55 | 30 |
| Job 2 | 15 | 15 | 30 | 30 | 15 |
| Job 3 | 5  | 0  | 5  | 5  | 0  |
| Job 4 | 10 | 5  | 15 | 15 | 5  |


Avg turnaround time: 26.25 sec
Avg response time: 12.25 sec  



c. Shortest Time to Completion First:
   

| Jobname  | Arrival time | Execution time (sec) | Start time | End Time | Turnaround time | Response time |
| :---| :---| :---| :---| :---| :---| :---|
| Job 1 | 0  | 25 | 30 | 55 | 55 | 30 |
| Job 2 | 0  | 15 | 0  | 20 | 20 | 0  |
| Job 3 | 5  | 5  | 5  | 10 | 5  | 0  |
| Job 4 | 10 | 10 | 20 | 30 | 20 | 10 |


Avg turnaround time: 25 sec
Avg Response time: 10 sec


d. Round Robin Scheduling:

| Jobname  | Arrival time | Execution time (sec) | Start time | End Time | Turnaround time | Response time |
| :---| :---| :---| :---| :---| :---| :---|
| Job 1 | 0  | 20 | 0  | 50 | 50 | 0 |
| Job 2 | 0  | 10 | 5  | 30 | 30 | 5 |
| Job 3 | 5  | 5  | 10 | 15 | 10 | 5 |
| Job 4 | 10 | 15 | 15 | 45 | 35 | 5 |


Avg turnaround time: 31.25 sec
Avg Response time: 3.75 sec