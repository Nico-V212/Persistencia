from include.AttendanceManagement import AttendanceManagement
from include.Student import Student
from include.Course import Course

student = Student()
student.setIdentifier(1)
student.setName("Juan")
student.setSurname("Perez")

course = Course()
course.setIdentifier(1)
course.setName("Algebra")

attendanceManagement = AttendanceManagement()
attendanceManagement.takeAttendance(student, course, "2021-06-08", True)

attendanceManagement.showAttendance()

del student
del course
del attendanceManagement