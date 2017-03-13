# TimeBank readme.txt

DESCRIPTION
-----------

TimeBank is a module to create a small Time&Credit Exchange Community System (CES).
An exchange community is a community where people coproduce value and exchange services on an informal and non-monetary basis. 

In such a community, its members can exchange "services" on the basis of a credit-based accounting system, where credits are usually hours, indicating the time of support actually lent to someone else belonging to the same community: for this reason, the informal term for a common application of this kind of systems is "time bank".

In such a money-less bank, each person has its own account and can either offer availability for the provision of small services (e.g., to help her study, paint her living room, fixing a window, teaching piano or opening a Facebook account, buying something at the supermarket, caring the pet...) in order to gain more credit to spend within the community, as well as consume the credits accumulated so far to get support from some other member. In pure Time Banks, each hour equals exactly one hour, irrespective of the kind of service.Differently from standard Time Banking systems, our system also allow to provide services as an informal professional, and hence to be paid in traditional ways. In this latter case, the time account of both parties involved is left unvaried, but the system keeps track of the exchange the same, to facilitate accounting and payments between community members. Each transaction can be assessed by the parties involved and the module also provides essential functionalities for notification and communication. In short, our module aims to create an hybrid system between a pure Time Bank (which is an option of configuration) and a service exchange system.

The dependencies that we use in this TimeBank are:

• Offers & Wants: allows you to publish all the offers and requests by placing them in a list or on a calendar. This module allows users to publish their skills and their availability. Since the base of Drupal are the content type (content) it has created a new content type Offers & Wants where defined the various fields in addition to the default ones: added fields (data_inizio, prenota, rate_this, where i am and dammi il percorso) make contents rich of information and allow user to use them in the Time Bank. Views through the form all this information were included on the main page of the portal in the form of lists and calendar. All fields added are actually function calls in other modules: the field data_inizio calls functions in the Calendar module, the field prenota should call functions inside the Registration form, the field Where I am in Geolocation, etc ..

• Community Accounting: allows you to manage all part of Time Credits (our hours). It is a kind of virtual bank where users have their own account-hours and through which can transfer or receive credit; there is also a second currency, Euro: it was decided to also enter a currency not to disadvantage users who fail to offer services. In the section Offers & Wants were added buttons Pay for this (to pay for services received) and Claim for this (to request payment for a service); also through the form Views it was added an entry in the menu to view the own account statement.

• Registration: handles all reservations. Users can book through this form of services or managing reservations to their services. Also this module has been integrated in Offers & Wants field through register field.

• Fivestar: create an evaluation form for the service received, is has been integrated into Community Accounting to enable the evaluation at the time of payment.

• Geolocation: memorize geographical locations as latitude and longitude pairs (lan, lng); in the Time Bank is used to geo-localize on a map the location of those who put an offer/request immediately to inform potential beneficiaries of the service on its position.

• Get Directions: calculates the route between two locations and provides the ability to get directions with Google Maps; its implementation is considered to be relevant in the Time Bank as it promotes and facilitates the meeting between two members of the community.

• ShareThis: enables the opportunity to share page of the portal on a large amount of Social Network; by sharing you know the portal and its mission outside the community, in an attempt to increase the load itself and to involve new members.

• Chatblock: inserts a chat box in a block that can be displayed in any region of the page. The user who has to offer or receive urgently a service can use this chat that allows you to immediately enter into communication with potential customers/suppliers.

• OneAll Social Login: provides the opportunity for visitors to sign in through Facebook in the site; if it is a new user redirects him to the registration page of the portal, if not logged the user on the home page.

• Features: enables the capture and management of features in Drupal. A feature is a collection of Drupal entities which taken together satisfy a certain use-case. Features provides a UI and API for taking different site building components from modules with exportables and bundling them together in a single feature module. A feature module is like any other Drupal module except that it contains additional information in its info file so that configuration can be checked, updated, or reverted programmatically.

INSTALLATION
------------
1. Install Timebank module and the dependencies offers & Wants and timebank_features in directory .../sites/all/modules.
2. Download and install all the depencencies of TimeBank module from admin/modules.
3. Activate timebank_features from admin/modules (it imports fields,calendar, taxonomy terms, registration type and states).
4. Activate TimeBank module.
5. Configure the dependencies modules for own implementative needs, many fields are imported from module timebank_features (important to configure accounting and content type offer/want).
