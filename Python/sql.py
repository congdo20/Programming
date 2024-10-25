import mysql.connector

mydb = mysql.connector.connect(
  host="localhost",
  user="root",
  password="Do200102"
)

mycursor = mydb.cursor()

mycursor.execute("CREATE DATABASE mydatabase")