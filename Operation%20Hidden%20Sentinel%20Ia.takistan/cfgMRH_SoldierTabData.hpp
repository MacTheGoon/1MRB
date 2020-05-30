//Template
/*
class MRH_SoldierTabData //mandatory, do not change
{
	//you can have as many entries as you want
	
	class MyFirstData //must be unique, can be anything
	{
	title = "YourTitleHere"; // simple text
	text = "YourTextHere";// accepts structured text, DO NOT use double quotes("") inside.

	};
	
	class MySecondData //must be unique,can be anything
	{
	title = "YourTitleHere";
	text = "YourTextHere";// accepts structured text, DO NOT use double quotes("") inside.
		
		//you can have as many sub entries as you want
		
		class MyFirstSubEntry //must be unique,can be anything
		{
		titleSub = "YourTitleHere";
		textSub = "YourTextHere";// accepts structured text, DO NOT use double quotes("") inside.
		};
		
		class MySecondSubEntry
		{
		titleSub = "YourTitleHere";
		textSub = "YourTextHere You can use <br/> and also include pictures  <img size = '15' image ='pathToYourPicture.jpg'/>"; //after thorough testing 15 seems to be the most appropriate size for pictures. Smaller is OK, bigger might not be fully displayed.
		};
	};
};
*/
//Example
class MRH_SoldierTabData
{
	class dataEntry1
	{
	title = "Operation Hidden Sentinel";
	text = "OPORD for Operation Hidden Sentinel";
		class subEntry1
		{
		titleSub = "Operations Order";
		textSub = "You will find the full OPORD: <a color='#0000FF' href='https://docs.google.com/document/d/1PABmghDI1kccOolXT6RI7zE3gLaq5SgmfYLAiS1ZB7M/edit?usp=sharing'>FRAGO TO OPORD</a><br/>";
		};
		
		class subEntry2
		{
		titleSub = "Abdul intel on al-Shimali";
		textSub = "Abdul informed us that al-Shimali was born and raised in Gospandi and likes to delegate command";
		};
		class subEntry3
		{
		titleSub = "Prisoner Transfer";
		textSub = "Civilian hostage provide a transcript that loosely translated to a prisoner exchange in a forest";
		};
		class subEntry4
		{
		titleSub = "Abu Muhammad al-Shimali";
		textSub = "al-Shimali is the current fighters assistance council chairman, he helps coordinate warfighting tools to the insurgents within Takistan and facilitates import/exports of weapons globally";
		};


	};

	class dataEntry2
	{
	title = "Email correspondence";
	text = "";
		class subEntry1
		{
		titleSub = "Faysal Ahmad Bin Ali al-Zahrani";
		textSub = "Emails discussing financial status of the cells within takistan.  Funding is stable, and they seem to be trying to raise funds from the local populus";
		};
		
		class subEntry2
		{
		titleSub = "Ni’ma Abd Nayef al-Jabouri";
		textSub = "Emails with al-Jabouri discussing the procurement of arms for active cells within the region.  al-Jabouri seems to have some stature in the military circles.";
		};
	
	};
	
	
};

