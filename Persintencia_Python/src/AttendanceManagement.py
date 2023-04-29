from typing import List
from include.Student import Student
from include.Course import Course
import os.path

class AttendanceManagement:
    def __init__(self):
        pass
    
    def takeAttendance(self, student: Student, course: Course, datetime: str, state: bool) -> None:
        fileExists = os.path.isfile("attendance.csv")
        with open("attendance.csv", mode="a") as csvFile:
            if not fileExists:
                csvFile.write("Id de Estudiantes, Nombre/s, Apellido/s, Id de Materia, Marca temporal, Presente\n")               
            csvFile.write(f"{student.getIdentifier()}, {student.getName()}, {student.getSurname()}, {course.getIdentifier()}, {datetime}, {state}\n")
            
    def showAttendance(self) -> None:
        if os.path.isfile("attendance.csv"):
            with open("attendance.csv") as csvFile:
                print(csvFile.read())
