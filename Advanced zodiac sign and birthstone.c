#include<stdio.h>
#include<conio.h>
main()
{
	int i,m,n,key1,key2,p,date;
	char a[20],b[20],f[30];
	char month;
	system("COLOR 2B");
	printf("n\n\t\t\t\t** ** ** ** ** ** ** ** ** ** ** ***\n");
	printf("\t\t\t\t*\t\tWELCOME            *\t\n");
	printf("\t\t\t\t*\t\t\t\t   *\n");
	printf("\t\t\t\t*\t\t   TO              *\n");
	printf("\t\t\t\t*\t\t                   *\n");
	printf("\t\t\t\t*\t\t THE HUB      \t\   *\n");
	printf("\t\t\t\t*\t\t\t\t   *\n");
	printf("\t\t\t\t*\t  OF ZODIAC SIGN\t   *\n");
	printf("\t\t\t\t*\t                \t   *\n");
	printf("\t\t\t\t*\t           &     \t   *\n");
	printf("\t\t\t\t*\t                \t   *\n");
	printf("\t\t\t\t*\t   BIRTH STONES  \t   *\n");
	printf("\t\t\t\t*\t                \t   *\n");
	printf("\t\t\t\t* ** ** ** ** ** ** ** ** ** ** ** *\n");
	printf("\n\n\n *Horoscopy is the study of different orientation of celestial bodies.\n *It is an application of Astrophysics and science of spiritual souls.\n *The qualities and traits of a person is sketched on the basis of constellations.");
	printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t By:Sagar Prasad\t\t\t\t\t");
	printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t11704088\t\t\t\t\t");
	printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tRK17GN\t\t");
	
	getch();
	system("cls");
	printf("\n\n\n\n\t  1  : To Know your Astrology\n");
	printf("\t  2  : Quit\n");
	scanf("%d",&key1);
	getchar();
	switch(key1)
	{
		case 1:
		{
			system("cls");
			printf("\n\n\n\n\n\n\t\t");
		   printf(" Enter your First Name    :-         ");
		   scanf("%S",&a);
		   printf("\n\n\t\t");
		   printf("\t\tEnter your Last Name      :-        ");
           scanf("%s",&b);
		   
		   system("cls");
		   	printf("\n\n\n\n\n\n\t\t");
		   	printf(" Enter your year of birth\n");
		   	printf("\t\t:-");
		   	scanf("%d",&p);
		   	printf("\n\n\t\t|1.January|2.Feburary|3.March|\n\n");
		   	printf("\n\n\t\t|4.April|5.May|6.June|\n\n");
		   	printf("\n\n\t\t|7.July|8.August|9.September|\n\n");
		   	printf("\n\n\t\t|10.October|11.November|12.December|\n\n");
		   	printf("\n\n\n\t\t Enter your month of birth ( in number)\n");
		   	printf("\t\t:-");
		   	scanf("%d",&month);
		   	
		   	system("cls");
		   	
			   for(i=1;i<=31;i++)
		   	printf("\n%d\t",i);
		   	date:
			   printf("\t\t\t\tEnter your date of birth in number from above table\n");
		   	printf("\t\t\t\t=");
		   	scanf("%d",&date);
		   if(date>=32)
		   {
		   printf("Invalid choice");
			   goto date;}
	
		   	
		   	
		   	
system("cls");		
		   			   	
if (((date>=21 && date<=31)   && (month==3)) || ((date<=19 ) && (month==4 )))
printf("\tYOU ARE A ARIES AND YOUR BIRTHSTONE IS BLOODSTONE\n\n* You are adventerous, leader, bold, and risk taker.\n\n* Your are generous, independent, optimistic and enthusiastic.\n\n* Your lucky number is 1 and 9, color is red, natural element is fire and planet is Mars.\n\n\n BLOODSTONE\n\n *Bloodstone is green with distintive red spots that resemble blood.\n\n* It is said that Bloodstone was formed from the blood of christ dripping on the green Earth and solidifying.\n\n* It has been used as an amulet to protect against the evil eye and it is symbol of justice.\n\n* It is used for circulation of all positive energy in the bldy.\n\n*It is found in different shapes\n\n* Bloodstone can be found mostly in Brazil,India, China, Australia, and USA. ");
if (((date>=21 && date<=31)  && (month==4)) || ((date<=21 ) && (month==5 )))
printf("\tYOU ARE A TAURUS AND YOUR BIRTHSTONE IS SAPPHIRE\n\n *You are loyal, patience, harmonious, and sensual and amorous\n\n *Your weakness may be short tempered, over materialistic, and stubborn\n\n* Your lucky number is 6 and 4, color is green,orange,yellow,earth tones, day is Friday, and element is earth and planet is venus.\n\n\n SAPPHIRE\n\n * Sapphire is blue or almost dark blue with distictive bluidh color.\n\n * It was called as stone of disney and it contributes to mental clarity and perception.\n\n * It is the symbol of heaven and joyful devotion to God.\n\n* It is the symbol of saturn and venus.* It is mainly mined in Australia");
if (((date>=22 && date<=31)  && (month==5)) || ((date<=21 ) && (month==6 )))
printf("\tYOU ARE A GEMINI AND YOUR BIRTHSTONE IS AGATE\n\n * You are quick learner, inspirers, and critical thinker\n\n * Your character may be intolerance to other, and may have superficiality\n\n * Your lucky number is 5 and 9, colour is yellow, day is wednesday,element is air and planet is Mercury.\n\n\n AGATE\n\n* Agate is the oldest stone and mainly known for the strength.\n\n* It attracts strength, protects from bad dreams, and used in jwellery since Babylonia times.\n\n*It is used for stomach upsets which helps to change the level of acceptance of emotion.\n\n* It is chiefly mined in Germany, Uruguay, Brazil, US,Madafascar, Egypt, china, India, and in Scotland");
if (((date>=22 && date<=31)  && (month==6)) || ((date<=22 ) && (month==7 )))
printf("\tYOU ARE A CANCER AND YOUR BIRTHSTONE IS EMERALD\n\n * Your are a good teacher,emotional and sensitive, tenacious, and nurturing\n\n* You may be over-sensitive in some cases\n\n * Your lucky number is 3 and 7, color is violet, sea green, and silver, day is Monday, and planet is the Moon.\n\n\n EMERLAD\n\n* It amplifies the exchange of love, Brings the reason and wisdom.\n\n* It is known as symbol of love and stone of Prophecy.\n\n* It comes in different jewels shapes.");
if (((date>=23 && date<=31)  && (month==7)) || ((date<=22 ) && (month==8 )))
printf("\tYOU ARE A LEO AND YOUR BIRTHSTONE IS ONYX\n\n *You are blessed with king qualities; leadership, self-esteem, creative,and joyful\n\n* You may be arrogant, bosiness\n\n * Your lucky number is 8 and 9, color is orange, day is Sunday, and planet is the Sun.\n\n\n ONYX\n\n* Onyx is known for releasing negative energy from your body such as sorrow and grief.\n\n * It is used to end unhappy or bothersome relationships, increses the brain perfomancw, and encourage the health egotism.");
if (((date>=23 && date<=31)  && (month==8)) || ((date<=22 ) && (month==9 )))
printf("\tYOU ARE A VIRGO AND YOUR BIRTHSTONE IS CARNELIAN\n\n * You are blessed with healing powers, attentive, and analytic\n\n* You may be destructive to some extent\n\n * Your lucky number is 5 and 3, colour is Navy blue, day is Wednesday, and planet is Mercury.\n\n\nCARNELIAN\n\n*It is found primarily in India as well as South America and mainly red or dark orange in colour.n\n* It gives the energy, protects from bad vbrations, guards against poverty, and helps to give the sense of humour.\n\n It is said that it increase  ");
if (((date>=23 && date<=31)  && (month==9)) || ((date<=23 ) && (month==10 )))
printf("\tYOU ARE A LIBRA AND YOUR BIRTHSTONE IS CHRYSOLITE\n\n* Your are charming, tactful, diplomatic\n\n* You may be good social worker and philanthropist\n\n* Your lucky number is 6 and 9, color is Indigo blue, day is friday, and planet is Venus.\n\n\n CHRIYOSOLITE\n\n * chrysocolla is very beautiful stone with many beneficial energies.\n\n* It is known as healing stone among Native American Indain cultures where it was used for strengethening the body resistance, bringing about calm feelings.\n\n* It promotes the clarity of thoughts and neutrals, cool attitide during chaos, and use to decrease the nervousness  and irritability.\n\n* It is used in medical lines to detoxify the lever, burnt recovery, and alleviates the cramps.\n\n * It is found in copper minings sites , chile,USSR, and Zaire. ");
if (((date>=24 && date<=31)  && (month==10)) || ((date<=21 ) && (month==11 )))
printf("\tYOU ARE A SCORPIO AND YOUR BIRTHSTONE IS BERYL\n\n* You have great potentiality in store, determination, courages, depth of understanding\n\n* You may be jealous, fanatic\n\n* Your lucky number is 2 and 4, color is deep red, day is Tuesday,and planet is pluto and Mars\n\n\n BERYL \n\n* Beryl is known for the positiv enery, and protects from the bad omens.\n\n It attracts the people and makes one releive from stres and strains. .");
if (((date>=22 && date<=31)  && (month==11)) || ((date<=21 ) && (month==12 )))
printf("\tYOU ARE A SAGITTARIUS AND YOUR BIRTHSTONE IS TOPAZ\n\n You are generous, honest, and broad-minded\n\nYou have great potential in store and can be the leader of the world\n\n Your lucky number is 7 and 5, colour is light blue and purple, element is fire, and planet is jupiter.\n\n\n TOPAZ \n\n* It helps to shape your life to your own wishes and helps to gain wisdoms.\n\n * It encourages openness, honesty, and fulfillment with stimulation of energy flow.\n\n* It is found in pink, light blue, and deep blue color in the jewels");
if (((date>=22 && date<=31)  && (month==12)) || ((date<=21 ) && (month==1 )))
printf("\tYOU ARE A CAPRICORN AND YOUR BIRTHSTONE IS RUBY\n\n* You are known as the ambassador and preserver of humanity\n\n* You have great ability to think long term but may be victim of depression, pessimism,and conservatism.\n\n* Your lucky numner is 2 and 8, colour is dark green and dark blue, day is saturday, and planet is Saturn.\n\n\n RUBY \n\n* Ruby is deep red and purple in color.\n\n* It is considered as the most powerful gem in the universe, and is associated with the many astral signs.\n\n* It possesses contenment and peace, and ward off bad dreams.\n\n * It is the symbol of friendship and love, helps sexual love to be more passionate, and gives the courage to be hte best potential.\n\n* It regulates the blood flows, and mainly found in Burma and Thailand.");
if (((date>=22 && date<=31)  && (month==1)) || ((date<=18 ) && (month==2 )))
printf("\tYOU ARE A AQUARIUS AND YOUR BIRTHSTONE IS GARNET\n\n* You have great intellectual power, ability to communicate as=nd understand abstract forms, love and compassions\n\n* You may be rebellious and quick tempered\n\n* Your lucky number is 1 and 7, day is Wednesday, colour is sky blue, and planet is Uranus and saturn.\n\n\n GARNET \n\n* It brings light and hope to ones  life path, helps in the situation of crisis.\n\n* It forfeits courage to overcome problems opening the doors for sharing with others.\n\n* It is known for stimulating sucess in business.\n\n* Currently Africa is the world's largest producer, India, Brazil, USSR and USA are also some countries. '");
if (((date>=19 && date<=28)  && (month==2)) || ((date<=20 ) && (month==3 )))
printf("\t* YOU ARE A PISCES AND YOUR BIRTHSTONE IS AMETHYST\n\n* You have great physics power, sensitivitiness, altruism\n\n* You may be escapism, keep bad company, or negative moody\n\n* Your lucky number is 2 and 6, colour is sea-green and lavender, day is friday, and planet is Neputune and Jupiter.\n\n\n AMETHYST \n\n * It promotes a sense of good judgement, provokes honesty, and spiritual insight.\n\n * It encourages a quiet and calm mind, aids in meditation to find deep inner peace comfort at turmoil.\n\n* It is power stone, wisdom stone, protection stone, and Healinh stone which is mainly found in south America, and in Central Asia");
        getch();
        system("cls");
        
        
		   	
		}

		break;
		case 2:
		break;	
	
	
}
}
		   	

