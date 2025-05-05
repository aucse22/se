import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;

public class ex5 {
    public static void main(String[] args) {
        System.setProperty("webdriver.edge.driver", "C:\\edgedriver\\msedgedriver.exe");
        WebDriver driver = new EdgeDriver();
        driver.manage().window().maximize();
            driver.get("file:///D:/gcd.html");
            WebElement num1Input = driver.findElement(By.id("num1"));
            WebElement num2Input = driver.findElement(By.id("num2"));
            WebElement calculateButton = driver.findElement(By.xpath("//button[text()='Calculate GCD']"));
            num1Input.sendKeys("5");
            num2Input.sendKeys("6");
            calculateButton.click();
            WebElement result = driver.findElement(By.id("result"));
            System.out.println("Test Result: " + result.getText());
    }
}