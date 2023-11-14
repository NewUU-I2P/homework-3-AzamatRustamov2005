float problemSolution5(float x, float y, char operation) {
   float result;
   
   if (operation == '*')
      result = x * y;
   if (operation == '/')
      result = x / y;
   if (operation == '+')
      result = x + y;
   if (operation == '-')
      result = x - y;

   return result;
}
