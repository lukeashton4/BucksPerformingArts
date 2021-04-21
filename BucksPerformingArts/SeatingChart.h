#pragma once
#include <string>
#include <iostream>
class SeatingChart
{
public:
	int NumberOfSeats;
	bool IsAutomatic;
	bool IsSeatAvailable;

	void SelectSeat(int seatId) {
		//When a user clicks on a seat
		//if user selects a seat {
			std::string reason = "held"; //dummy db call to get the reason seat is selected
			FlagUnavailable(reason, seatId);
		// }
		//if user deselects a seat {
			FlagAvailable(seatId);
		// }
	};
	int SetNumberOfSeats() {
		int numberOfSeats;
		std::cout << "Enter new number of seats: ";
		std::cin >> numberOfSeats;
		//save numberOfSeats to db
	}
	void AutoSelect(double price, int number) {
		std::cout << "Enter price: ";
		std::cin >> price;
		//save to db
		std::cout << "Enter number of seats: ";
		std::cin >> number;
		//save to db
		//FindSeats(price, number) -- another class to find the suitable seats
	}
private:
	void FlagUnavailable(std::string type, int seatId) {
		//db call to mark the seat as unavailable and update the reason
	}
	void FlagAvailable(int seatId) {
		//db call to mark the seat as available
	}
};

