class Fixnum
  def fizzbuzz
    raise "zero can't fizzbuz" if self == 0
    case self % 15
    when 0
      'FizzBuzz'
    when 3,9,12
      'Fizz'
    when 5,10
      'Buzz'
    else
      self.to_s
    end
  end
end
