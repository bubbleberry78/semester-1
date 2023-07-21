from tkinter import*
from functools import partial #in order to get the partial details of entry 

print("Bio-Data")

def biodata_1(Fullname,Contact,E_mail,Street_name,City,State,Nationality,Pincode,Yrs_experience):
    print(" FULLNAME :",Fullname.get())
    print(" CONTACT  :",Contact.get())
    print(" E-MAIL ID  :",E_mail.get())
    print(" STREET_NAME :",Street_name.get())
    print(" CITY  :",City.get())
    print(" STATE  :",State.get())
    print(" NATIONALITY  :",Nationality.get())
    print(" PINCODE  :",Pincode.get())
    print(" YEARS_OF_EXPERIENCE :",Yrs_experience.get())

#title
root = Tk()
root.title("BIODATA FORM")
bot = Canvas(root,width=500,height=500)

#HEADER
frame_1= Frame(root,bg="black",borderwidth=8,relief=SUNKEN)
frame_1.grid(row=0,column=0,padx=150)

label_1 = Label(frame_1,text = "BIO_DATA FORM ",font=("Algerian",20,"bold"),fg="black")
label_1.grid(row=0,column=0,padx=200)


#PERSONAL DETAILS 
frame_2= Frame(root,bg="black",borderwidth=4,relief=SUNKEN)
frame_2.grid(row=1,column=0,sticky=NW)

label_2= Label(frame_2,text = "Personal Details:- ",font=("CASTELLAR",10),fg="black")
label_2.grid(row=1,column=0,sticky=NW)

#fullname entry
Fullname=Label(root,text="FULLNAME:-",font=("ROCKWELL",8),fg="black")
Fullname.grid(row=4,column=0,sticky=NW)
Full_entry=Entry(root)
Full_entry.grid(row=4,column=0)
Full_entryvalue=StringVar()

#contact entry
Contact = Label(root,text="Contact:-",font=("ROCKWELL",8),fg="black")
Contact.grid(row=6,column=0,sticky=NW)
Contact_entry=Entry(root)
Contact_entry.grid(row=6,column=0)
Contact_entryvalue=IntVar()

#E-mail entry
E_mail=Label(root,text="E-Mail:-",font=("ROCKWELL",8),fg="black")
E_mail.grid(row=8,column=0,sticky=NW)
E_mail_entry=Entry(root)
E_mail_entry.grid(row=8,column=0)
E_mail_entryvalue=StringVar


#gender entry
Gender_1= Label(root,text = "GENDER:- ",font=("ROCKWELL",8),fg="black")
Gender_1.grid(row=12,column=0,sticky=NW)
Gender = Checkbutton(text="Female",font=("ARIAL",8),fg="black")
Gender.grid(row=12,column=0)
Gender=Checkbutton(text="Male",font=("ARIAL",8),fg="black")
Gender.grid(row=12,column=1,sticky=N)

#Marital status
Marital_s=Label(root,text="MARITAL STATUS:-",font=("ROCKWELL",8),fg="black")
Marital_s.grid(row=14,column=0,sticky=NW)
Marital_entry1=Checkbutton(text="MARRIED",font=("ARIAL",8),fg="black")
Marital_entry1.grid(row=14,column=0)
Marital_entry2=Checkbutton(text="SINGLE",font=("ARIAL",8),fg="black")
Marital_entry2.grid(row=14,column=1,sticky=N)

#RESIDENCY DETAILS
frame_3= Frame(root,bg="black",borderwidth=4,relief=SUNKEN)
frame_3.grid(row=17,column=0,sticky=NW)
label_3= Label(frame_3,text = "Residency Details:- ",font=("CASTELLAR",10),fg="black")
label_3.grid(row=17,column=0,sticky=NW)

#street entry
Street_name=Label(root,text="STREET NAME:-",font=("ROCKWELL",8),fg="black")
Street_name.grid(row=19,column=0,sticky=NW)
Street_entry=Entry(root)
Street_entry.grid(row=19,column=0)
Street_entryvalue=StringVar()

#city entry
City_1=Label(root,text="CITY:-",font=("ROCKWELL",8),fg="black")
City_1.grid(row=21,column=0,sticky=NW)
City_entry=Entry(root)
City_entry.grid(row=21,column=0)
City_entryvalue=StringVar()

#state entry
State_1=Label(root,text="STATE:-",font=("ROCKWELL",8),fg="black")
State_1.grid(row=23,column=0,sticky=NW)
State_entry=Entry(root)
State_entry.grid(row=23,column=0)
State_entryvalue=StringVar()

#nationality entry
Nationality_1=Label(root,text="NATIONALITY:- ",font=("ROCKWELL",8),fg="black")
Nationality_1.grid(row=25,column=0,sticky=NW)
Nationality_entry=Entry(root)
Nationality_entry.grid(row=25,column=0)
Nationality_entryvalue=StringVar()

#pincode entry
Pincode=Label(root,text="PINCODE:-",font=("ROCKWELL",8),fg="black")
Pincode.grid(row=27,column=0,sticky=NW)
Pincode_entry=Entry(root)
Pincode_entry.grid(row=27,column=0)
Pincode_entryvalue=IntVar()


#QUALIFICATION DETAILS
frame_4= Frame(root,bg="black",borderwidth=4,relief=SUNKEN)
frame_4.grid(row=29,column=0,sticky=NW)
label_4= Label(frame_4,text = "QUALIFICATION DETAILS:- ",font=("CASTELLAR",10),fg="black")
label_4.grid(row=29,column=0,sticky=NW)

#education entry
Current_ed=Label(root,text="Last Qualification:-",font=("ROCKWELL",8),fg="black")
Current_ed.grid(row=31,column=0,sticky=NW)
Current_edentry1 = Checkbutton(text="10th/12th Pass",font=("ARIAL",8),fg="black")
Current_edentry1.grid(row=33,column=0)
Current_edentry2=Checkbutton(text="BE/B.TECH",font=("ARIAL",8),fg="black")
Current_edentry2.grid(row=35,column=0)
Current_edentry3=Checkbutton(text="BSc/BCA/MSc/MCA",font=("ARIAL",8),fg="black")
Current_edentry3.grid(row=37,column=0)
Current_edentry4=Checkbutton(text="PHD/M.PHIL",font=("ARIAL",8),fg="black")
Current_edentry4.grid(row=39,column=0)


#EXPERCIENCE DETAILS
frame_5= Frame(root,bg="black",borderwidth=4,relief=SUNKEN)
frame_5.grid(row=41,column=0,sticky=NW)
label_5= Label(frame_5,text = "EXPERIENCE :- ",font=("CASTELLAR",10),fg="black")
label_5.grid(row=41,column=0,sticky=NW)

#yrs of experience
Yrs_exp=Label(root,text="YEARS OF EXPERIENCE:-",font=("ROCKWELL",8),fg="black")
Yrs_exp.grid(row=43,column=0,sticky=NW)
Yrs_expentry=Entry(root)
Yrs_expentry.grid(row=43,column=0)
Yrs_expentryvalue=IntVar()

#condition
Condt = Checkbutton(text="I AGREE WITH ALL YOUR TERMS AND CONDITIONS",fg="red",font=("Algerian",10,"bold"))
Condt.grid(row=45,column=0)

#defining the function so as to get the details 
biodata_1= partial(biodata_1,Full_entry,Contact_entry,E_mail_entry,Street_entry,City_entry,State_entry,Nationality_entry,Pincode_entry,Yrs_expentry)


#Submit button                 
labe_6 = Button(text="SUBMIT",command=biodata_1,font=("Algerian",10,"bold"),fg="red",bg="black")
labe_6.grid(row=48,column=0,padx=150)

#calling the function 
biodata_1()


                    











#label_

