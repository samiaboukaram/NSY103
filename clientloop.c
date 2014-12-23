	for ( ; ; ) {
    int i = sizeof(buffer); if (i > 255) bzero(buffer, 256);
    fprintf(stdout, "ME: ");
    fgets(buffer,255,stdin); 
    n = write(sockfd,buffer,strlen(buffer)+1);
    if (n < 0) 
         error("ERROR writing to socket");
    i = sizeof(buffer); if (i > 255) bzero(buffer, 256);
        n = read(sockfd,buffer,sizeof(buffer));
    if (n < 0) 
         error("ERROR reading from socket");
    fprintf(stdout, "SERVER: %s\n",buffer);
    }
  close(sockfd);
  return 0;
  }
