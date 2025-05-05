import java.time.Duration; 
import java.util.List;
import org.openqa.selenium.By; 
import org.openqa.selenium.WebElement; 
import org.openqa.selenium.edge.EdgeDriver; 
public class ex2{ 
    public static void main(String[] args) { 
        System.setProperty("webdriver.edge.driver", "C:\\edgedriver\\msedgedriver.exe"); 
        EdgeDriver driver = new EdgeDriver();  
        driver.manage().timeouts().implicitlyWait(Duration.ofSeconds(10)); 
        driver.manage().window().maximize(); 
        driver.get("https://compsem24.web.app/"); 
        List<WebElement> paragraphs = driver.findElements(By.xpath("//p")); 
        int num = paragraphs.size(); 
        System.out.println("The number of <p> elements present are: " + num); 
    } 
} 