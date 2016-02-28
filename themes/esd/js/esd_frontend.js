(function($) {

// Breakpoints
// via sass/utils/_vars.scss
// Used by $.matchmedia() in various behaviors.
Drupal.settings.breakpoints = {
  tablet: 'all and (min-width: 740px)',
  desktop: 'all and (min-width: 980px)'
};

Drupal.settings.imgstyles = [
  //slideshow
  {
    tablet: '340w211h',
    desktop: '580w360h'
  },
  //contentright
  {
    tablet: '340wNh',
    desktop: '580wNh'
  }
];

/**
 * changes the dom for different layout sizes.
 */
Drupal.theme.prototype.equalColumns = function() {
  // Ensure Content Height equals Sidebar.
  var brandingHeight = $('.branding').outerHeight();
  $('.l-content').css('min-height', brandingHeight);
};

/**
 * School Score forms
 */
Drupal.theme.prototype.schoolScoreForms = function() {
  $('#school-zip-code-form').submit(function(ev) {
    ev.preventDefault();
    var action = $(this).attr('action');
    var zip = $('#school-zip-code').val();
    var url = action + '?loc=' + zip;
    window.open(url, '_blank');
  });
  $('#school-name-form').submit(function(ev) {
    ev.preventDefault();
    var action = $(this).attr('action');
    var name = $('#school-name').val();
    var url = action + '?name=' + name;
    window.open(url, '_blank');
  });
};

/**
 * Build a selectnav given a Drupal menu ul, and append it after the ul
 *
 * @param $menuUl
 *   jQuery menu ul object
 *
 * @param int menuNum
 *   identifier for navtoselect
 *
 * @return nothing
 */
Drupal.theme.prototype.buildSelectnav = function($menuUl, menuNum) {
  var menuID = 'navtoselect-' + menuNum;
  $menuUl.attr('id', menuID);
  selectnav(menuID, {label:'Select page'});
};

/**
 * Replace image style settings for new breakpoint
 *
 * @param array imgstyles
 *   Objects of image styles in the format:
 *   [ { breakpoint: 'size', breakpoint: 'size' }, { ... } ]
 *
 * @param string breakpoint
 *   Target breakpoint
 *
 * @param domobject img
 *   Image DOM object
 *
 */
Drupal.theme.prototype.respondImg = function(imgstyles, breakpoint, img) {
  var ii, ll;
  for (ii = 0, ll = imgstyles.length; ii < ll; ii += 1) {
    var new_style = imgstyles[ii][breakpoint];
    $.each(imgstyles[ii], function(idx, val) {
      if (idx != breakpoint) {
        img.removeAttribute('height');
        img.removeAttribute('width');
        img.src = img.src.replace(val, new_style);
      }
    });
  }
};

Drupal.theme.prototype.fixFlexsliderHeight = function($slider) {
  // Set fixed height based on the tallest slide
  var slideHeight = 0;
  var captionHeight = 0;
  var maxSlideHeight = 0;
  var maxCaptionHeight = 0;
  // total height
  $slider.find('.slides > li').each(function(){
    slideHeight = $(this).height();
    if (maxSlideHeight < slideHeight) {
      maxSlideHeight = slideHeight;
    }
  });
  // caption height
  $slider.find('.slides > li .slide-caption > a').each(function(){
    captionHeight = $(this).outerHeight();
    if (maxCaptionHeight < captionHeight) {
      maxCaptionHeight = captionHeight;
    }
  });
  $slider.find('ul.slides').css({'height' : maxSlideHeight});
  $slider.find('ul.slides .slide-caption > a').css({'height' : maxCaptionHeight});
}

/**
 * changes the dom for different layout sizes.
 */
Drupal.theme.prototype.layoutResizeChanges = function() {
  var isFront = $('body').hasClass('front');
  var images = document.getElementsByTagName('img')
  if (isFront) {
      //Flexslider
      Drupal.theme('fixFlexsliderHeight', $('#flexslider_views_slideshow_main_frontpage_slideshow-page'));
      Drupal.theme('schoolScoreForms');
  }
  // tablet or larger
  if ($.matchmedia(Drupal.settings.breakpoints.tablet)) {
    // switch images
    var i, l;
    for (i = 0, l = images.length; i < l; i += 1) {
      Drupal.theme('respondImg', Drupal.settings.imgstyles, 'tablet', images[i]);
    }
    if (isFront) {
      // content-right ordering for front page
      $('.l-content-main').prependTo('.l-content-right');
      if ($('#block-boxes-gcal-embed .boxes-box-content').length > 0) {
        if ($('#block-boxes-gcal-embed .boxes-box-content iframe').length == 0) {
          // Load the gCal embed for the first time.
          var embed = '<iframe src="https://www.google.com/calendar/embed?showTitle=0&amp;showNav=0&amp;showDate=0&amp;showPrint=0&amp;showTabs=0&amp;showCalendars=0&amp;showTz=0&amp;mode=AGENDA&amp;height=400&amp;wkst=1&amp;bgcolor=%23FFFFFF&amp;src=excellentschoolsdetroit.org_1l30m4dgnk8eml5pv8df9r8eh0%40group.calendar.google.com&amp;color=%235F6B02&amp;ctz=America%2FNew_York" style=" border-width:0 " width="100%" height="400" frameborder="0" scrolling="no"></iframe>';
          $('#block-boxes-gcal-embed .boxes-box-content').append(embed);
        }
        $('#block-boxes-gcal-embed').show();
      }
      $('#block-views-blog-block-1').show();
    }
    if ($('.l-footer-right .l-region--footer-fourth').length > 0) {
      $('.l-region--footer-fourth').appendTo($('.l-header'));
    }
    $('#block-boxes-social-share').appendTo($('.l-footer-left'));
    $('#block-menu-block-3').appendTo($('.l-footer-middle'));
    $('#block-menu-block-4').appendTo($('.l-footer-middle'));
    $('#block-menu-block-5').appendTo($('.l-footer-right'));
    $('.l-region--actions').appendTo($('.l-content-left'));
    // equal col heights
    Drupal.theme('equalColumns');
    // desktop or larger
    if ($.matchmedia(Drupal.settings.breakpoints.desktop)) {
      // switch images
      var i, l;
      for (i = 0, l = images.length; i < l; i += 1) {
        Drupal.theme('respondImg', Drupal.settings.imgstyles, 'desktop', images[i]);
      }
    }
  }
  // mobile (i.e. restore source order to original)
  else {
    if (isFront) {
      // content-right ordering for front page
      $('.l-region--pre-content').prependTo('.l-content-right');
      $('#block-boxes-gcal-embed').hide();
      $('#block-views-blog-block-1').hide();
    }
    if ($('.l-header .l-region--footer-fourth').length > 0) {
      $('.l-region--footer-fourth').appendTo($('.l-footer-right'));
    }
    $('#block-boxes-social-share').appendTo($('.l-region--footer-third'));
    $('#block-menu-block-3').appendTo($('.l-region--footer-first'));
    $('#block-menu-block-4').appendTo($('.l-region--footer-first'));
    $('#block-menu-block-5').appendTo($('.l-region--footer-second'));
    $('.l-region--actions').appendTo($('.l-content-right'));
    // equal col heights
    $('.l-content').css('min-height','');
  }
};

/**
 * Resize event for switching between layouts.
 */
Drupal.behaviors.resizeEnd = {
  attach: function (context, settings) {
    $(window).load(function() {
      Drupal.theme('layoutResizeChanges');
      $(window).bind('resizeend', function() {
        Drupal.theme('layoutResizeChanges');
      });
    });
  }
};

/**
 * Do imgsizer and captions on some images
 */
Drupal.behaviors.imgBits = {
  attach: function (context, settings) {
    // imgresize
    if (document.getElementById && document.getElementsByTagName) {
      imgSizer.collate($('img', context));
    }
      // captions
    $(".l-content-right .l-content-main img[src*='/580w']", context).each(function() {
      var title = $(this).attr('title');
      if (title.length > 0) {
        $(this).after('<div class="caption">'+ title +'</div>');
      }
    });
  }
};

/**
 * Apply initial design tweaks
 */
Drupal.behaviors.esdInit = {
  attach: function (context, settings) {
    // All the menus!
    var menu_count = 1;
    $('.branding .block--menu > ul.menu', context).each(function() {
      $(this).once('selectnav', function() {
        Drupal.theme('buildSelectnav', $(this), menu_count++);
      });
    });

    // lang selector hack
    $('.page-node-1728 div[role=main]').prepend('<a href="#" id="toggle_lang">Toggle language</a>')
    $('.page-node-1728 #toggle_lang').click(function(ev) {
      ev.preventDefault();
      if (window.location.href.match(/\/es\//)) {
        window.location.href="https://portal.excellentschoolsdetroit.org/node/1728";
      } else {
        window.location.href="https://portal.excellentschoolsdetroit.org/es/node/1728";
      }
    });
    $('.page-node-1776 div[role=main]').prepend('<a href="#" id="toggle_lang">Toggle language</a>')
    $('.page-node-1776 #toggle_lang').click(function(ev) {
      ev.preventDefault();
      if (window.location.href.match(/\/es\//)) {
        window.location.href="https://portal.excellentschoolsdetroit.org/node/1776";
      } else {
        window.location.href="https://portal.excellentschoolsdetroit.org/es/node/1776";
      }
    });
  }
};
})(jQuery);

