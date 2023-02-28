#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//program for science day c project

    int main (){

            int st = 1, op1, op2, op3, op4, op5, op6, op7, op8;
            double radian, n1, n2, n3, n4, n5, n6, n7, n8, oneby3 = 0.33333333333, fourby3 = 1.33333333333, twoby3 = 0.66666666666 ;

            while (st != 0){
                printf("\nSCIENTIFIC AND MATHEMATICAL CACLULATOR\nCoder:- Hrishikesh Kelkar, typehrishi@gmail.com\n");
                printf("Please support by subcribing to my channel! \nhttps://youtube.com/@decoders13\n");
                printf("Please choose an option to continue: (Type the num mentioned for the option)\n");
                printf("0: EXIT\n1: Basic Calculator\n2: Table Generator\n3: Area, Perimeter, Surface Area & Volume Calculator\n4: Trigonometric Ratios\n5: Current And Electricity\n6: Speed/Velocity And Acceleration\n-> ");
                scanf("%d", &op1);

                switch (op1){

                    case 0:
                        st = 0;
                        break;

                    case 1:
                        printf("Type:\n0: EXIT\n1: Addition\n2: Substraction\n3: Multiplication\n4: Division\n-> ");
                        scanf("%d", &op2);

                            switch (op2){

                                case 0:
                                    st = 0;
                                    break;
                                
                                case 1:
                                    printf("Enter num: ");
                                    scanf("%lf", &n1);
                                    printf("Enter num to add: ");
                                    scanf("%lf", &n2);
                                    printf("\nAns: %.2lf\n\n", n1 + n2);
                                    
                                    printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                    scanf("%d", &op3);

                                    switch (op3){
                                        case 0:
                                        st = 0;
                                        break;

                                        case 1:
                                        break;
                                    }
                                    break;

                                case 2:
                                    printf("Enter num: ");
                                    scanf("%lf", &n1);
                                    printf("Enter num to subtract: ");
                                    scanf("%lf", &n2);
                                    printf("\nAns: %.2lf\n\n", n1 - n2);

                                    printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                    scanf("%d", &op3);

                                    switch (op3){
                                        case 0:
                                        st = 0;
                                        break;

                                        case 1:
                                        break;
                                    }
                                    break;

                                case 3:
                                    printf("Enter multiplicand: ");
                                    scanf("%lf", &n1);
                                    printf("Enter multiplier: ");
                                    scanf("%lf", &n2);
                                    printf("\nAns: %.2lf\n\n", n1 * n2);

                                    printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                    scanf("%d", &op3);

                                    switch (op3){
                                        case 0:
                                        st = 0;
                                        break;

                                        case 1:
                                        break;
                                    }
                                    break;

                                case 4:
                                    printf("Enter dividend: ");
                                    scanf("%lf", &n1);
                                    printf("Enter divisor: ");
                                    scanf("%lf", &n2);
                                    printf("\nAns: %.2lf\n\n", n1 / n2);

                                    printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                    scanf("%d", &op3);

                                    switch (op3){
                                        case 0:
                                        st = 0;
                                        break;

                                        case 1:
                                        break;
                                    }
                                    break;



                                default:
                                    break;
                        
                            }
                        
                        
                        break;

                    case 2:

                        printf("Enter num of which you want the table of: ");
                        scanf("%lf", &n1);

                        for (int i = 1; i < 11; i++){
                        
                            printf("%.2lf x %d = %.2lf\n", n1, i, n1 * i);

                        }

                        printf("\nContinue?\n0: EXIT\n1: Yes\n-> ");
                        scanf("%d", &op2);

                            switch (op2){
                            case 0:
                            st = 0;
                            break;

                            case 1:
                            break;
                            }
                        
                    
                        break;

                    case 3:

                        printf("Type num besides the dimension which suites your shape/figure.\n0: EXIT\n1: 2D\n2: 3D\n-> ");
                        scanf("%d", &op2);

                        switch (op2){

                            case 0:
                                st = 0;
                                break;

                            case 1:
                                printf("Type the number besides your shape:\n0: EXIT\n1: Triangle\n2: Square/Rhombus\n3: Rectangle/Parallelogram\n4: Circle\n-> ");
                                scanf("%d", &op3);

                                switch (op3){

                                    case 0:
                                        st = 0;
                                        break;

                                    case 1:
                                        printf("Enter what you want to calculate related to triangle.\n0: EXIT\n1: Perimeter\n2: Area\n-> ");
                                        scanf("%d", &op4);

                                        switch (op4){
                                            case 0:
                                                st = 0;
                                                break;

                                            case 1:
                                                printf ("Enter length of first side: ");
                                                scanf("%lf", &n1);
                                                printf ("Enter length of second side: ");
                                                scanf("%lf", &n2);
                                                printf ("Enter length of third side: ");
                                                scanf("%lf", &n3);

                                                printf("\nPerimeter = %.2lf\n\n", n1 + n2 + n3);

                                                printf("%d\n", st);
                                                
                                                printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                                scanf("%d", &op5);

                                                switch (op5){
                                                    case 0:
                                                    st = 0;
                                                    printf("%d\n", st);
                                                    break;

                                                    case 1:
                                                    break;

                                                }

                                                break;

                                                

                                            case 2:
                                                printf("Enter height: ");
                                                scanf("%lf", &n1);
                                                printf("Enter base: ");
                                                scanf("%lf", &n2);

                                                printf("\nArea = %.2lf\n\n", (n1 * n2) / 2);

                                                printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                                scanf("%d", &op5);

                                                switch (op5){
                                                    case 0:
                                                    st = 0;
                                                    printf("%d\n", st);
                                                    break;

                                                    case 1:
                                                    break;

                                                }

                                                break;


                                        }

                                    break;

                                    case 2:
                                        printf("Enter what you want to calculate related to square/rhombus.\n0: EXIT\n1: Perimeter\n2: Area\n-> ");
                                        scanf("%d", &op4);

                                        switch (op4){
                                            case 0:
                                                st = 0;
                                                break;

                                            case 1:
                                                printf("Enter length of side: ");
                                                scanf("%lf", &n1);

                                                printf("\nPerimeter = %.2lf\n\n", n1 * 4);
                                            
                                                printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                                scanf("%d", &op5);

                                                switch (op5){
                                                    case 0:
                                                    st = 0;
                                                    printf("%d\n", st);
                                                    break;

                                                    case 1:
                                                    break;

                                                }

                                                break;

                                                

                                            case 2:
                                                printf("Enter length of side: ");
                                                scanf("%lf", &n1);

                                                printf("\nArea = %.2lf\n\n", pow(n1,2));

                                                printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                                scanf("%d", &op5);

                                                switch (op5){
                                                    case 0:
                                                    st = 0;
                                                    break;

                                                    case 1:
                                                    break;

                                                }

                                                break;

                                        }

                                    break;

                                    case 3:
                                        printf("Enter what you want to calculate related to rectangle / parallelogram.\n0: EXIT\n1: Perimeter\n2: Area\n-> ");
                                        scanf("%d", &op4);

                                            switch (op4){

                                                case 0:
                                                    st = 0;
                                                    break;

                                                case 1:
                                                    printf("Enter length: ");
                                                    scanf("%lf", &n1);
                                                    printf("Enter breadth: ");
                                                    scanf("%lf", &n2);

                                                    printf("\nPerimeter = %.2lf\n\n", 2*(n1 + n2));

                                                    printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                                    scanf("%d", &op5);

                                                    switch (op5){
                                                        case 0:
                                                        st = 0;
                                                        break;

                                                        case 1:
                                                        break;

                                                    }

                                                    break;

                                                case 2:
                                                    printf("Enter length: ");
                                                    scanf("%lf", &n1);
                                                    printf("Enter breadth: ");
                                                    scanf("%lf", &n2);

                                                    printf("\nArea = %.2lf\n\n", n1 * n2);

                                                    printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                                    scanf("%d", &op5);

                                                    switch (op5){
                                                        case 0:
                                                        st = 0;
                                                        break;

                                                        case 1:
                                                        break;

                                                    }
                                                    break;
                                            }

                                    break;

                                    case 4:
                                        printf("Enter what you want to calculate related to circle.\n0: EXIT\n1: Perimeter\n2: Area\n-> ");
                                        scanf("%d", &op4);

                                        switch (op4){
                                            case 0:
                                                st = 0;
                                                break;

                                            case 1:
                                                printf("Enter radius: ");
                                                scanf("%lf", &n1);

                                                printf("\nPerimeter = %.2lf\n\n", 2 * M_PI * n1);

                                                printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                                scanf("%d", &op5);

                                                switch (op5){
                                                    case 0:
                                                        st = 0;
                                                        break;

                                                    case 1:
                                                    break;

                                                }
                                                break;

                                                

                                            case 2:
                                                printf("Enter radius: ");
                                                scanf("%lf", &n1);

                                                printf("\nArea = %.2lf\n\n", M_PI * pow(n1, 2));

                                                printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                                scanf("%d", &op5);

                                                switch (op5){
                                                    case 0:
                                                        st = 0;
                                                        break;

                                                    case 1:
                                                        break;

                                                }
                                                break;

                                                
                                        
                        
                                        }

                                    break;

                                    default:
                                        break;

                                }


                            break;

                            case 2:
                                printf("Type the num besides your shape.\n0: EXIT\n1: Cube\n2: Cuboid\n3: Cylinder\n4: Cone\n5: Sphere\n6: Hemisphere\n-> ");
                                scanf("%d", &op3);

                                switch (op3){

                                    case 0:
                                        st = 0;
                                        break;

                                    case 1:
                                        printf("Enter what you want to calculate related to square.\n0: EXIT\n1: Vertical Surface Area\n2: Total Surface Area\n3: Volume\n-> ");
                                        scanf("%d", &op4);

                                        switch (op4){

                                            case 0:
                                                st = 0;
                                                break;

                                            case 1:
                                                printf("Enter length of side of cube: ");
                                                scanf("%lf", &n1);

                                                printf("\nVertical Surface Area = %.2lf\n\n", 4 * pow(n1,2));

                                                printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                                scanf("%d", &op5);

                                                switch (op5){
                                                    case 0:
                                                    st = 0;
                                                    break;

                                                    case 1:
                                                    break;

                                                }

                                                break;
                                            
                                            case 2:
                                                printf("Enter length of side of cube: ");
                                                scanf("%lf", &n1);

                                                printf("\nTotal Surface Area = %.2lf\n\n", 6 * pow(n1,2));

                                                printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                                    scanf("%d", &op5);

                                                switch (op5){
                                                    case 0:
                                                    st = 0;
                                                    break;

                                                    case 1:
                                                    break;

                                                }

                                                break;

                                            case 3:
                                                printf("Enter length of side of cube: ");
                                                scanf("%lf", &n1);

                                                printf("\nVolume = %.2lf\n\n", pow(n1,3));

                                                printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                                    scanf("%d", &op5);

                                                switch (op5){
                                                    case 0:
                                                    st = 0;
                                                    break;

                                                    case 1:
                                                    break;

                                                }

                                                break;

                                                    
                                        }

                                    break;

                                    case 2:
                                        printf("Enter what you want to calculate related to cuboid.\n0: EXIT\n1: Vertical Surface Area\n2: Total Surface Area\n3: Volume\n-> ");
                                        scanf("%d", &op4);

                                        switch (op4){

                                            case 0:
                                                st =0;
                                                break;

                                            case 1:
                                                printf("Enter length: ");
                                                scanf("%lf", &n1);
                                                printf("Enter breadth: ");
                                                scanf("%lf", &n2);
                                                printf("Enter height: ");
                                                scanf("%lf", &n3);

                                                printf("\nVertical Surface Area = %.2lf\n\n", 2 * n3 * (n1 + n2));

                                                printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                                    scanf("%d", &op5);

                                                switch (op5){
                                                    case 0:
                                                    st = 0;
                                                    break;

                                                    case 1:
                                                    break;

                                                }

                                                break;


                                            case 2:
                                                printf("Enter length: ");
                                                scanf("%lf", &n1);
                                                printf("Enter breadth: ");
                                                scanf("%lf", &n2);
                                                printf("Enter height: ");
                                                scanf("%lf", &n3);

                                                printf("\nTotal Surface Area = %.2lf\n\n", 2 * (n1*n2 + n2*n3 + n1*n3));

                                                printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                                    scanf("%d", &op5);

                                                switch (op5){
                                                    case 0:
                                                    st = 0;
                                                    break;

                                                    case 1:
                                                    break;

                                                }

                                                break;


                                            case 3:
                                                printf("Enter length: ");
                                                scanf("%lf", &n1);
                                                printf("Enter breadth: ");
                                                scanf("%lf", &n2);
                                                printf("Enter height: ");
                                                scanf("%lf", &n3);

                                                printf("\nVolume = %.2lf\n\n", n1 * n2 * n3);

                                                printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                                    scanf("%d", &op5);

                                                switch (op5){
                                                    case 0:
                                                    st = 0;
                                                    break;

                                                    case 1:
                                                    break;

                                                }

                                                break;

                                        }

                                    break;

                                    case 3:
                                        printf("Enter what you want to calculate related to cylinder.\n0: EXIT\n1: Curved Surface Area\n2: Total Surface Area\n3: Volume\n-> ");
                                        scanf("%d", &op4);

                                            switch (op4){
                                                case 0:
                                                    st = 0;
                                                    break;

                                                case 1:
                                                    printf("Enter radius of base: ");
                                                    scanf("%lf", &n1);
                                                    printf("Enter height: ");
                                                    scanf("%lf", &n2);

                                                    printf("\nCurved Surface Area = %.2lf\n\n", 2 * M_PI * n1 * n2);

                                                    printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                                    scanf("%d", &op5);

                                                    switch (op5){
                                                        case 0:
                                                        st = 0;
                                                        break;

                                                        case 1:
                                                        break;

                                                }

                                                break;

                                                case 2:
                                                    printf("Enter radius of base: ");
                                                    scanf("%lf", &n1);
                                                    printf("Enter height: ");
                                                    scanf("%lf", &n2);

                                                    printf("\nTotal Surface Area = %.2lf\n\n", 2 * M_PI * n1 * (n1 + n2));

                                                    printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                                    scanf("%d", &op5);

                                                    switch (op5){
                                                        case 0:
                                                        st = 0;
                                                        break;

                                                        case 1:
                                                        break;
                                                    }

                                                    break;


                                                case 3:
                                                    printf("Enter radius of base: ");
                                                    scanf("%lf", &n1);
                                                    printf("Enter height: ");
                                                    scanf("%lf", &n2);

                                                    printf("\nVolume = %.2lf\n\n", M_PI * pow(n1,2) * n2);

                                                    printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                                    scanf("%d", &op5);

                                                    switch (op5){
                                                        case 0:
                                                        st = 0;
                                                        break;

                                                        case 1:
                                                        break;
                                                    }

                                                    break;
                                            }

                                    break;

                                    case 4:
                                        printf("Enter what you want to calculate related to cone.\n0: EXIT\n1: Curved Surface Area\n2: Total Surface Area\n3: Volume\n-> ");
                                        scanf("%d", &op4);

                                            switch (op4){
                                                case 0:
                                                    st = 0;
                                                    break;

                                                case 1:
                                                    printf("Enter radius: ");
                                                    scanf("%lf", &n1);
                                                    printf("Enter slant height: ");
                                                    scanf("%lf", &n2);
                                                
                                                    printf("\nCurved Surface Area: %.2lf\n\n", M_PI * n1 * n2);

                                                    printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                                    scanf("%d", &op5);

                                                    switch (op5){
                                                        case 0:
                                                        st = 0;
                                                        break;

                                                        case 1:
                                                        break;
                                                    }

                                                    break;

                                                case 2:
                                                    printf("Enter radius: ");
                                                    scanf("%lf", &n1);
                                                    printf("Enter slant height: ");
                                                    scanf("%lf", &n2);
                                                                                                    
                                                    printf("\nTotal Surface Area: %.2lf\n\n", M_PI * n1 * (n1 + n2));

                                                    printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                                    scanf("%d", &op5);

                                                    switch (op5){
                                                        case 0:
                                                        st = 0;
                                                        break;

                                                        case 1:
                                                        break;
                                                    }

                                                    break;

                                                
                                                case 3:
                                                    printf("Enter radius: ");
                                                    scanf("%lf", &n1);
                                                    printf("Enter perpendiclular height: ");
                                                    scanf("%lf", &n2);
                                                                                                    
                                                    printf("\nVolume: %.2lf\n\n", oneby3 * M_PI * pow(n1,2) * n2);

                                                    printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                                    scanf("%d", &op5);

                                                    switch (op5){
                                                        case 0:
                                                        st = 0;
                                                        break;

                                                        case 1:
                                                        break;
                                                    }

                                                    break;
                                                
                                                                                     
                                            }

                                    break;

                                    case 5:
                                        printf("Enter what you want to calculate related to sphere.\n0: EXIT\n1: Surface Area\n2: Volume\n-> ");
                                        scanf("%d", &op4);

                                            switch (op4){
                                                case 0:
                                                    st = 0;
                                                    break;

                                                case 1:
                                                    printf("Enter radius: ");
                                                    scanf("%lf", &n1);
                                                                                                                                                        
                                                    printf("\nSurface Area: %.2lf\n\n", 4 * M_PI * pow(n1, 2));

                                                    printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                                    scanf("%d", &op5);

                                                    switch (op5){
                                                        case 0:
                                                        st = 0;
                                                        break;

                                                        case 1:
                                                        break;
                                                    }

                                                    break;


                                                case 2:
                                                    printf("Enter radius: ");
                                                    scanf("%lf", &n1);
                                                                                                                                                        
                                                    printf("\nVolume: %.2lf\n\n", fourby3 * M_PI * (n1, 3));

                                                    printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                                    scanf("%d", &op5);

                                                    switch (op5){
                                                        case 0:
                                                        st = 0;
                                                        break;

                                                        case 1:
                                                        break;
                                                    }

                                                    break;

                                            }

                                    break;

                                    case 6:
                                        printf("Enter what you want to calculate related to hemisphere.\n0: EXIT\n1: Curved Surface Area\n2: Total Surface Area\n3: Volume\n-> ");
                                        scanf("%d", &op4);

                                            switch (op4){
                                                case 0:
                                                    st = 0;
                                                    break;

                                                case 1:
                                                    printf("Enter radius: ");
                                                    scanf("%lf", &n1);
                                                                                                                                                        
                                                    printf("\nCurved Surface Area: %.2lf\n\n", 2 * M_PI * pow(n1, 2));

                                                    printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                                    scanf("%d", &op5);

                                                    switch (op5){
                                                        case 0:
                                                        st = 0;
                                                        break;

                                                        case 1:
                                                        break;
                                                    }

                                                    break;


                                                case 2:
                                                    printf("Enter radius: ");
                                                    scanf("%lf", &n1);
                                                                                                                                                        
                                                    printf("\nTotal Surface Area: %.2lf\n\n", 3 * M_PI * pow(n1, 2));

                                                    printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                                    scanf("%d", &op5);

                                                    switch (op5){
                                                        case 0:
                                                        st = 0;
                                                        break;

                                                        case 1:
                                                        break;
                                                    }

                                                    break;

                                                case 3:
                                                    printf("Enter radius: ");
                                                    scanf("%lf", &n1);
                                                                                                                                                        
                                                    printf("\nVolume: %.2lf\n\n", twoby3 * M_PI * pow(n1,3));

                                                    printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                                    scanf("%d", &op5);

                                                    switch (op5){
                                                        case 0:
                                                        st = 0;
                                                        break;

                                                        case 1:
                                                        break;
                                                    }

                                                break;


                                            }

                                    break;



                                

                                default:
                                break;
                                }

                            break;


                        }

                    break;

                    case 4:
                        printf("What do you want to calculate?\n0: EXIT \n1: Sine(sin)\n2: Cosine(cos)\n3: Tangent(tan)\n4: Cosecant(cosec)\n5: Secant(sec)\n6: Cotangent(cot)\n-> ");
                        scanf("%d", &op2);

                        switch (op2){

                            case 0: 
                            st = 0;

                            case 1:
                                printf("Enter angle\n-> ");
                                scanf("%lf", &n1);

                                radian = n1 * M_PI / 180.00;

                                printf("\nSine(sin) %.2lf = %.2lf\n\n", n1, sin(radian));

                                printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                scanf("%d", &op3);

                                switch (op3){

                                    case 0:
                                    st =0;
                                    

                                    case 1:
                                    break;
                                }

                            break;

                            case 2:
                                printf("Enter angle\n-> ");
                                scanf("%lf", &n1);

                                radian = n1 * M_PI / 180.00;

                                printf("\nCosine(cos) %.2lf = %.2lf\n\n", n1, cos(radian));

                                printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                scanf("%d", &op3);

                                switch (op3){

                                    case 0:
                                    st =0;
                                    break;

                                    case 1:
                                    break;
                                }

                            break;

                                
                            case 3:
                                printf("Enter angle\n-> ");
                                scanf("%lf", &n1);

                                radian = n1 * M_PI / 180.00;

                                printf("\nTangent(tan) %.2lf = %.2lf\n\n", n1, tan(radian));

                                printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                scanf("%d", &op3);

                                switch (op3){

                                    case 0:
                                    st =0;
                                    break;

                                    case 1:
                                    break;
                                }

                            break;

                            case 4:
                                printf("Enter angle\n-> ");
                                scanf("%lf", &n1);

                                radian = n1 * M_PI / 180.00;

                                printf("\nCosecant(cosec) %.2lf = %.2lf\n\n", n1, 1 / sin(radian));

                                printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                scanf("%d", &op3);

                                switch (op3){

                                    case 0:
                                    st =0;
                                    break;

                                    case 1:
                                    break;
                                }

                            break;

                            case 5:
                                printf("Enter angle\n-> ");
                                scanf("%lf", &n1);

                                radian = n1 * M_PI / 180.00;

                                printf("\nSecant(sec) %.2lf = %.2lf\n\n", n1, 1 / cos(radian));

                                printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                scanf("%d", &op3);

                                switch (op3){

                                    case 0:
                                    st =0;
                                    break;

                                    case 1:
                                    break;
                                }

                            break;

                            case 6:
                                printf("Enter angle\n-> ");
                                scanf("%lf", &n1);

                                radian = n1 * M_PI / 180.00;

                                printf("\nCotangent(cot) %.2lf = %.2lf\n\n", n1, 1 / tan(radian));

                                printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                scanf("%d", &op3);

                                switch (op3){

                                    case 0:
                                    st =0;
                                    break;

                                    case 1:
                                    break;
                                }

                            break;

                                                         
                            
                        }

                    break;

                    case 5:
                        printf("Select Formula:\n0: EXIT\n1: Potential Difference = Work Done/Charge\n2: Current = Charge/Time Period\n3: Resistance = Potential Difference/Current\n-> ");
                        scanf("%d", &op2);

                        switch (op2){
                            case 0:
                            st = 0;
                            break;
                            
                            case 1:
                                printf("What do you want to calculate?\n0: EXIT\n1: Potential Difference\n2: Work Done\n3: Charge\n-> ");
                                scanf("%d", &op3);

                                switch (op3){
                                    case 0:
                                    st = 0;
                                    break;

                                    case 1:
                                        printf("Enter Work Done: ");
                                        scanf("%lf", &n1);
                                        printf("Enter Charge Transferred: ");
                                        scanf("%lf", &n2);

                                        printf("\nPotential Difference = %.2lf\n\n", n1 / n2);

                                        printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                        scanf("%d", &op4);

                                        switch (op4){
                                            case 0:
                                            st = 0;
                                            break;

                                            case 1:
                                            break;
                                        }

                                    break;

                                    case 2:
                                        printf("Enter Potential Difference: ");
                                        scanf("%lf", &n1);
                                        printf("Enter Charge Transferred: ");
                                        scanf("%lf", &n2);

                                        printf("\nWork Done = %.2lf\n\n", n1 * n2);

                                        printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                        scanf("%d", &op4);

                                        switch (op4){
                                            case 0:
                                            st = 0;
                                            break;

                                            case 1:
                                            break;
                                        }

                                    break;

                                    case 3:
                                        printf("Enter Potential Difference: ");
                                        scanf("%lf", &n1);
                                        printf("Enter Work Done: ");
                                        scanf("%lf", &n2);

                                        printf("\nCharge = %.2lf\n\n", n2 / n1);

                                        printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                        scanf("%d", &op4);

                                        switch (op4){
                                            case 0:
                                            st = 0;
                                            break;

                                            case 1:
                                            break;
                                        }
                                    break;


                                }
                                        

                            break;  
                            
                            case 2:
                                printf("What do you want to calculate?\n0: EXIT\n1: Current\n2: Charge Transferrend\n3: Time\n-> ");
                                scanf("%d", &op3);

                                switch(op3){
                                    case 0:
                                        st = 0;
                                        break;

                                    case 1:
                                        printf("Enter Charge Transferrend: ");
                                        scanf("%lf", &n1);
                                        printf("Enter Time Period: ");
                                        scanf("%lf", &n2);

                                        printf("\nCurrent = %.2lf\n\n", n1 / n2);

                                        printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                        scanf("%d", &op4);

                                        switch (op4){
                                            case 0:
                                            st = 0;
                                            break;

                                            case 1:
                                            break;
                                        }

                                    break;

                                    case 2:
                                        printf("Enter Current: ");
                                        scanf("%lf", &n1);
                                        printf("Enter Time Period: ");
                                        scanf("%lf", &n2);

                                        printf("\nCurrent = %.2lf\n\n", n1 * n2);

                                        printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                        scanf("%d", &op4);

                                        switch (op4){
                                            case 0:
                                            st = 0;
                                            break;

                                            case 1:
                                            break;
                                        }

                                    break;

                                    case 3:
                                        printf("Enter Current: ");
                                        scanf("%lf", &n1);
                                        printf("Enter Time Period: ");
                                        scanf("%lf", &n2);

                                        printf("\nCurrent = %.2lf\n\n", n2 / n1);

                                        printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                        scanf("%d", &op4);

                                        switch (op4){
                                            case 0:
                                            st = 0;
                                            break;

                                            case 1:
                                            break;
                                        }

                                    break;

                                }

                            break;

                            case 3:
                                printf("What do you want to calculate?\n0: EXIT\n1: Resistance\n2: Potential Difference\n3: Current\n-> ");
                                scanf("%d", &op3);

                                switch (op3){

                                    case 0:
                                    st = 0;
                                    break;

                                    case 1:
                                        printf("Enter Potential Difference: ");
                                        scanf("%lf", &n1);
                                        printf("Enter Current: ");
                                        scanf("%lf", &n2);

                                        printf("\nResistance = %.2lf\n\n", n1 / n2);

                                        printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                        scanf("%d", &op4);

                                        switch (op4){
                                            case 0:
                                            st = 0;
                                            break;

                                            case 1:
                                            break;
                                        }

                                    break;

                                    case 2:
                                        printf("Enter Resistance: ");
                                        scanf("%lf", &n1);
                                        printf("Enter Current: ");
                                        scanf("%lf", &n2);

                                        printf("\nPotential Difference = %.2lf\n\n", n1 * n2);

                                        printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                        scanf("%d", &op4);

                                        switch (op4){
                                            case 0:
                                            st = 0;
                                            break;

                                            case 1:
                                            break;
                                        }

                                    break;

                                    case 3:
                                        printf("Enter Resistance: ");
                                        scanf("%lf", &n1);
                                        printf("Enter Potential Difference: ");
                                        scanf("%lf", &n2);

                                        printf("\nCurrent = %.2lf\n\n", n2 / n1);

                                        printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                        scanf("%d", &op4);

                                        switch (op4){
                                            case 0:
                                            st = 0;
                                            break;

                                            case 1:
                                            break;
                                        }

                                    break;



                                }

                            break;
                                
                        }

                    break;

                    case 6:
                        printf("What do you want to calculate?\n0: EXIT\n1: Speed/Velocity\n2: Distance/Displacement\n3: Time Period\n4: Acceleration\n-> ");
                        scanf("%d", &op2);

                        switch (op2){
                            case 0:
                            st = 0;
                            break;

                            case 1:
                                printf("Enter Distance/Displacement: ");
                                scanf("%lf", &n1);
                                printf("Enter Time Required: ");
                                scanf("%lf", &n2);

                                printf("\nSpeed/Velocity = %.2lf\n\n", n1 / n2);

                                printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                scanf("%d", &op3);

                                switch (op3){
                                    case 0:
                                    st = 0;
                                    break;

                                    case 1:
                                    break;
                                }
                            
                            break;

                            case 2:
                                printf("Enter Speed/Velocity: ");
                                scanf("%lf", &n1);
                                printf("Enter Time Required: ");
                                scanf("%lf", &n2);

                                printf("\nDistance/Displacement = %.2lf\n\n", n1 * n2);

                                printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                scanf("%d", &op3);

                                switch (op3){
                                    case 0:
                                    st = 0;
                                    break;

                                    case 1:
                                    break;
                                }

                            break;

                            case 3:
                                printf("Enter Speed/Velocity: ");
                                scanf("%lf", &n1);
                                printf("Enter Distance/Displacement: ");
                                scanf("%lf", &n2);

                                printf("\nTime Required = %.2lf\n\n", n2 / n1);

                                printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                scanf("%d", &op3);

                                switch (op3){
                                    case 0:
                                    st = 0;
                                    break;

                                    case 1:
                                    break;
                                }


                            break;

                            case 4:
                                printf("Enter Final Velocity: ");
                                scanf("%lf", &n1);
                                printf("Enter Initial Velocity: ");
                                scanf("%lf", &n2);
                                printf("Enter Time Period: ");
                                scanf("%lf", &n3);

                                printf("\nAcceleration = %.2lf\n\n", (n1 - n2) / n3);

                                printf("Continue?\n0: EXIT\n1: Yes\n-> ");
                                scanf("%d", &op3);

                                switch (op3){
                                    case 0:
                                    st = 0;
                                    break;

                                    case 1:
                                    break;
                                }



                            break;


                        }



                                                           
                                    
                    break;

                    default:
                        break;
                
                }   

            }

            
        
        return 0;
    
    }

