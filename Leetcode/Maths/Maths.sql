
CREATE TABLE Member(
Member_id NUMBER(5) PRIMARY KEY,
Member_name VARCHAR2(30) NOT NULL,
Member_address VARCHAR2(50),
Acc_open_date DATE,
Membership_type VARCHAR2(20),
Fees_paid NUMBER(4),
Max_books_allowed NUMBER(2),
Penalty_amount NUMBER(7,2),
CHECK (Membership_type IN ('Lifetime','Annual','Half Yearly','Quarterly'))
);

CREATE TABLE Books(
Book_No NUMBER(6) PRIMARY KEY,
Book_Name VARCHAR2(30) NOT NULL,
Author_Name VARCHAR2(30),
Cost NUMBER(7,2),
Category CHAR(10),
CHECK (Category IN ('Science','Database','System','Others'))
);

CREATE TABLE Issue(
Lib_Issue_Id NUMBER(10) PRIMARY KEY,
Book_No NUMBER,
Member_Id NUMBER, 
Issue_DATE DATE,
Return_DATE DATE,
FOREIGN KEY(Book_No) REFERENCES Books(Book_no),
FOREIGN KEY(Member_Id) REFERENCES Member(Member_Id)
);

INSERT INTO Member VALUES(1, 'Sayantan Sinha', 'Pune', '10-Dec-10','Lifetime', 2000, 6, 50);
INSERT INTO Member VALUES(2, 'Abhirup Sarkar', 'Kolkata', '19-jan-11','Annual', 1400, 3, 0);
INSERT INTO Member VALUES(3, 'Ritesh Bhuniya', 'Gujarat', '20-feb-11','Quarterly', 350, 2, 100);
INSERT INTO Member VALUES(4, 'Paresh sen', 'Tripura', '21-mar-11','Half Yearly', 700, 1, 200);
INSERT INTO Member VALUES(5, 'Sohini Haldar', 'Birbhum', '11-apr-11','Lifetime', 2000, 6, 10);
INSERT INTO Member VALUES(6, 'Suparna Basu', 'Kolkata', '12-apr-11','Half Yearly', 700, 1, 0);
INSERT INTO Member VALUES(7, 'Suranjana Basu', 'Purulia', '30-june-11','Annual', 1400, 3, 50);
INSERT INTO Member VALUES(8, 'Arpita Roy', 'Kolkata', '31-july-11','Half Yearly', 700, 1, 0);

INSERT INTO Books VALUES(101, 'Let us C', 'Denis Ritchie', '450','Others');
INSERT INTO Books VALUES(102, 'Oracle - Complete Ref', 'Loni', '550','Database');
INSERT INTO Books VALUES(103, 'Visual Basic 10', 'BPB', '700','Others');
INSERT INTO Books VALUES(104, 'Mastering SQL', 'Loni', '450','Database');
INSERT INTO Books VALUES(105, 'PL SQL-Ref', 'Scott Urman', '750','Database');
INSERT INTO Books VALUES(106, 'UNIX', 'Sumitava Das', '300','System');
INSERT INTO Books VALUES(107, 'Optics', 'Ghatak', '600','Science');
INSERT INTO Books VALUES(108, 'Data Structure', 'G.S. Baluja', '350','Others');

INSERT INTO Issue VALUES(7001, 101, 1, '10-jan-11', '');
INSERT INTO Issue VALUES(7002, 102, 2, '25-jan-11', '');
INSERT INTO Issue VALUES(7003, 104, 1, '1-Feb-11', '');
INSERT INTO Issue VALUES(7004, 104, 2, '15-Mar-11', '');
INSERT INTO Issue VALUES(7005, 101, 4, '04-Apr-11', '');
INSERT INTO Issue VALUES(7006, 108, 5, '12-apr-11', '');
INSERT INTO Issue VALUES(7007, 101, 8, '1-Aug-11', '');

SELECT * FROM Member;
SELECT * FROM Books;
SELECT * FROM Issue;


