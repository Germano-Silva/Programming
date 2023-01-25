#include <iostream>
#include <string>
#include <map>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;
using std::map;

enum class TaskStatus {
  NOT_STARTED = 1,
  IN_PROGRESS, 
  COMPLETED_SUCCESS,
  COMPLETED_FAILURE, 
};


int main()
{
  map<string, TaskStatus> status_map;

  status_map["not_started"] = TaskStatus::NOT_STARTED;
  status_map["in_progress"] = TaskStatus::IN_PROGRESS;
  status_map["completed_success"] = TaskStatus::COMPLETED_SUCCESS;
  status_map["completed_failure"] = TaskStatus::COMPLETED_FAILURE;

  string status;
  cout << "Please enter the current status of the task: ";
  getline(cin, status);

  switch (status_map[status]) {
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

  return 0;
}
