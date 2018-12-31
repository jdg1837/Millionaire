#include "main_window.h"

Main_window::Main_window() {

    // /////////////////
    // G U I   S E T U P
    // /////////////////

    set_default_size(350, 450);

    // Put a vertical box container as the Window contents
    Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    add(*vbox);

    // ///////
    // M E N U
    // Add a menu bar as the top item in the vertical box
    Gtk::MenuBar *menubar = Gtk::manage(new Gtk::MenuBar());
    vbox->pack_start(*menubar, Gtk::PACK_SHRINK, 0);

    //File
    Gtk::MenuItem *menuitem_file = Gtk::manage(new Gtk::MenuItem("_File", true));
    menubar->append(*menuitem_file);
    Gtk::Menu *filemenu = Gtk::manage(new Gtk::Menu());
    menuitem_file->set_submenu(*filemenu);

    //Q U I T
    Gtk::MenuItem *menuitem_quit = Gtk::manage(new Gtk::MenuItem("_Quit", true));
    menuitem_quit->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_quit_click));
    filemenu->append(*menuitem_quit);

    //H E L P
    Gtk::MenuItem *menuitem_help = Gtk::manage(new Gtk::MenuItem("_Help", true));
    menubar->append(*menuitem_help);
    Gtk::Menu *helpmenu = Gtk::manage(new Gtk::Menu());
    menuitem_help->set_submenu(*helpmenu); 

    //A B O U T
    Gtk::MenuItem *menuitem_about = Gtk::manage(new Gtk::MenuItem("About", true));
    menuitem_about->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_about_click));
    helpmenu->append(*menuitem_about);

    //SHOW COUNTER
    Gtk::MenuItem *menuitem_counter = Gtk::manage(new Gtk::MenuItem("Show counter", true));
    menuitem_counter->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_showcounter_click));
    helpmenu->append(*menuitem_counter);

    //COUNTER OVERRIDE
    Gtk::MenuItem *menuitem_override = Gtk::manage(new Gtk::MenuItem("Change counter", true));
    menuitem_override->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_changecounter_click));
    helpmenu->append(*menuitem_override);

	q0 = Gtk::manage(new Gtk::Image("0.png"));
	button0 = Gtk::manage(new Gtk::ToolButton(*q0));
	button0->set_tooltip_markup("Show Counter");
	button0->signal_clicked().connect(sigc::mem_fun(*this, &Main_window::on_showcounter_click));
	vbox->add(*button0);

	Gtk::Toolbar *toolbar = Gtk::manage(new Gtk::Toolbar);
	vbox->add(*toolbar);
	Gtk::Toolbar *toolbar2 = Gtk::manage(new Gtk::Toolbar);
	vbox->add(*toolbar2);
	Gtk::Toolbar *toolbar3 = Gtk::manage(new Gtk::Toolbar);
	vbox->add(*toolbar3);

	//BUTTONS

	q1 = Gtk::manage(new Gtk::Image("1.png"));
	button1 = Gtk::manage(new Gtk::ToolButton(*q1));
	button1->set_tooltip_markup("Question 1");
	button1->signal_clicked().connect(sigc::mem_fun(*this, &Main_window::on_1_click));
	toolbar->append(*button1);

	q2 = Gtk::manage(new Gtk::Image("2.png"));
	button2 = Gtk::manage(new Gtk::ToolButton(*q2));
	button2->set_tooltip_markup("Question 2");
	button2->signal_clicked().connect(sigc::mem_fun(*this, &Main_window::on_2_click));
	toolbar->append(*button2);

	q3 = Gtk::manage(new Gtk::Image("3.png"));
	button3 = Gtk::manage(new Gtk::ToolButton(*q3));
	button3->set_tooltip_markup("Question 3");
	button3->signal_clicked().connect(sigc::mem_fun(*this, &Main_window::on_3_click));
	toolbar->append(*button3);

	q4 = Gtk::manage(new Gtk::Image("4.png"));
	button4 = Gtk::manage(new Gtk::ToolButton(*q4));
	button4->set_tooltip_markup("Question 4");
	button4->signal_clicked().connect(sigc::mem_fun(*this, &Main_window::on_4_click));
	toolbar->append(*button4);

	q5 = Gtk::manage(new Gtk::Image("5.png"));
	button5 = Gtk::manage(new Gtk::ToolButton(*q5));
	button5->set_tooltip_markup("Question 5");
	button5->signal_clicked().connect(sigc::mem_fun(*this, &Main_window::on_5_click));
	toolbar2->append(*button5);

	q6 = Gtk::manage(new Gtk::Image("6.png"));
	button6 = Gtk::manage(new Gtk::ToolButton(*q6));
	button6->set_tooltip_markup("Question 6");
	button6->signal_clicked().connect(sigc::mem_fun(*this, &Main_window::on_6_click));
	toolbar2->append(*button6);

	q7 = Gtk::manage(new Gtk::Image("7.png"));
	button7 = Gtk::manage(new Gtk::ToolButton(*q7));
	button7->set_tooltip_markup("Question 7");
	button7->signal_clicked().connect(sigc::mem_fun(*this, &Main_window::on_7_click));
	toolbar2->append(*button7);

	q8 = Gtk::manage(new Gtk::Image("8.png"));
	button8 = Gtk::manage(new Gtk::ToolButton(*q8));
	button8->set_tooltip_markup("Question 8");
	button8->signal_clicked().connect(sigc::mem_fun(*this, &Main_window::on_8_click));
	toolbar2->append(*button8);

	q9 = Gtk::manage(new Gtk::Image("9.png"));
	button9 = Gtk::manage(new Gtk::ToolButton(*q9));
	button9->set_tooltip_markup("Question 9");
	button9->signal_clicked().connect(sigc::mem_fun(*this, &Main_window::on_9_click));
	toolbar3->append(*button9);

	q10 = Gtk::manage(new Gtk::Image("10.png"));
	button10 = Gtk::manage(new Gtk::ToolButton(*q10));
	button10->set_tooltip_markup("Question 10");
	button10->signal_clicked().connect(sigc::mem_fun(*this, &Main_window::on_10_click));
	toolbar3->append(*button10);

	q11 = Gtk::manage(new Gtk::Image("11.png"));
	button11 = Gtk::manage(new Gtk::ToolButton(*q11));
	button11->set_tooltip_markup("Question 11");
	button11->signal_clicked().connect(sigc::mem_fun(*this, &Main_window::on_11_click));
	toolbar3->append(*button11);

	q12 = Gtk::manage(new Gtk::Image("12.png"));
	button12 = Gtk::manage(new Gtk::ToolButton(*q12));
	button12->set_tooltip_markup("Question 12");
	button12->signal_clicked().connect(sigc::mem_fun(*this, &Main_window::on_12_click));
	toolbar3->append(*button12);

    // Make the box and everything in it visible
    vbox->show_all();

}

Main_window::~Main_window() { }

// /////////////////
// C A L L B A C K S
// /////////////////


//FILE
void Main_window::on_quit_click() 
{
    hide();
}

void Main_window::on_showcounter_click() 
{
	Dialogs::message("<span font = '20'>Correct answers</span>", "<span font = '25'><span fgcolor = '#00ff0f'>" + to_string(counter) + "</span></span>");
}

void Main_window::on_changecounter_click() 
{
	cin >> counter;
}

//HELP
void Main_window::on_about_click() 
{
    Glib::ustring s = "===============================\n <b>Who wants to be a Millionaire:\nCollege Student Edition<sup>R</sup></b>\n===============================\n\n<i>Designed by Juan Diego Gonzalez German</i>\nCopyright 2017\n\n";
    Gtk::MessageDialog dlg(*this, s, true, Gtk::MESSAGE_INFO, Gtk::BUTTONS_OK, true);
    dlg.run();
}

//GAME
void Main_window::on_1_click()
{	
	title = "Question 1";
	question = "<span font = '15'>What is the most unnecessarily large source of spending for students?</span>";
	options[0] = "Food";
	options[1] = "Transportation";
	options[2] = "Textbooks";
	options[3] = "Electronics";
	correct = 2;
	
	bool is_correct;	
	try
	{
	 is_correct = on_play_click();
	}
	catch(Canceled e)
	{
	 return;
	}

	if(is_correct) confirmation = "<span font = '20'><span fgcolor = '#700c5a'>Correct!</span></span>";
	else confirmation = "<span font = '20'><span fgcolor = '#ff0000'>False</span></span>";

	description = "<span font = '25'>Textbooks are required (<i>well, sometimes</i>), but going broke for them is not!</span>";

	Dialogs::message(confirmation, description);	
}
void Main_window::on_2_click()
{	
	title = "Question 2";
	question = "<span font = '15'>What is the worst place for getting textbooks?</span>";
	options[0] = "UTA Bookstore";
	options[1] = "Amazon";
	options[2] = "Half Priced Books";
	options[3] = "Campus Bookstore";
	correct = 0;
	
	bool is_correct;	
	try
	{
	 is_correct = on_play_click();
	}
	catch(Canceled e)
	{
	 return;
	}

	if(is_correct) confirmation = "<span font = '20'><span fgcolor = '#700c5a'>Correct!</span></span>";
	else confirmation = "<span font = '20'><span fgcolor = '#ff0000'>False</span></span>";

	description = "<span font = '25'>While some books may only be found there, the UTA Bookstore is <i>usually</i> more expensive than other options. Remember that you can make do without some books. Also, some books you can rent, to save tons of money. Try the UTA Library for free renting (semester long if you are in the Honors College), or online services like Chegg. It also does not hurt to ask friends if they have a copy</span>";

	Dialogs::message(confirmation, description);	
}
void Main_window::on_3_click()
{	
	title = "Question 3";
	question = "<span font = '15'>What is the best time for getting textbooks?</span>";
	options[0] = "Before classes start";
	options[1] = "After attending class";
	options[2] = "The first day of class";
	options[3] = "Never";
	correct = 1;
	
	bool is_correct;	
	try
	{
	 is_correct = on_play_click();
	}
	catch(Canceled e)
	{
	 return;
	}

	if(is_correct) confirmation = "<span font = '20'><span fgcolor = '#700c5a'>Correct!</span></span>";
	else confirmation = "<span font = '20'><span fgcolor = '#ff0000'>False</span></span>";

	description = "<span font = '25'>Hear the professors and read the syllabai before making a decision</span>";

	Dialogs::message(confirmation, description);	
}
void Main_window::on_4_click()
{	
	title = "Question 4";
	question = "<span font = '15'>How can you go around the expensive access codes?</span>";
	options[0] = "Buying used textbooks";
	options[1] = "Simply don't get them";
	options[2] = "Split the cost between friends";
	options[3] = "THERE IS NO ESCAPE";
	correct = 3;
	
	bool is_correct;	
	try
	{
	 is_correct = on_play_click();
	}
	catch(Canceled e)
	{
	 return;
	}

	if(is_correct) confirmation = "<span font = '20'><span fgcolor = '#700c5a'>Correct!</span></span>";
	else confirmation = "<span font = '20'><span fgcolor = '#ff0000'>False</span></span>";

	description = "<span font = '25'>Sadly, some courses <u>require</u> accesses codes to do the homework, and only a new, unused code will do the trick. In some cases, you need a UTA specific code. If anything, you can buy the code without the physical book, and get a digital version of it, and save a couple dozen dollars</span>";

	Dialogs::message(confirmation, description);	
}
void Main_window::on_5_click()
{	
	title = "Question 5";
	question = "<span font = '15'>What is a way of getting free entertainment?</span>";
	options[0] = "Sneaking into the movie theater";
	options[1] = "UTA Library";
	options[2] = "Sharing Netflix logins";
	options[3] = "Yo ho, yo ho, a pirate's life for me!";
	correct = 1;
	
	bool is_correct;	
	try
	{
	 is_correct = on_play_click();
	}
	catch(Canceled e)
	{
	 return;
	}

	if(is_correct) confirmation = "<span font = '20'><span fgcolor = '#700c5a'>Correct!</span></span>";
	else confirmation = "<span font = '20'><span fgcolor = '#ff0000'>False</span></span>";

	description = "<span font = '25'>Besides books, the UTA Library offers a ton of movies to rent for free</span>";

	Dialogs::message(confirmation, description);	
}
void Main_window::on_6_click()
{	
	title = "Question 6";
	question = "<span font = '15'>What is the easiest way of keeping track of your funds?</span>";
	options[0] = "An Excel Spreadsheet";
	options[1] = "A pocket notebook";
	options[2] = "Making marks on the wall";
	options[3] = "A checkings account";
	correct = 1;
	
	bool is_correct;	
	try
	{
	 is_correct = on_play_click();
	}
	catch(Canceled e)
	{
	 return;
	}

	if(is_correct) confirmation = "<span font = '20'><span fgcolor = '#700c5a'>Correct!</span></span>";
	else confirmation = "<span font = '20'><span fgcolor = '#ff0000'>False</span></span>";

	description = "<span font = '25'>You can open a checkings account for free right here on campus, at the Wells Fargo at the UC. If you already have one, accessing it often to keep track of spending and savings can save you from an unwelcomed surprise!</span>";

	Dialogs::message(confirmation, description);	
}void Main_window::on_7_click()
{	
	title = "Question 7";
	question = "<span font = '15'>What system can you use to look for on campus jobs?</span>";
	options[0] = "UTAJobs";
	options[1] = "SnapJobs";
	options[2] = "Hire a Mav";
	options[3] = "UTA Job Search";
	correct = 1;
	
	bool is_correct;	
	try
	{
	 is_correct = on_play_click();
	}
	catch(Canceled e)
	{
	 return;
	}

	if(is_correct) confirmation = "<span font = '20'><span fgcolor = '#700c5a'>Correct!</span></span>";
	else confirmation = "<span font = '20'><span fgcolor = '#ff0000'>False</span></span>";

	description = "<span font = '25'>Deciding to get a job is a big deal, but should you want an on campus job, those can give you some extra money without taking much of your time!\nYou do not need to be a citizen!\nAlso, consider some jobs can get you free rent or free meal plans</span>";

	Dialogs::message(confirmation, description);	
}
void Main_window::on_8_click()
{	
	title = "Question 8";
	question = "<span font = '15'>How often should you make a budget?</span>";
	options[0] = "Daily";
	options[1] = "Weekly";
	options[2] = "Monthly";
	options[3] = "Yearly";
	correct = 2;
	
	bool is_correct;	
	try
	{
	 is_correct = on_play_click();
	}
	catch(Canceled e)
	{
	 return;
	}

	if(is_correct) confirmation = "<span font = '20'><span fgcolor = '#700c5a'>Correct!</span></span>";
	else confirmation = "<span font = '20'><span fgcolor = '#ff0000'>False</span></span>";

	description = "<span font = '25'>Creating a monthly budget is a great way of keeping track of your spending, and allocate money for your upcoming expenses</span>";

	Dialogs::message(confirmation, description);	
}
void Main_window::on_9_click()
{	
	title = "Question 9";
	question = "<span font = '15'>What is the biggest non school related expense for UTA students?</span>";
	options[0] = "Gas";
	options[1] = "Food";
	options[2] = "Clothing";
	options[3] = "Cable";
	correct = 1;
	
	bool is_correct;	
	try
	{
	 is_correct = on_play_click();
	}
	catch(Canceled e)
	{
	 return;
	}

	if(is_correct) confirmation = "<span font = '20'><span fgcolor = '#700c5a'>Correct!</span></span>";
	else confirmation = "<span font = '20'><span fgcolor = '#ff0000'>False</span></span>";

	description = "<span font = '25'>By living in Vandy, you are required to have a meal plan. Use it, and use it wisely! Take advantages of the meal swipes at the Plaza. While you may not love the Cafe food, think twice before spending a large ammount of money eating out every other day!</span>";

	Dialogs::message(confirmation, description);	
}
void Main_window::on_10_click()
{	
	title = "Question 10";
	question = "<span font = '15'>What is the best time to pay back college loans?</span>";
	options[0] = "After graduation";
	options[1] = "Now!";
	options[2] = "As soon as you get a job";
	options[3] = "As soon as you can";
	correct = 3;
	
	bool is_correct;	
	try
	{
	 is_correct = on_play_click();
	}
	catch(Canceled e)
	{
	 return;
	}

	if(is_correct) confirmation = "<span font = '20'><span fgcolor = '#700c5a'>Correct!</span></span>";
	else confirmation = "<span font = '20'><span fgcolor = '#ff0000'>False</span></span>";

	description = "<span font = '25'>Loans are sometimes a need. While they may help, you do not want the debt (and the interest) to stack up. Pay them back a little at a time, but make payments whenever you can. Your future self while thank you if you do not let it all add up. You do not want all of your paycheck going there after graduation</span>";

	Dialogs::message(confirmation, description);	
}
void Main_window::on_11_click()
{	
	title = "Question 11";
	question = "<span font = '15'>What is the minimum GPA you need to think of applying for scholarships?</span>";
	options[0] = "1.0";
	options[1] = "2.0";
	options[2] = "3.0";
	options[3] = "4.0";
	correct = 1;
	
	bool is_correct;	
	try
	{
	 is_correct = on_play_click();
	}
	catch(Canceled e)
	{
	 return;
	}

	if(is_correct) confirmation = "<span font = '20'><span fgcolor = '#700c5a'>Correct!</span></span>";
	else confirmation = "<span font = '20'><span fgcolor = '#ff0000'>False</span></span>";

	description = "<span font = '25'>Not all scholarships are academic, and not all that are academic require you to have a flawless GPA. As long as you are in good standing with the school, applying is a good, completely harmless thing to do</span>";

	Dialogs::message(confirmation, description);	
}
void Main_window::on_12_click()
{	
	title = "Question 12";
	question = "<span font = '15'>What is the most important factor in determining federal financial aid?</span>";
	options[0] = "Family history";
	options[1] = "Academics";
	options[2] = "Financial situation";
	options[3] = "None of those";
	correct = 3;
	
	bool is_correct;	
	try
	{
	 is_correct = on_play_click();
	}
	catch(Canceled e)
	{
	 return;
	}

	if(is_correct) confirmation = "<span font = '20'><span fgcolor = '#700c5a'>Correct!</span></span>";
	else confirmation = "<span font = '20'><span fgcolor = '#ff0000'>False</span></span>";

	description = "<span font = '25'>Federal Aid is determined from a ton of different factors, and every case is different</span>";

	Dialogs::message(confirmation, description);	
}

bool Main_window::on_play_click()
{
	bool is_correct = Dialogs::play(title, question, options, correct);
	if(is_correct) 
	{
	 counter++;
	 return true;
	}
	else return false;
}
