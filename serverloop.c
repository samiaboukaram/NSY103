for( ; ; ) {
     int i = sizeof(buffer); if (i > 255) bzero(buffer, 256);
     n = read(newsockfd,buffer,sizeof(buffer));
     if (n < 0) error("ERROR reading from socket");
     fprintf(stdout, "CLIENT: %s\n",buffer); 
 
     i = sizeof(buffer); if (i > 255) bzero(buffer, 256);
     fprintf(stdout, "ME: ");
     fgets(buffer, 255, stdin);
     n = write(newsockfd, buffer, strlen(buffer)+1);
     if (n < 0)
         error("Error has occured.");
     }
     close(newsockfd);
     close(sockfd);
     return 0; 
}
