package Practical;

class PayoutOutOfBoundsException extends Exception {
    public PayoutOutOfBoundsException(String message) {
        super(message);
    }
}
public class PayoutChecker {
    public static void checkPayout(int payout) throws PayoutOutOfBoundsException {
        if (payout < 0 || payout > 10000) {
            throw new PayoutOutOfBoundsException("Payout out of bounds: " + payout);
        } else {
            System.out.println("Valid payout: " + payout);
        }
    }
    public static void main(String[] args) {
        try {
            checkPayout(10);
        } catch (PayoutOutOfBoundsException e) {
            System.out.println("Exception caught: " + e.getMessage());
        }
    }
}

