for(i=0;i<number;i++)       //number最大值为1024
{ 
    if(client_socket[i] != 0)    //client_socket为客户端套接字
    {
        FD_SET(i,&clientset);    //clientset为套接字集合
    }
}
