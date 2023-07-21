import sys
from PyQt5.QtCore import *      # for using url
from PyQt5.QtWidgets import *
from PyQt5.QtWebEngineWidgets import *    # web wngine for result seraching




class MainWindow(QMainWindow):
    def __init__(self):
        super(MainWindow, self).__init__()
        self.browser = QWebEngineView()         # creete a web serach engine
        self.browser.setUrl(QUrl('https://google.com/'))      
        self.setCentralWidget(self.browser)
        self.showMaximized()        # maximize the window
        # Part1 end here🔥🔥




        # navbar
        navbar = QToolBar()     # creating a navigation bar
        self.addToolBar(navbar)
    
        back_btn = QAction('←', self)       # creating a undo or back button
        back_btn.triggered.connect(self.browser.back)       # giving command to button
        navbar.addAction(back_btn)      # adding button to navbar

        forward_btn = QAction('→', self)    # creating a redo or forward button
        forward_btn.triggered.connect(self.browser.forward)     # giving command to button
        navbar.addAction(forward_btn)       # adding button to navbar

        reload_btn = QAction('↻', self)         # creating a reload button
        reload_btn.triggered.connect(self.browser.reload)       # giving command to button
        navbar.addAction(reload_btn)        # adding button to navbar

        home_btn = QAction('Home', self)        # creating a redo or forward button
        home_btn.triggered.connect(self.navigate_home)      # giving command to button using function
        navbar.addAction(home_btn) # adding button to navbar

        # part2 ends here!!🔥🔥

        

        self.url_bar = QLineEdit()      # for seraching using url in a single line
        self.url_bar.returnPressed.connect(self.navigate_to_url)        # giving command when serach using url typing
        navbar.addWidget(self.url_bar)      # adding text_widget to navbar

        self.browser.urlChanged.connect(self.update_url)       # for solving line51 problem 

    def navigate_home(self):        # function for home button
        self.browser.setUrl(QUrl('https://'))      # setting any url when home button triggered

    def navigate_to_url(self):
        url = self.url_bar.text()
        self.browser.setUrl(QUrl(url))



    
        
    # part3 ends here!!🔥🔥

    # eveything works properly but while url seraching url remains same as last serach it will didn't get updated while using undo-redo
    def update_url(self, q):
        self.url_bar.setText(q.toString())


app = QApplication(sys.argv)        # window creation
QApplication.setApplicationName('My Own Browser')      # set name of window
window = MainWindow()       # object define
app.exec_()                 # execute the window
