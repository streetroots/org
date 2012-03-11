<?php
/**
 * @file
 * sr_core.box.inc
 */

/**
 * Implements hook_default_box().
 */
function sr_core_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'aboutourwork';
  $box->plugin_key = 'simple';
  $box->title = 'Our Work';
  $box->description = 'Our Work box for About page';
  $box->options = array(
    'body' => array(
      'value' => '<p>
<a href="/about/work#programs">Programs</a>
<a href="/about/work#history">History</a>
<a href="/about/work#results">Results</a>
</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['aboutourwork'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'accountability';
  $box->plugin_key = 'simple';
  $box->title = 'Accountability';
  $box->description = 'Accountability box for About page';
  $box->options = array(
    'body' => array(
      'value' => '<p>
<a href="about/accountability#affiliations">Affiliations</a>
<a href="about/accountability#finances">Finances</a>
<a href="about/accountability#governance">Governance</a>
<a href="about/accountability#annualreports">Annual Reports</a>
</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['accountability'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'advocacy_by_type';
  $box->plugin_key = 'simple';
  $box->title = 'Advocacy Campaigns Links';
  $box->description = 'advocacy by type for advocacy program page';
  $box->options = array(
    'body' => array(
      'value' => '<p>Housing</p><p>Health</p><p>Civil Rights</p>',
      'format' => 'filtered_html',
    ),
  );
  $export['advocacy_by_type'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'box-c9035927';
  $box->plugin_key = 'simple';
  $box->title = 'Keep Us Strong';
  $box->description = 'Keep Us Strong';
  $box->options = array(
    'body' => array(
      'value' => '',
      'format' => 'filtered_html',
    ),
  );
  $export['box-c9035927'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'donate_connect';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Donate and Connect sitewide';
  $box->options = array(
    'body' => array(
      'value' => '<h3 class="first">Keep us strong</h3>
<a class="button" href="https://org2.democracyinaction.org/o/5474/t/3276/shop/custom.jsp?donate_page_KEY=421" title="Donate securely to Street Roots via Democracy in Action">Donate via Democracy in Action</a>
<h3>Keep in touch</h3>
<ul class="follow clearfix">
  <li><a class="follow-rss" href="http://streetroots.wordpress.com/feed/">Subscribe to Street Roots news online</a></li>
  <li><a class="follow-fb" href="http://www.facebook.com/pages/Street-Roots/246877005382857">Join us on Facebook</a></li>
  <li><a class="follow-twitter" href="http://twitter.com/streetroots">Follow us on Twitter</a></li>
  <li><a class="follow-vimeo" href="http://vimeo.com/user9472930">Street Roots Vimeo Channel</a></li>
  <li><a class="follow-email" href="/contact/hello">Contact Us</a></li>
</ul>
<h3>Sign up for our newsletter</h3>
<form method="get" action="http://org2.democracyinaction.org/dia/api/process.jsp"><input type="hidden" name="table" value="supporter"><input type="hidden" name="organization_KEY" value="5474"><input type="hidden" name="redirect" value="newsletterthanks"><input name="Email" placeholder="Email Address"><input type="Submit" value="Subscribe" class="button">
</form>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['donate_connect'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'footer_credits';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'footer site credits';
  $box->options = array(
    'body' => array(
      'value' => '<a href="/user">staff login</a>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['footer_credits'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'footer_data';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Footer information';
  $box->options = array(
    'body' => array(
      'value' => '<p><strong>Street Roots</strong><br />211 NW Davis St.&nbsp;<br />Portland, OR 97209-3922<br />503-228-5657</p><p>Copyright 1998-2011 Street Roots. All rights reserved.</p>',
      'format' => 'filtered_html',
    ),
  );
  $export['footer_data'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'mission';
  $box->plugin_key = 'simple';
  $box->title = 'Our Mission';
  $box->description = 'Our Mission block for About page';
  $box->options = array(
    'body' => array(
      'value' => '<p>Street Roots creates income opportunities for people experiencing homelessness and poverty by producing a newspaper and other media that are catalysts for individual and social change.</p>',
      'format' => 'filtered_html',
    ),
  );
  $export['mission'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'newsletter_signup_form';
  $box->plugin_key = 'simple';
  $box->title = 'Sign up for our newsletter';
  $box->description = 'Newsletter Signup';
  $box->options = array(
    'body' => array(
      'value' => '<form method="POST" action="http://sample.nodeurl.tld/dia/processEditValues.jsp">
       <input type="hidden" name="organization_KEY" value="YOUR+ORGANIZATION+KEY" />
       <input type="hidden" name="table" value="supporter" />
       First Name: <input type="text" name="First_Name" />
       Last Name: <input type="text" name="Last_Name" />
       Email Address: <input type="text" name="Email" />
       Phone: <input type="text" name="Phone" />
       Cell Phone: <input type="text" name="Cell_Phone" />
       Street: <input type="text" name="Street" />
       Street 2: <input type="text" name="Street_2" />
       Street 3: <input type="text" name="Street_3" />
       City: <input type="text" name="City" />
       State / Region:
       <select name="State">
       <OPTION VALUE="">Select One...</option>
    <OPTION VALUE="AL" >Alabama</OPTION>
    <OPTION VALUE="AK" >Alaska</OPTION>
    <OPTION VALUE="AZ" >Arizona</OPTION>
    <OPTION VALUE="AR" >Arkansas</OPTION>
    <OPTION VALUE="CA" >California</OPTION>
    <OPTION VALUE="CO" >Colorado</OPTION>
    <OPTION VALUE="CT" >Connecticut</OPTION>
    <OPTION VALUE="DE" >Delaware</OPTION>
    <OPTION VALUE="DC" >D.C.</OPTION>
    <OPTION VALUE="FL" >Florida</OPTION>
    <OPTION VALUE="GA" >Georgia</OPTION>
    <OPTION VALUE="HI" >Hawaii</OPTION>
    <OPTION VALUE="ID" >Idaho</OPTION>
    <OPTION VALUE="IL" >Illinois</OPTION>
    <OPTION VALUE="IN" >Indiana</OPTION>
    <OPTION VALUE="IA" >Iowa</OPTION>
    <OPTION VALUE="KS" >Kansas</OPTION>
    <OPTION VALUE="KY" >Kentucky</OPTION>
    <OPTION VALUE="LA" >Louisiana</OPTION>
    <OPTION VALUE="ME" >Maine</OPTION>
    <OPTION VALUE="MD" >Maryland</OPTION>
    <OPTION VALUE="MA" >Massachusetts</OPTION>
    <OPTION VALUE="MI" >Michigan</OPTION>
    <OPTION VALUE="MN" >Minnesota</OPTION>
    <OPTION VALUE="MS" >Mississippi</OPTION>
    <OPTION VALUE="MO" >Missouri</OPTION>
    <OPTION VALUE="MT" >Montana</OPTION>
    <OPTION VALUE="NE" >Nebraska</OPTION>
    <OPTION VALUE="NV" >Nevada</OPTION>
    <OPTION VALUE="NH" >New Hampshire</OPTION>
    <OPTION VALUE="NJ" >New Jersey</OPTION>
    <OPTION VALUE="NM" >New Mexico</OPTION>
    <OPTION VALUE="NY" >New York</OPTION>
    <OPTION VALUE="NC" >North Carolina</OPTION>
    <OPTION VALUE="ND" >North Dakota</OPTION>
    <OPTION VALUE="OH" >Ohio</OPTION>
    <OPTION VALUE="OK" >Oklahoma</OPTION>
    <OPTION VALUE="OR" >Oregon</OPTION>
    <OPTION VALUE="PA" >Pennsylvania</OPTION>
    <OPTION VALUE="PR" >Puerto Rico</OPTION>
    <OPTION VALUE="RI" >Rhode Island</OPTION>
    <OPTION VALUE="SC" >South Carolina</OPTION>
    <OPTION VALUE="SD" >South Dakota</OPTION>
    <OPTION VALUE="TN" >Tennessee</OPTION>
    <OPTION VALUE="TX" >Texas</OPTION>
    <OPTION VALUE="UT" >Utah</OPTION>
    <OPTION VALUE="VT" >Vermont</OPTION>
    <OPTION VALUE="VA" >Virginia</OPTION>
    <OPTION VALUE="WA" >Washington</OPTION>
    <OPTION VALUE="WV" >West Virginia</OPTION>
    <OPTION VALUE="WI" >Wisconsin</OPTION>
    <OPTION VALUE="WY" >Wyoming</OPTION>
    <OPTION VALUE="AB">Alberta</OPTION>
    <OPTION VALUE="BC">British Columbia</OPTION>
    <OPTION VALUE="MB">Manitoba</OPTION>
    <OPTION VALUE="NF">Newfoundland</OPTION>
    <OPTION VALUE="NB">New Brunswick</OPTION>
    <OPTION VALUE="NS">Nova Scotia</OPTION>
    <OPTION VALUE="NT">Northwest Territories</OPTION>
    <OPTION VALUE="NU">Nunavut</OPTION>
    <OPTION VALUE="ON">Ontario</OPTION>
    <OPTION VALUE="PE">Prince Edward Island</OPTION>
    <OPTION VALUE="QC">Quebec</OPTION>
    <OPTION VALUE="SK">Saskatchewan</OPTION>
    <OPTION VALUE="YT">Yukon Territory</OPTION>
    <OPTION VALUE="ot">Other</OPTION>
        </SELECT>
       Zip: <input type="text" name="Zip" /><input type="text" name="PRIVATE_Zip_Plus_4" />
       Country:
       <select name="Country">
        <OPTION VALUE="">Select One...</option>
        <option value="United States">United States
        <option value="Afghanistan">Afghanistan
        <option value="Albania">Albania
        <option value="Algeria">Algeria
        <option value="Andorra">Andorra
        <option value="Angola">Angola
        <option value="Antigua and Barbuda">Antigua and Barbuda
        <option value="Argentina">Argentina
        <option value="Armenia">Armenia
        <option value="Australia">Australia
        <option value="Austria">Austria
        <option value="Azerbaijan">Azerbaijan
        <option value="Bahamas">Bahamas
        <option value="Bahrain">Bahrain
        <option value="Bangladesh">Bangladesh
        <option value="Barbados">Barbados
        <option value="Belarus">Belarus
        <option value="Belgium">Belgium
        <option value="Belize">Belize
        <option value="Benin">Benin
        <option value="Bhutan">Bhutan
        <option value="Bolivia">Bolivia
        <option value="Bosnia and Herzegovina">Bosnia and Herzegovina
        <option value="Botswana">Botswana
        <option value="Brazil">Brazil
        <option value="Brunei">Brunei
        <option value="Bulgaria">Bulgaria
        <option value="Burkina Faso">Burkina Faso
        <option value="Burundi">Burundi
        <option value="Cambodia">Cambodia
        <option value="Cameroon">Cameroon
        <option value="Canada">Canada
        <option value="Cape Verde">Cape Verde
        <option value="Central African Republic">Central African Republic
        <option value="Chad">Chad
        <option value="Chile">Chile
        <option value="China">China
        <option value="Colombia">Colombia
        <option value="Comoros">Comoros
        <option value="Congo">Congo
        <option value="Congo, Democratic Republic of the">Congo, Democratic Republic of the
        <option value="Costa Rica">Costa Rica
        <option value="Croatia">Croatia
        <option value="Cuba">Cuba
        <option value="Cyprus">Cyprus
        <option value="Czech Republic">Czech Republic
        <option value="Ivory Coast">Ivory Coast
        <option value="Denmark">Denmark
        <option value="Djibouti">Djibouti
        <option value="Dominica">Dominica
        <option value="Dominican Republic">Dominican Republic
        <option value="East Timor">East Timor
        <option value="Ecuador">Ecuador
        <option value="Egypt">Egypt
        <option value="El Salvador">El Salvador
        <option value="Equatorial Guinea">Equatorial Guinea
        <option value="Eritrea">Eritrea
        <option value="Estonia">Estonia
        <option value="Ethiopia">Ethiopia
        <option value="Fiji">Fiji
        <option value="Finland">Finland
        <option value="France">France
        <option value="Gabon">Gabon
        <option value="Gambia, The">Gambia, The
        <option value="Georgia">Georgia
        <option value="Germany">Germany
        <option value="Ghana">Ghana
        <option value="Greece">Greece
        <option value="Grenada">Grenada
        <option value="Guatemala">Guatemala
        <option value="Guinea">Guinea
        <option value="Guinea-Bissau">Guinea-Bissau
        <option value="Guyana">Guyana
        <option value="Haiti">Haiti
        <option value="Honduras">Honduras
        <option value="Hungary">Hungary
        <option value="Iceland">Iceland
        <option value="India">India
        <option value="Indonesia">Indonesia
        <option value="Iran">Iran
        <option value="Iraq">Iraq
        <option value="Ireland">Ireland
        <option value="Israel">Israel
        <option value="Italy">Italy
        <option value="Jamaica">Jamaica
        <option value="Japan">Japan
        <option value="Jordan">Jordan
        <option value="Kazakhstan">Kazakhstan
        <option value="Kenya">Kenya
        <option value="Kiribati">Kiribati
        <option value="Korea, North">Korea, North
        <option value="Korea, South">Korea, South
        <option value="Kuwait">Kuwait
        <option value="Kyrgyzstan">Kyrgyzstan
        <option value="Laos">Laos
        <option value="Latvia">Latvia
        <option value="Lebanon">Lebanon
        <option value="Lesotho">Lesotho
        <option value="Liberia">Liberia
        <option value="Libya">Libya
        <option value="Liechtenstein">Liechtenstein
        <option value="Lithuania">Lithuania
        <option value="Luxembourg">Luxembourg
        <option value="Macedonia, Former Yugoslav Republic of">Macedonia, Former Yugoslav Republic of
        <option value="Madagascar">Madagascar
        <option value="Malawi">Malawi
        <option value="Malaysia">Malaysia
        <option value="Maldives">Maldives
        <option value="Mali">Mali
        <option value="Malta">Malta
        <option value="Marshall Islands">Marshall Islands
        <option value="Mauritania">Mauritania
        <option value="Mauritius">Mauritius
        <option value="Mexico">Mexico
        <option value="Micronesia, Federated States of">Micronesia, Federated States of
        <option value="Moldova">Moldova
        <option value="Monaco">Monaco
        <option value="Mongolia">Mongolia
        <option value="Morocco">Morocco
        <option value="Mozambique">Mozambique
        <option value="Myanmar">Myanmar
        <option value="Namibia">Namibia
        <option value="Nauru">Nauru
        <option value="Nepal">Nepal
        <option value="Netherlands">Netherlands
        <option value="New Zealand">New Zealand
        <option value="Nicaragua">Nicaragua
        <option value="Niger">Niger
        <option value="Nigeria">Nigeria
        <option value="Norway">Norway
        <option value="Oman">Oman
        <option value="Pakistan">Pakistan
        <option value="Palau">Palau
        <option value="Panama">Panama
        <option value="Papua New Guinea">Papua New Guinea
        <option value="Paraguay">Paraguay
        <option value="Palestine">Palestine
        <option value="Peru">Peru
        <option value="Philippines">Philippines
        <option value="Poland">Poland
        <option value="Portugal">Portugal
        <option value="Qatar">Qatar
        <option value="Romania">Romania
        <option value="Russia">Russia
        <option value="Rwanda">Rwanda
        <option value="Saint Kitts and Nevis">Saint Kitts and Nevis
        <option value="Saint Lucia">Saint Lucia
        <option value="Saint Vincent and The Grenadines">Saint Vincent and The Grenadines
        <option value="Samoa">Samoa
        <option value="San Marino">San Marino
        <option value="Sao Tome and Principe">Sao Tome and Principe
        <option value="Saudi Arabia">Saudi Arabia
        <option value="Senegal">Senegal
        <option value="Serbia and Montenegro">Serbia and Montenegro
        <option value="Seychelles">Seychelles
        <option value="Sierra Leone">Sierra Leone
        <option value="Singapore">Singapore
        <option value="Slovakia">Slovakia
        <option value="Slovenia">Slovenia
        <option value="Solomon Islands">Solomon Islands
        <option value="Somalia">Somalia
        <option value="South Africa">South Africa
        <option value="Spain">Spain
        <option value="Sri Lanka">Sri Lanka
        <option value="Sudan">Sudan
        <option value="Suriname">Suriname
        <option value="Swaziland">Swaziland
        <option value="Sweden">Sweden
        <option value="Switzerland">Switzerland
        <option value="Syria">Syria
        <option value="Taiwan">Taiwan
        <option value="Tajikistan">Tajikistan
        <option value="Tanzania">Tanzania
        <option value="Thailand">Thailand
        <option value="Togo">Togo
        <option value="Tonga">Tonga
        <option value="Trinidad and Tobago">Trinidad and Tobago
        <option value="Tunisia">Tunisia
        <option value="Turkey">Turkey
        <option value="Turkmenistan">Turkmenistan
        <option value="Tuvalu">Tuvalu
        <option value="Uganda">Uganda
        <option value="Ukraine">Ukraine
        <option value="United Arab Emirates">United Arab Emirates
        <option value="United Kingdom">United Kingdom
        <option value="Uruguay">Uruguay
        <option value="Uzbekistan">Uzbekistan
        <option value="Vanuatu">Vanuatu
        <option value="Vatican City">Vatican City
        <option value="Venezuela">Venezuela
        <option value="Vietnam">Vietnam
        <option value="Western Sahara">Western Sahara
        <option value="Yemen">Yemen
        <option value="Zambia">Zambia
        <option value="Zimbabwe">Zimbabwe
        </SELECT>
       <input type="submit" value="Join Mailing List" />
</form>
',
      'format' => 'full_html',
    ),
  );
  $export['newsletter_signup_form'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'our_people';
  $box->plugin_key = 'simple';
  $box->title = 'Our People';
  $box->description = 'Our People block for About page';
  $box->options = array(
    'body' => array(
      'value' => '<p>
<a href="/about/people">Staff, Board of Directors, and Volunteers</a>
<a href="/about/work/vendor/vendor-profile">Vendors</a>
<a href="/support/sponsors">Supporters and Sponsors</a>
</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['our_people'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ourwork_menu';
  $box->plugin_key = 'simple';
  $box->title = 'What We Do';
  $box->description = 'Our Work sitewide menu block';
  $box->options = array(
    'body' => array(
      'value' => '<ul id="sr-navigate-side">
  <li><a class="sr-nav sr-nav-vendor" href="/about/work/vendor">Vendor Program</a></li>
  <li><a class="sr-nav sr-nav-resource" href="/about/work/resourceguide">Resource Guide</a></li>
  <li><a class="sr-nav sr-nav-newspaper" href="/about/work/newspaper">Newspaper</a></li>
  <li><a class="sr-nav sr-nav-advocacy" href="/about/work/advocacy">Advocacy</a></li>
</ul>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['ourwork_menu'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'pubschedule11';
  $box->plugin_key = 'simple';
  $box->title = '2011 Publication Schedule';
  $box->description = '2011 publication schedule';
  $box->options = array(
    'body' => array(
      'value' => '<p>2011 Publication Schedule</p><div>Deadlines are a week before the paper is released unless cleared with the editor in advance.</div><ul><li>Jan. 7<br />Deadline Dec. 31</li><li>Jan. 21<br />Deadline Jan. 14</li><li>Feb. 4<br />Deadline Jan. 28</li><li>Feb. 18<br />Deadline Feb. 11</li><li>March 4<br />Deadline Feb. 25</li><li>March 18<br />Deadline March 11</li><li>April 1<br />Deadline March 25</li><li>April 15<br />Deadline April 8</li><li>April 29<br />Deadline April 22</li><li>May 13<br />Deadline May 6</li><li>May 27<br />Deadline May 20</li><li>June 10<br />Deadline June 3</li><li>June 24<br />Deadline June 17</li><li>July 8<br />Deadline July 1</li><li>July 22<br />Deadline July 15</li><li>Aug. 5<br />Deadline July 29</li><li>Aug. 19<br />Deadline Aug. 12</li><li>Sept. 2<br />Deadline Aug. 26</li><li>Sept. 16<br />Deadline Sept. 9</li><li>Sept. 30<br />Deadline Sept. 23</li><li>Oct. 14<br />Deadline Oct. 7</li><li>Oct. 28<br />Deadline Oct. 21</li><li>Nov. 11<br />Deadline Nov. 4</li><li>Nov. 25<br />Deadline Nov. 16*</li><li>Dec. 9<br />Deadline Dec. 2</li><li>Dec. 23<br />Deadline Dec. 14*&nbsp;</li></ul><div>Submissions are best received by e-mail at joanne@streetroots.org</div><div>Or &nbsp;you can send them by fax: 503-227-3117.</div><div>Or to our office at 211 NW Davis St. Portland, OR 97206</div><div>Questions? Please call Joanne Zuhl at 503-228-5657,</div><div>or write to joanne@streetroots.org</div><div>&nbsp;</div><div>* Early deadlines for holiday printing schedule</div>',
      'format' => 'filtered_html',
    ),
  );
  $export['pubschedule11'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'see_our_friends_and_supporters';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'friends and supporters link box';
  $box->options = array(
    'body' => array(
      'value' => '<h2><span><a href="/support/sponsors">See our friends, supporters, and sponsors</a></span></h2>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['see_our_friends_and_supporters'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'whatwedo';
  $box->plugin_key = 'simple';
  $box->title = 'What We Do';
  $box->description = 'What We Do main homepage block';
  $box->options = array(
    'body' => array(
      'value' => '<ul id="sr-navigate" class="clearfix">
  <li><a class="sr-nav sr-nav-vendor" href="/about/work/vendor">Vendor Program</a></li>
  <li><a class="sr-nav sr-nav-resource" href="/about/work/resourceguide">Resource Guide</a></li>
  <li><a class="sr-nav sr-nav-newspaper" href="/about/work/newspaper">Newspaper</a></li>
  <li><a class="sr-nav sr-nav-advocacy" href="/about/work/advocacy">Advocacy</a></li>
</ul>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['whatwedo'] = $box;

  return $export;
}
