
#include<stdio.h>
#define ROW 3
#define COL 3

int checkerXO();
char grid[ROW][COL];

int main()
{

    char a=' ';
    int x,r,c,y=0,num=0;
    int Checkflag, x1=0;

    for(x=0;x<ROW;x++)
    {

        for(y=0;y<COL;y++)
        {
            grid[x][y]= a;

            printf("%d.%d [%c]  ",x,y,grid[x][y]);
        }
        printf("\n");
    }

    while (x1<8)
    {
        printf("X TURN\n");  // X goes first in my code
        printf("Enter Row:");
        scanf("%d",&r);
        printf("Enter Col:");
        scanf("%d",&c);
        grid[r][c]= 'X';
        x1++;


       Checkflag = checkerXO();
       if(Checkflag == 1)
        break;

            for(x=0;x<ROW;x++)
        {
            for(y=0;y<COL;y++)
            {
                printf("%d.%d [%c]  ",x,y,grid[x][y]);
            }
                printf("\n");
        }


        printf("O TURN\n");  //O's turn starts here
        printf("Enter Row:");
        scanf("%d",&r);
        printf("Enter Col:");
        scanf("%d",&c);
        grid[r][c]= 'O';
        x1++;


      Checkflag = checkerXO();
       if(Checkflag == 1)
        break;

         for(x=0;x<ROW;x++)
        {

            for(y=0;y<COL;y++)
            {
            printf("%d.%d [%c]  ",x,y,grid[x][y]);
            }
            printf("\n");
        }


    }

    return 0;
}
int checkerXO()
{
     if (grid[0][0]=='X'&&grid[0][1]=='X'&&grid[0][2]=='X')
        {
            printf("\n X WINS");
            return 1;
        }
        else if(grid[0][0]=='O'&&grid[0][1]=='O'&&grid[0][2]=='O')
        {
            printf("\n O WINS");
            return 1;
        }

        //-----------------------------------------------------
         if (grid[1][0]=='X'&&grid[1][1]=='X'&&grid[1][2]=='X')
        {
         printf("\n X WINS");
         return 1;
        }
        else if(grid[1][0]=='O'&&grid[1][1]=='O'&&grid[1][2]=='O')
        {
            printf("\n X WINS");
            return 1;
        }

        // -------------------------------------------------------

         if (grid[2][0]=='X'&&grid[2][1]=='X'&&grid[2][2]=='X')
        {
       printf("\n X WINS");
         return 1;
        }
        else if(grid[2][0]=='O'&&grid[2][1]=='O'&&grid[2][2]=='O')
        {
            printf("\n X WINS");
            return 1;
        }

        //-----------------------------------------------------


         if (grid[0][0]=='X'&&grid[1][0]=='X'&&grid[2][0]=='X')
        {
            printf("\n X WINS");
            return 1;
        }
        else if(grid[0][0]=='O'&&grid[1][0]=='O'&&grid[2][0]=='O')
        {
            printf("\n X WINS");
            return 1;
        }

        //-------------------------------------------------

         if (grid[0][1]=='X'&&grid[1][1]=='X'&&grid[2][1]=='X')
        {
            printf("\n X WINS");
            return 1;
        }
        else if(grid[0][1]=='O'&&grid[1][1]=='O'&&grid[2][1]=='O')
        {
           printf("\n X WINS");
            return 1;
        }

        //----------------------------------------------------

         if (grid[0][2]=='X'&&grid[1][2]=='X'&&grid[2][2]=='X')
        {
          printf("\n X WINS");
            return 1;
        }
        else if(grid[0][2]=='O'&&grid[1][2]=='O'&&grid[2][2]=='O')
        {
            printf("\n X WINS");
            return 1;
        }
     //-----------------------------------------------------------

         if (grid[0][0]=='X'&&grid[1][1]=='X'&&grid[2][2]=='X')
        {
           printf("\n X WINS");
            return 1;
        }

        else if(grid[0][0]=='O'&&grid[1][1]=='O'&&grid[2][2]=='O')
        {
           printf("\n X WINS");
            return 1;
        }

        //-----------------------------------------------------
         if (grid[2][0]=='X'&&grid[1][1]=='X'&&grid[0][2]=='X')
        {
           printf("\n X WINS");
            return 1;
        }
        else if(grid[2][0]=='O'&&grid[1][1]=='O'&&grid[0][2]=='O')
        {
           printf("\n X WINS");
            return 1;
        }

}
