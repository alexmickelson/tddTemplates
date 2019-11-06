using NUnit.Framework;
using calculator;

namespace test
{
    public class Tests
    {
        [SetUp]
        public void Setup()
        {
        }

        [Test]
        public void Test1()
        {
            var calc = new Calculator();
            Assert.AreEqual(7,calc.evaluateString("4+3"));
        }
    }
}