class Celestialbody
    {
        public:
            long double mass;
            long double radius;
            long double density;
            long double distance_from_earth_in_astronomicalunits;
            long double age_of_celestial_body_in_billionyrs;
            string galaxy_name;
    };
class Star: public Celestialbody
{
public:
    long double luminous_intensity;
    long double surface_temp;
    string temp_color_of_star;
    string constellation;
    long double wavelength_with_max_intensity_released()
    {
       return surface_temp/(2.897e-3); //Here 2.897e-3 is wein's constant
    }

};
class Planet:public Celestialbody
{
public:
    long double duration_of_rotation;
    long double duration_of_revolution;
    long double orbital_radius;
    long double acceleration_due_to_gravity;
    long double duration_of_day_in_earthdays;
    long double duration_of_year_in_earth_years;
    long double rotation_speed;
    long double m; //It is mass of star about which our planet revolving.
    int number_of_moons;
    string star_about_which_it_rotates;
    long double total_length_of_orbit();
    {
        return 2*3.14159*orbital_radius; //as circumference is 2*pi*radius;
    }
    long double revolution_speed()
    {
        return (6.67e-11*m)/orbital_radius;
    }
    long double escape_speed()
    {
        return sqrt(2*acceleration_due_to_gravity*orbital_radius);
    }
};