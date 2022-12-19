      PROGRAM TEST
      IMPLICIT NONE 
      INTEGER :: I,J,N 
      REAL :: START,FINAL
      DOUBLE PRECISION :: SUM,ADD
      
      CALL CPU_TIME(START)
      
      N=100000
      SUM=0.0
      ADD=1.0
      
      DO I=1,N
         DO J=1,N
           SUM=SUM+ADD
         END DO
      END DO
      
      CALL CPU_TIME(FINAL)
      
      WRITE(*,*) SUM
      WRITE(*,*) "CPU TIME (IN SECONDS):", (FINAL-START)
      WRITE(*,*)
      
      END PROGRAM
      
      
