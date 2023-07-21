from tkinter import*


    
def btn_clk(num):
    
    current=display_1.get()
    display_1.delete(0,END)
    display_1.insert(0,str(current) + str(num))

def toclear():
    display_1.delete(0,END)

def toadd():
    first=display_1.get()
    global integer
    global operator
    operator="Addition"
    integer=int(first)
    display_1.delete(0,END)

def tosubtract():
    third=display_1.get()
    global integer
    global operator
    operator="Subtraction"
    integer=int(third)
    display_1.delete(0,END)

def tomultiply():
    fourth=display_1.get()
    global integer
    global operator
    operator="Mulitiplication"
    integer=int(fourth)
    display_1.delete(0,END)

def todivide():
    fifth=display_1.get()
    global integer
    global operator
    operator="Division"
    integer=int(fifth)
    display_1.delete(0,END)



def equalto():
    number=display_1.get()
    display_1.delete(0,END)

    if(operator=="Addition"):
        display_1.insert(0,integer + int(number))
    if(operator=="Subtraction"):
        display_1.insert(0,integer - int(number))
    if(operator=="Mulitiplication"):
        display_1.insert(0,integer  * int(number))
    if(operator=="Division"):
        display_1.insert(0,integer / int(number)) 



root=Tk()
root.title("CALCULATOR")
cal=Canvas(root,height=700,width=500)
cal.pack()
input_txt=StringVar()
    


display_1= Entry(cal,bg="light grey",font=('ROCKWELL',20),bd=9,justify='left',textvariable=StringVar,relief=SUNKEN)
display_1.grid(columnspan=5)
#display_1Value=StringVar



#1st row 
button1=Button(cal,padx=15,pady=15,text='7',bg="grey",fg="yellow",activeforeground="red",bd=6,font=('ROCKWELL',20),relief=RAISED,command=lambda:btn_clk("7"))
button1.grid(row=1,column=0,sticky=NW,columnspan=1)

button2=Button(cal,padx=15,pady=15,text='8',bg="grey",fg="yellow",activeforeground="red",bd=6,font=('ROCKWELL',20),relief=RAISED,command=lambda:btn_clk("8"))
button2.grid(row=1,column=1)

button3=Button(cal,padx=15,pady=15,text='9',bg="grey",fg="yellow",activeforeground="red",bd=6,font=('ROCKWELL',20),relief=RAISED,command=lambda:btn_clk("9"))
button3.grid(row=1,column=2)

btn_clr=Button(cal,padx=15,pady=15,text='C',bg="grey",fg="yellow",activeforeground="black",bd=6,font=('ROCKWELL',20),relief=RAISED,command=toclear)
btn_clr.grid(row=1,column=3)




#2nd row 
button5=Button(cal,padx=17,pady=15,text='4',bg="grey",fg="yellow",activeforeground="red",bd=6,font=('ROCKWELL',20),relief=RAISED,command=lambda:btn_clk("4"))
button5.grid(row=2,column=0,sticky=NW,columnspan=1)

button6=Button(cal,padx=17,pady=15,text='5',bg="grey",fg="yellow",activeforeground="red",bd=6,font=('ROCKWELL',20),relief=RAISED,command=lambda:btn_clk("5"))
button6.grid(row=2,column=1)

button7=Button(cal,padx=17,pady=15,text='6',bg="grey",fg="yellow",activeforeground="red",bd=6,font=('ROCKWELL',20),relief=RAISED,command=lambda:btn_clk("6"))
button7.grid(row=2,column=2)

btn_multi=Button(cal,padx=17,pady=15,text='*',bg="grey",fg="yellow",activeforeground="black",bd=6,font=('ROCKWELL',20),relief=RAISED,command=tomultiply)
btn_multi.grid(row=2,column=3)


#3RD row 
button9=Button(cal,padx=17,pady=15,text='1',bg="grey",fg="yellow",activeforeground="red",bd=6,font=('ROCKWELL',20),relief=RAISED,command=lambda:btn_clk("1"))
button9.grid(row=3,column=0,sticky=NW,columnspan=1)

button10=Button(cal,padx=17,pady=15,text='2',bg="grey",fg="yellow",activeforeground="red",bd=6,font=('ROCKWELL',20),relief=RAISED,command=lambda:btn_clk("2"))
button10.grid(row=3,column=1)

button11=Button(cal,padx=17,pady=15,text='3',bg="grey",fg="yellow",activeforeground="red",bd=6,font=('ROCKWELL',20),relief=RAISED,command=lambda:btn_clk("3"))
button11.grid(row=3,column=2)

btn_div=Button(cal,padx=20,pady=15,text='/',bg="grey",fg="yellow",activeforeground="black",bd=6,font=('ROCKWELL',20),relief=RAISED,command=todivide)
btn_div.grid(row=3,column=3)


#4TH row 
btn_add=Button(cal,padx=17,pady=15,text='+',bg="grey",fg="yellow",activeforeground="black",bd=6,font=('ROCKWELL',20),relief=RAISED,command=toadd)
btn_add.grid(row=4,column=0,sticky=NW,columnspan=1)

button14=Button(cal,padx=17,pady=15,text='0',bg="grey",fg="yellow",activeforeground="red",bd=6,font=('ROCKWELL',20),relief=RAISED,command=lambda:btn_clk("0"))
button14.grid(row=4,column=1)

btn_sub=Button(cal,padx=17,pady=15,text='-',bg="grey",fg="yellow",activeforeground="black",bd=6,font=('ROCKWELL',20),relief=RAISED,command=tosubtract)
btn_sub.grid(row=4,column=2)

btn_eqls=Button(cal,padx=17,pady=15,text='=',bg="grey",fg="yellow",activeforeground="black",bd=6,font=('ROCKWELL',20),relief=RAISED,command=equalto)
btn_eqls.grid(row=4,column=3)



root.mainloop()
