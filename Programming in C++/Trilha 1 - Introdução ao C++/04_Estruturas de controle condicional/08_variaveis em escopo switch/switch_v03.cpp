#include <iostream>

using std::cout;
using std::cin;
using std::endl;

enum class TaskStatus {
  NOT_STARTED = 1,
  IN_PROGRESS, 
  COMPLETED_SUCCESS,
  COMPLETED_FAILURE, 
};

int main()
{
  int status;
  cout << "Please enter the current status of the task: ";

  cin >> status;

  switch (TaskStatus task_status = static_cast<TaskStatus>(status); task_status) {
    case TaskStatus::NOT_STARTED:
      cout << "The task has not yet been started" << endl;
      break;
    case TaskStatus::IN_PROGRESS:
      cout << "The task is in progress" << endl;
      break;
    case TaskStatus::COMPLETED_SUCCESS:
      cout << "The task was completed successfully" << endl;
      break;
    case TaskStatus::COMPLETED_FAILURE:
      cout << "The task could not be completed successfully" << endl;
      break;
    default:
      cout << "Status of task unknown" << endl;
  }

  //TaskStatus another_status = task_status;

  return 0;
}
