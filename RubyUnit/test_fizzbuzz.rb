#!/usr/bin/ruby
# = test for fizzbuzz
require 'test/unit'
require 'fizzbuzz'

class TC_fizzbuzz < Test::Unit::TestCase
  def test_fizzbuzz_0
    assert_raises(RuntimeError){
      0.fizzbuzz
    }
  end

  def test_fizzbuzz_normal
    1.upto(0xFF){|i|
      fizbuz = i.fizzbuzz
      assert_kind_of(String, fizbuz)
      case i%15
      when 0
        assert_equal('FizzBuzz', fizbuz)
      when 3,9,12
        assert_equal('Fizz', fizbuz)
      when 5,10
        assert_equal('Buzz', fizbuz)
      else
        assert_equal(i.to_s, fizbuz)
      end
    }
  end
end
