#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASKS 100
#define MAX_TASK_LENGTH 100

typedef struct {
  char task[MAX_TASK_LENGTH];
  int completed;
} Task;

Task tasks[MAX_TASKS];
int task_count = 0;

void add_task(char* task) {
  if (task_count >= MAX_TASKS) {
    printf("Error: Cannot add task, maximum number of tasks reached.\n");
    return;
  }
  strcpy(tasks[task_count].task, task);
  tasks[task_count].completed = 0;
  task_count++;
}

void save_tasks() {
  FILE* fp;
  fp = fopen("tasks.txt", "w");
  for (int i = 0; i < task_count; i++) {
    fprintf(fp, "%s,%d\n", tasks[i].task, tasks[i].completed);
  }
  fclose(fp);
  printf("Tasks saved to file 'tasks.txt'.\n");
}

int main() {
  add_task("Write code");
  add_task("Test code");
  save_tasks();
  return 0;
}
