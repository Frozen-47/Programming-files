package Practice;

public class DataTypeLength {
    public static void main(String[] args) {
            System.out.println("byte    : " + Byte.BYTES + " bytes, range: " + Byte.MIN_VALUE + " to " + Byte.MAX_VALUE);
            System.out.println("short   : " + Short.BYTES + " bytes, range: " + Short.MIN_VALUE + " to " + Short.MAX_VALUE);
            System.out.println("int     : " + Integer.BYTES + " bytes, range: " + Integer.MIN_VALUE + " to " + Integer.MAX_VALUE);
            System.out.println("long    : " + Long.BYTES + " bytes, range: " + Long.MIN_VALUE + " to " + Long.MAX_VALUE);
            System.out.println("float   : " + Float.BYTES + " bytes, range: " + Float.MIN_VALUE + " to " + Float.MAX_VALUE);
            System.out.println("double  : " + Double.BYTES + " bytes, range: " + Double.MIN_VALUE + " to " + Double.MAX_VALUE);
            System.out.println("char    : " + Character.BYTES + " bytes, range: " + (int) Character.MIN_VALUE + " to " + (int) Character.MAX_VALUE);
            System.out.println("boolean : size not fixed, values: " + Boolean.FALSE + " or " + Boolean.TRUE);
        }
}