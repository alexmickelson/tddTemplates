using NUnit.Framework;
using calculator;
using System.Collections.Generic;

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

            var calcBrain = new Dictionary<string, int>();
            calcBrain.Add("1+1", 2);
            
            calc.SetBrain(calcBrain);

            Assert.AreEqual(2, calc.add(1,1));

        }
    }
}