
<?

try {
    $result = 10 / 0; // Division by zero will cause an exception
    echo "Result: $result"; // This line won't be executed if an exception occurs
} catch (Error $e) {
    // Handle the division by zero exception
    echo "Error: " . $e->getMessage();
}


?>