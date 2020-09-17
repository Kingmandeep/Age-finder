#include<iostream>
using namespace std;
int main()
{
	int d1,m1,y1;
	int d,m,y;
	cout<<"Enter Date of Birth: "<<endl;
	cout<<"Enter input in given order 1) dd 2) mm 3) yyyy "<<endl;
	cin>>d1>>m1>>y1;
	int d2,m2,y2;
	cout<<"Enter Today Date: "<<endl;
	cout<<"Enter input in given order 1) dd 2) mm 3) yyyy "<<endl;
	cin>>d2>>m2>>y2;
	if(y2<y1 || d2>31 ||d1>31 || m2>12 || m1>12)
	{
		cout<<"Invalid Input ";
	}
	else if(d1>d2)
	{
		if(m2==1 || m2==3 || m2==5 || m2==7 || m2==8 || m2==10 || m2==12 )
		{
		    d2=d2+31;
		    m2=m2-1;
		    
		    if(m1>m2)
		    {
		    	m2=m2+12;
		    	y2=y2-1;
		    	y=y2-y1;
		    	m=m2-m1;
		    	d=d2-d1;
		    	cout<<"YOUR ARE ALIVE ON EARTH DUE TO"<<endl;
		    	cout<<y<<" Years "<<m<<" months "<<d<<" days";
		    	
			}else{
				m=m2-m1;
				d=d2-d1;
				y=y2-y1;
				cout<<"YOUR ARE ALIVE ON EARTH DUE TO "<<endl;
		    	cout<<y<<" Years "<<m<<" months "<<d<<"days";
			}
			    
		}else if(m2 == 2)
		{
			if(y2%4==0)
			{
				d2=d2+29;
				m2=m2-1;
				if(m1>m2)
		        {
		    	    m2=m2+12;
		    	    y2=y2-1;
		    	    y=y2-y1;
		    	    m=m2-m1;
		         	d=d2-d1;
		    	    cout<<"YOUR ARE ALIVE ON EARTH DUE TO"<<endl;
		    	    cout<<y<<" Years "<<m<<" months "<<d<<"days";
			    }else
				{
				    m=m2-m1;
				    d=d2-d1;
				    y=y2-y1;
			    	cout<<"YOUR ARE ALIVE ON EARTH DUE TO"<<endl;
		    	    cout<<y<<" Years "<<m<<" months "<<d<<"days";
			    }
				
			}else{
				d2=d2+28;
				m2=m2-1;
				if(m1>m2)
		            {
		    	        m2=m2+12;
		    	        y2=y2-1;
		    	        y=y2-y1;
		    	        m=m2-m1;
		         	    d=d2-d1;
		    	        cout<<"YOUR ARE ALIVE ON EARTH DUE TO"<<endl;
		    	        cout<<y<<" Years "<<m<<" months "<<d<<"days";
			        }else
					{
				        m=m2-m1;
				        d=d2-d1;
				        y=y2-y1;
			    	    cout<<"YOUR ARE ALIVE ON EARTH DUE TO"<<endl;
		    	        cout<<y<<" Years "<<m<<" months "<<d<<"days";
			        }
				
			}
		}else
		{ 
		    d2=d2+30;
		    m2=m2-1;
		    
		    if(m1>m2)
		    {
		    	m2=m2+12;
		    	y2=y2-1;
		    	y=y2-y1;
		    	m=m2-m1;
		    	d=d2-d1;
		    	cout<<"YOUR ARE ALIVE ON EARTH DUE TO"<<endl;
		    	cout<<y<<" Years "<<m<<" months "<<d<<"days";
		    	
			}else{
				m=m2-m1;
				d=d2-d1;
				y=y2-y1;
				cout<<"YOUR ARE ALIVE ON EARTH DUE TO"<<endl;
		    	cout<<y<<" Years "<<m<<" months "<<d<<"days";
			}
			  	
		}
	}else
	{
		if(m1>m2)
		{
		   	m2=m2+12;
		   	y2=y2-1;
		   	y=y2-y1;
		   	m=m2-m1;
		   	d=d2-d1;
		   	cout<<"YOUR ARE ALIVE ON EARTH DUE TO"<<endl;
	    	cout<<y<<" Years "<<m<<" months "<<d<<"days";
		    	
		}else
		{
			m=m2-m1;
			d=d2-d1;
			y=y2-y1;
			cout<<"YOUR ARE ALIVE ON EARTH DUE TO"<<endl;
	    	cout<<y<<" Years "<<m<<" months "<<d<<"days";
	    }
		
	}
	return 0;
	
}
