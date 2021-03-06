﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cur/model/AWSRegion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostandUsageReportService
  {
    namespace Model
    {
      namespace AWSRegionMapper
      {

        static const int us_east_1_HASH = HashingUtils::HashString("us-east-1");
        static const int us_west_1_HASH = HashingUtils::HashString("us-west-1");
        static const int us_west_2_HASH = HashingUtils::HashString("us-west-2");
        static const int eu_central_1_HASH = HashingUtils::HashString("eu-central-1");
        static const int eu_west_1_HASH = HashingUtils::HashString("eu-west-1");
        static const int ap_southeast_1_HASH = HashingUtils::HashString("ap-southeast-1");
        static const int ap_southeast_2_HASH = HashingUtils::HashString("ap-southeast-2");
        static const int ap_northeast_1_HASH = HashingUtils::HashString("ap-northeast-1");
        static const int eu_north_1_HASH = HashingUtils::HashString("eu-north-1");
        static const int ap_northeast_3_HASH = HashingUtils::HashString("ap-northeast-3");
        static const int ap_east_1_HASH = HashingUtils::HashString("ap-east-1");


        AWSRegion GetAWSRegionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == us_east_1_HASH)
          {
            return AWSRegion::us_east_1;
          }
          else if (hashCode == us_west_1_HASH)
          {
            return AWSRegion::us_west_1;
          }
          else if (hashCode == us_west_2_HASH)
          {
            return AWSRegion::us_west_2;
          }
          else if (hashCode == eu_central_1_HASH)
          {
            return AWSRegion::eu_central_1;
          }
          else if (hashCode == eu_west_1_HASH)
          {
            return AWSRegion::eu_west_1;
          }
          else if (hashCode == ap_southeast_1_HASH)
          {
            return AWSRegion::ap_southeast_1;
          }
          else if (hashCode == ap_southeast_2_HASH)
          {
            return AWSRegion::ap_southeast_2;
          }
          else if (hashCode == ap_northeast_1_HASH)
          {
            return AWSRegion::ap_northeast_1;
          }
          else if (hashCode == eu_north_1_HASH)
          {
            return AWSRegion::eu_north_1;
          }
          else if (hashCode == ap_northeast_3_HASH)
          {
            return AWSRegion::ap_northeast_3;
          }
          else if (hashCode == ap_east_1_HASH)
          {
            return AWSRegion::ap_east_1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AWSRegion>(hashCode);
          }

          return AWSRegion::NOT_SET;
        }

        Aws::String GetNameForAWSRegion(AWSRegion enumValue)
        {
          switch(enumValue)
          {
          case AWSRegion::us_east_1:
            return "us-east-1";
          case AWSRegion::us_west_1:
            return "us-west-1";
          case AWSRegion::us_west_2:
            return "us-west-2";
          case AWSRegion::eu_central_1:
            return "eu-central-1";
          case AWSRegion::eu_west_1:
            return "eu-west-1";
          case AWSRegion::ap_southeast_1:
            return "ap-southeast-1";
          case AWSRegion::ap_southeast_2:
            return "ap-southeast-2";
          case AWSRegion::ap_northeast_1:
            return "ap-northeast-1";
          case AWSRegion::eu_north_1:
            return "eu-north-1";
          case AWSRegion::ap_northeast_3:
            return "ap-northeast-3";
          case AWSRegion::ap_east_1:
            return "ap-east-1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AWSRegionMapper
    } // namespace Model
  } // namespace CostandUsageReportService
} // namespace Aws
