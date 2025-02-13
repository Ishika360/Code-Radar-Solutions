switch (ch){
    case '+':
    printf("%d\n",x+y);
    break;
    case '-':
    printf("%d\n",x-y);
    break;
    case '*':
    printf("%d\n",x*y);
    break;
    case '/':
    if(y==0){
        prinf("error\n");
    }
    else{   
        printf("%d\n",x/y);
    }
    break;
    default:
    printf("error\n");
    break;
    }
    return 0;
}